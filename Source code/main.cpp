#include <iostream>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <string>
#include <vector>


std::vector<char*> Program;
enum Reg
{A,B,C,D,E,F,_,l, // Actual Line, can be modificate by the code, but automatically incremented every line 
__COUNT};
int registers[Reg::__COUNT] = {};
void LoadFile(char* file)
{   
    FILE* source = fopen(file,"r");
    char line[5];
    if (source == NULL)
    {
        printf("FATAL ERROR : no such file or directory");
        exit(1);
    }
    else
    {
        while (fgets(line, 5, source) )
        {
            
Program.push_back(line);

        }
    }

};

void op(const char *inst, int& line)
{
    
    Reg i = static_cast<Reg>(inst[4] - 'A');
    Reg j = static_cast<Reg>(inst[5] - 'A');
    if (strncmp(inst, "DIV", 3) == 0)
    {registers[i] /= registers[j];}
    else if (strncmp(inst, "MUL", 3) == 0)
    {registers[i] *= registers[j];}
    else if (strncmp(inst, "ADD", 3) == 0)
    {registers[i] += registers[j];}
    else if (strncmp(inst, "SUB", 3) == 0)
    {registers[i] -= registers[j];}
    else if (strncmp(inst, "MOD", 3) == 0)
    {registers[i] %= registers[j];}
    else if (strncmp(inst, "AND", 3) == 0)
    {registers[i] &= registers[j];}
    else if (strncmp(inst, "OR_", 3) == 0)
    {registers[i] |= registers[j];}
    else if (strncmp(inst, "MOV", 3) == 0)
    {registers[i] = registers[j];}
    else if (strncmp(inst, "SWP", 3) == 0)
    {int tmp = registers[i];
    registers[i] = registers[j];
    registers[j] = tmp;}
    else if (strncmp(inst, "CLS_",4))
    {registers[j]=0;}
    else if (strncmp(inst, "END_",4)==0)
    {printf("\n");}
    else if (strncmp(inst, "DII_",4)==0)
    {printf("%d", registers[j]);}
    else if (strncmp(inst, "DIC_",4)==0)
    {printf("%c",registers[j]);}
    else if (strncmp(inst, "REC_",4)==0)
    {registers[j]=std::getchar();}
    else if (strncmp(inst, "INC_",4)==0)
    {registers[j]++;}
    else if (strncmp(inst, "DEC_",4)==0)
    {registers[j]--;}
    else if (strncmp(inst, "EQ_",3)==0)
    {if (registers[i]!= registers[j]){registers[8]++;}}
    else if (strncmp(inst, "SUP",3)==0)
    {if (registers[i] <= registers[j]){registers[8]++;}}
    else if (strncmp(inst, "INF",3)==0)
    {if (registers[i] >= registers[j]){registers[8]++;}}
    else if (strncmp(inst, "IOE",3)==0)
    {if (registers[i] > registers[j]){registers[8]++;}}
    else if (strncmp(inst, "SOE",3)==0)
    {if (registers[i] < registers[j]){registers[8]++;}}
    else { std::cerr << "Error : Unknow instruction " << "-> " << Program[i] << std::endl;exit(1);}
    line = registers[8];
}

int main(int argc, char* argv[])
{
    LoadFile(argv[1]);
    for(int i=0; i<Program.size(); ++i)
    {
        op (Program[i], i);
    }
}