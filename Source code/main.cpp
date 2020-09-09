#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> Program;

int A=0,B=0,C=0,D=0,E=0,F=0;

void LoadFile(char* file)
{
   std::ifstream File(file);

   if(File)
   {
      std::string line;

      while(getline(File, line))
      {
         Program.push_back(line);
      }
   }
   else
   {
      std::cerr << "FATAL ERROR : no such file or directory" << std::endl;
   }
};

int main(int argc, char* argv[])
{
    
    LoadFile(argv[1]);
    
    for(long unsigned int i=0; i<Program.size(); ++i)
    {
        if(Program[i] == "INCA") A++;
        else if(Program[i] == "INCB") B++;
        else if(Program[i] == "INCC") C++;
        else if(Program[i] == "INCD") D++;
        else if(Program[i] == "INCE") E++;
        else if(Program[i] == "INCF") F++;

        else if(Program[i] == "DECA") A--;
        else if(Program[i] == "DECB") B--;
        else if(Program[i] == "DECC") C--;
        else if(Program[i] == "DECD") D--;
        else if(Program[i] == "DECE") E--;
        else if(Program[i] == "DECF") F--;

        else if(Program[i] == "DISA") printf("%d", A);
        else if(Program[i] == "DISB") printf("%d", B);
        else if(Program[i] == "DISC") printf("%d", C);
        else if(Program[i] == "DISD") printf("%d", D);
        else if(Program[i] == "DISE") printf("%d", E);
        else if(Program[i] == "DISF") printf("%d", F);

        else if(Program[i] == "DICA") printf("%c", A);
        else if(Program[i] == "DICB") printf("%c", B);
        else if(Program[i] == "DICC") printf("%c", C);
        else if(Program[i] == "DICD") printf("%c", D);
        else if(Program[i] == "DICE") printf("%c", E);
        else if(Program[i] == "DICF") printf("%c", F);

        else if(Program[i] == "ENDL") printf("\n");

        else if(Program[i] == "EQAB") A = B;
        else if(Program[i] == "EQAC") A = C;
        else if(Program[i] == "EQAD") A = D;
        else if(Program[i] == "EQAE") A = E;
        else if(Program[i] == "EQAF") A = F;

        else if(Program[i] == "EQBA") B = A;
        else if(Program[i] == "EQBC") B = C;
        else if(Program[i] == "EQBD") B = D;
        else if(Program[i] == "EQBE") B = E;
        else if(Program[i] == "EQBF") B = F;

        else if(Program[i] == "EQCA") C = A;
        else if(Program[i] == "EQCB") C = B;
        else if(Program[i] == "EQCD") C = D;
        else if(Program[i] == "EQCE") C = E;
        else if(Program[i] == "EQCF") C = F;

        else if(Program[i] == "EQDA") D = A;
        else if(Program[i] == "EQDB") D = B;
        else if(Program[i] == "EQDC") D = C;
        else if(Program[i] == "EQDE") D = E;
        else if(Program[i] == "EQDF") D = F;

        else if(Program[i] == "EQEA") E = A;
        else if(Program[i] == "EQEB") E = B;
        else if(Program[i] == "EQEC") E = C;
        else if(Program[i] == "EQEE") E = D;
        else if(Program[i] == "EQEF") E = F;

        else if(Program[i] == "EQFA") F = A;
        else if(Program[i] == "EQFB") F = B;
        else if(Program[i] == "EQFC") F = C;
        else if(Program[i] == "EQFE") F = D;
        else if(Program[i] == "EQFF") F = E;

        else if(Program[i] == "CLSA") A = 0;
        else if(Program[i] == "CLSB") B = 0;
        else if(Program[i] == "CLSC") C = 0;
        else if(Program[i] == "CLSD") D = 0;
        else if(Program[i] == "CLSE") E = 0;
        else if(Program[i] == "CLSF") F = 0;
        else if (Program[i] == "READA") A = getchar();
        else if (Program[i] == "READB") B = getchar();
        else if (Program[i] == "READC") C = getchar();
        else if (Program[i] == "READD") D = getchar();
        else if (Program[i] == "READE") E = getchar();
        else if (Program[i] == "READF") F = getchar();


        else if(Program[i] == "ADDAB") A += B;
        else if(Program[i] == "ADDAC") A += C;
        else if(Program[i] == "ADDAD") A += D;
        else if(Program[i] == "ADDAE") A += E;
        else if(Program[i] == "ADDAF") A += F;

        else if(Program[i] == "ADDBA") B += A;
        else if(Program[i] == "ADDBC") B += C;
        else if(Program[i] == "ADDBD") B += D;
        else if(Program[i] == "ADDBE") B += E;
        else if(Program[i] == "ADDBF") B += F;

        else if(Program[i] == "ADDCA") C += A;
        else if(Program[i] == "ADDCB") C += B;
        else if(Program[i] == "ADDCD") C += D;
        else if(Program[i] == "ADDCE") C += E;
        else if(Program[i] == "ADDCF") C += F;

        else if(Program[i] == "ADDDA") D += A;
        else if(Program[i] == "ADDDB") D += B;
        else if(Program[i] == "ADDDC") D += C;
        else if(Program[i] == "ADDDE") D += E;
        else if(Program[i] == "ADDDF") D += F;

        else if(Program[i] == "ADDEA") E += A;
        else if(Program[i] == "ADDEB") E += B;
        else if(Program[i] == "ADDEC") E += C;
        else if(Program[i] == "ADDEE") E += D;
        else if(Program[i] == "ADDEF") E += F;

        else if(Program[i] == "ADDFA") F += A;
        else if(Program[i] == "ADDFB") F += B;
        else if(Program[i] == "ADDFC") F += C;
        else if(Program[i] == "ADDFE") F += D;
        else if(Program[i] == "ADDFF") F += E;

        else if(Program[i] == "SUBAB") A -= B;
        else if(Program[i] == "SUBAC") A -= C;
        else if(Program[i] == "SUBAD") A -= D;
        else if(Program[i] == "SUBAE") A -= E;
        else if(Program[i] == "SUBAF") A -= F;

        else if(Program[i] == "SUBBA") B -= A;
        else if(Program[i] == "SUBBC") B -= C;
        else if(Program[i] == "SUBBD") B -= D;
        else if(Program[i] == "SUBBE") B -= E;
        else if(Program[i] == "SUBBF") B -= F;

        else if(Program[i] == "SUBCA") C -= A;
        else if(Program[i] == "SUBCB") C -= B;
        else if(Program[i] == "SUBCD") C -= D;
        else if(Program[i] == "SUBCE") C -= E;
        else if(Program[i] == "SUBCF") C -= F;

        else if(Program[i] == "SUBDA") D -= A;
        else if(Program[i] == "SUBDB") D -= B;
        else if(Program[i] == "SUBDC") D -= C;
        else if(Program[i] == "SUBDE") D -= E;
        else if(Program[i] == "SUBDF") D -= F;

        else if(Program[i] == "SUBEA") E -= A;
        else if(Program[i] == "SUBEB") E -= B;
        else if(Program[i] == "SUBEC") E -= C;
        else if(Program[i] == "SUBEE") E -= D;
        else if(Program[i] == "SUBEF") E -= F;

        else if(Program[i] == "SUBFA") F -= A;
        else if(Program[i] == "SUBFB") F -= B;
        else if(Program[i] == "SUBFC") F -= C;
        else if(Program[i] == "SUBFE") F -= D;
        else if(Program[i] == "SUBFF") F -= E;

        else if(Program[i] == "MULTAB") A *= B;
        else if(Program[i] == "MULTAC") A *= C;
        else if(Program[i] == "MULTAD") A *= D;
        else if(Program[i] == "MULTAE") A *= E;
        else if(Program[i] == "MULTAF") A *= F;

        else if(Program[i] == "MULTBA") B *= A;
        else if(Program[i] == "MULTBC") B *= C;
        else if(Program[i] == "MULTBD") B *= D;
        else if(Program[i] == "MULTBE") B *= E;
        else if(Program[i] == "MULTBF") B *= F;

        else if(Program[i] == "MULTCA") C *= A;
        else if(Program[i] == "MULTCB") C *= B;
        else if(Program[i] == "MULTCD") C *= D;
        else if(Program[i] == "MULTCE") C *= E;
        else if(Program[i] == "MULTCF") C *= F;

        else if(Program[i] == "MULTDA") D *= A;
        else if(Program[i] == "MULTDB") D *= B;
        else if(Program[i] == "MULTDC") D *= C;
        else if(Program[i] == "MULTDE") D *= E;
        else if(Program[i] == "MULTDF") D *= F;

        else if(Program[i] == "MULTEA") E *= A;
        else if(Program[i] == "MULTEB") E *= B;
        else if(Program[i] == "MULTEC") E *= C;
        else if(Program[i] == "MULTEE") E *= D;
        else if(Program[i] == "MULTEF") E *= F;

        else if(Program[i] == "MULTFA") F *= A;
        else if(Program[i] == "MULTFB") F *= B;
        else if(Program[i] == "MULTFC") F *= C;
        else if(Program[i] == "MULTFE") F *= D;
        else if(Program[i] == "MULTFF") F *= E;
        else if(Program[i] == "DIVAB") A /= B;
        else if(Program[i] == "DIVAC") A /= C;
        else if(Program[i] == "DIVAD") A /= D;
        else if(Program[i] == "DIVAE") A /= E;
        else if(Program[i] == "DIVAF") A /= F;

        else if(Program[i] == "DIVBA") B /= A;
        else if(Program[i] == "DIVBC") B /= C;
        else if(Program[i] == "DIVBD") B /= D;
        else if(Program[i] == "DIVBE") B /= E;
        else if(Program[i] == "DIVBF") B /= F;

        else if(Program[i] == "DIVCA") C /= A;
        else if(Program[i] == "DIVCB") C /= B;
        else if(Program[i] == "DIVCD") C /= D;
        else if(Program[i] == "DIVCE") C /= E;
        else if(Program[i] == "DIVCF") C /= F;

        else if(Program[i] == "DIVDA") D /= A;
        else if(Program[i] == "DIVDB") D /= B;
        else if(Program[i] == "DIVDC") D /= C;
        else if(Program[i] == "DIVDE") D /= E;
        else if(Program[i] == "DIVDF") D /= F;

        else if(Program[i] == "DIVEA") E /= A;
        else if(Program[i] == "DIVEB") E /= B;
        else if(Program[i] == "DIVEC") E /= C;
        else if(Program[i] == "DIVEE") E /= D;
        else if(Program[i] == "DIVEF") E /= F;

        else if(Program[i] == "DIVFA") F /= A;
        else if(Program[i] == "DIVFB") F /= B;
        else if(Program[i] == "DIVFC") F /= C;
        else if(Program[i] == "DIVFE") F /= D;
        else if(Program[i] == "DIVFF") F /= E;

        else if (Program[i]== "BACK") i = 0;
   
        else { std::cerr << "\a\nError at Program[i] " << ++i << ": Unknow instruction.\n" << "-> " << Program[i] << std::endl; return -1;}
    }
}