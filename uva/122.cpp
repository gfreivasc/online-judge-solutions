#include <cstdio>
#include <cstdlib>
#include <cstring>
#define NUM_NODES 256 * 256

char sOut[256 * 16];
char sBuf[16];

template <class T>
class Tree
{
private:
    T heap[NUM_NODES];
    int hs[NUM_NODES];  // HeapStatus - 0: Não Setado; 1: Setado; 2: Não setado com filho
    bool errflag;
    int iCount;
    int eCount;
public:
    Tree()
    {
        this->errflag = false;
        this->iCount = 0;
        memset(this->heap, 0, NUM_NODES);
        memset(this->hs, 0, NUM_NODES);
    }

    void insert(T content, char* dir);
    void readTree();
    bool isEmpty();
    void setInvalid();
};

template <class T>
void Tree<T>::insert(T content, char* dir)
{
    int aux = 1;
    for(int i = 0; dir[i] != '\0'; i++)
    {
        // Nó da direita, posição 2n + 1
        if(dir[i] == 'R')
        {
            aux *= 2;
            aux += 1;
        }
        // Nó da esquerda, posição 2n 
        else if(dir[i] == 'L')
        {
            aux *= 2;
        }
    }

    // Verifica se o nó inserido é filho de um nó não setado.
    if(aux%2 && (aux - 1) && !this->hs[(aux - 1)/2 - 1])
    {
        this->hs[(aux - 1)/2 - 1] = 2;
        this->iCount++;
    } else if(!(aux%2) && !this->hs[aux/2 - 1])
    {
        this->hs[aux/2 - 1] = 2;
        this->iCount++;
    }

    // Se o nó não foi setado e não tem filhos setados.
    if(!this->hs[aux - 1])
    {
        this->heap[aux - 1] = content;
        this->hs[aux - 1] = 1;
        this->eCount++;      
    } 
    
    // Se o nó não foi setado mas tem filho setado.
    else if(this->hs[aux - 1] == 2)
    {
        this->heap[aux - 1] = content;
        this->hs[aux - 1] = 1;
        this->iCount--;
        this->eCount++;
    } else this->errflag = true;    // Se o nó já havia sido setado.
}

template <class T>
void Tree<T>::readTree()
{
    if(!this->errflag && !this->iCount)
    {
        for(int i = 0; i < NUM_NODES; i++)
        {
            if(this->hs[i])
            {
                this->eCount--;
                sprintf(sBuf, "%d ", (int) this->heap[i]);
                strcat(sOut, sBuf);
            }
            if (!this->eCount) break;
        }
        sOut[strlen(sOut) - 1] = '\n';
        printf("%s", sOut);
        memset(sOut, 0, 256 * 10);
    } else printf("not complete\n");
}

template <class T>
bool Tree<T>::isEmpty()
{
    return !((bool) this->eCount);
}

template <class T>
void Tree<T>::setInvalid()
{
    this->errflag = true;
}

int main()
{
    Tree<unsigned long> *tree;
    char buf[32];
    unsigned long i_buf;

    while(scanf("%s", buf) > 0)
    {
        tree = new Tree<unsigned long>();
        while(strcmp(buf, "()"))
        {
            i_buf = 0;
            for(int i = 1; buf[i] != ','; i++)
            {
                if(buf[i] == '-')
                {
                    tree->setInvalid();
                    break;
                }
                if((buf[i] >= '0')&&(buf[i] <= '9'))
                {
                    i_buf = i_buf*10 + (buf[i] - '0');
                }
            }
            if(!i_buf) tree->setInvalid();
            else tree->insert(i_buf, buf);
            scanf("%s", buf);
        }
        if(!tree->isEmpty()) tree->readTree();
        else printf("not complete\n");
        delete tree;
    }

    return 0;
}