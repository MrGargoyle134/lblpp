#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

int A=0,B=0,C=0,D=0,E=0,F=0;
bool ok;
void LoadFile(char* file)
{ 
   std::ifstream File(file);

   if(File)
   {
      std::string line;
      int i = 0;

      while(getline(File, line))
      { 
        if(line == "INCA") A++;
        else if(line == "INCB") B++;
        else if(line == "INCC") C++;
        else if(line == "INCD") D++;
        else if(line == "INCE") E++;
        else if(line == "INCF") F++;

        else if(line == "DECA") A--;
        else if(line == "DECB") B--;
        else if(line == "DECC") C--;
        else if(line == "DECD") D--;
        else if(line == "DECE") E--;
        else if(line == "DECF") F--;

        else if(line == "DISA") printf("%d", A);
        else if(line == "DISB") printf("%d", B);
        else if(line == "DISC") printf("%d", C);
        else if(line == "DISD") printf("%d", D);
        else if(line == "DISE") printf("%d", E);
        else if(line == "DISF") printf("%d", F);

        else if(line == "DICA") printf("%c", A);
        else if(line == "DICB") printf("%c", B);
        else if(line == "DICC") printf("%c", C);
        else if(line == "DICD") printf("%c", D);
        else if(line == "DICE") printf("%c", E);
        else if(line == "DICF") printf("%c", F);

        else if(line == "ENDL") printf("\n");

        else if(line == "EQAB") A = B;
        else if(line == "EQAC") A = C;
        else if(line == "EQAD") A = D;
        else if(line == "EQAE") A = E;
        else if(line == "EQAF") A = F;

        else if(line == "EQBA") B = A;
        else if(line == "EQBC") B = C;
        else if(line == "EQBD") B = D;
        else if(line == "EQBE") B = E;
        else if(line == "EQBF") B = F;

        else if(line == "EQCA") C = A;
        else if(line == "EQCB") C = B;
        else if(line == "EQCD") C = D;
        else if(line == "EQCE") C = E;
        else if(line == "EQCF") C = F;

        else if(line == "EQDA") D = A;
        else if(line == "EQDB") D = B;
        else if(line == "EQDC") D = C;
        else if(line == "EQDE") D = E;
        else if(line == "EQDF") D = F;

        else if(line == "EQEA") E = A;
        else if(line == "EQEB") E = B;
        else if(line == "EQEC") E = C;
        else if(line == "EQEE") E = D;
        else if(line == "EQEF") E = F;

        else if(line == "EQFA") F = A;
        else if(line == "EQFB") F = B;
        else if(line == "EQFC") F = C;
        else if(line == "EQFE") F = D;
        else if(line == "EQFF") F = E;

        else if(line == "CLSA") A = 0;
        else if(line == "CLSB") B = 0;
        else if(line == "CLSC") C = 0;
        else if(line == "CLSD") D = 0;
        else if(line == "CLSE") E = 0;
        else if(line == "CLSF") F = 0;

        else if (line == "READA") A = getchar();
        else if (line == "READB") B = getchar();
        else if (line == "READC") C = getchar();
        else if (line == "READD") D = getchar();
        else if (line == "READE") E = getchar();
        else if (line == "READF") F = getchar();


        else if(line == "ADDAB") A += B;
        else if(line == "ADDAC") A += C;
        else if(line == "ADDAD") A += D;
        else if(line == "ADDAE") A += E;
        else if(line == "ADDAF") A += F;

        else if(line == "ADDBA") B += A;
        else if(line == "ADDBC") B += C;
        else if(line == "ADDBD") B += D;
        else if(line == "ADDBE") B += E;
        else if(line == "ADDBF") B += F;

        else if(line == "ADDCA") C += A;
        else if(line == "ADDCB") C += B;
        else if(line == "ADDCD") C += D;
        else if(line == "ADDCE") C += E;
        else if(line == "ADDCF") C += F;

        else if(line == "ADDDA") D += A;
        else if(line == "ADDDB") D += B;
        else if(line == "ADDDC") D += C;
        else if(line == "ADDDE") D += E;
        else if(line == "ADDDF") D += F;

        else if(line == "ADDEA") E += A;
        else if(line == "ADDEB") E += B;
        else if(line == "ADDEC") E += C;
        else if(line == "ADDEE") E += D;
        else if(line == "ADDEF") E += F;

        else if(line == "ADDFA") F += A;
        else if(line == "ADDFB") F += B;
        else if(line == "ADDFC") F += C;
        else if(line == "ADDFE") F += D;
        else if(line == "ADDFF") F += E;


        else { std::cerr << "\a\nError at line " << ++i << ": Unknow instruction.\n" << "-> " << line << std::endl; exit(-1);}
	i++;
      
      }
   }
   else
   {
      std::cerr << "ERROR: can't open the file." << std::endl;
      exit(-1);
   }
}

int main(int argc, char* argv[])
{
    if(argc < 2) { fprintf(stderr, "\aUsage: %s <file.lbl>\n", argv[0]); return -1; }
    LoadFile(argv[1]);

    return 0;
}