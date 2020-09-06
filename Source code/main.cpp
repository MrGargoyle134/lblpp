/*
Copyright (C) 2020 Blidzy

This file is part of lbl++ : you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.

*/
#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>

int A=0,B=0,C=0,D=0,E=0,F=0;

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

        else if(line == "SUBAB") A -= B;
        else if(line == "SUBAC") A -= C;
        else if(line == "SUBAD") A -= D;
        else if(line == "SUBAE") A -= E;
        else if(line == "SUBAF") A -= F;

        else if(line == "SUBBA") B -= A;
        else if(line == "SUBBC") B -= C;
        else if(line == "SUBBD") B -= D;
        else if(line == "SUBBE") B -= E;
        else if(line == "SUBBF") B -= F;

        else if(line == "SUBCA") C -= A;
        else if(line == "SUBCB") C -= B;
        else if(line == "SUBCD") C -= D;
        else if(line == "SUBCE") C -= E;
        else if(line == "SUBCF") C -= F;

        else if(line == "SUBDA") D -= A;
        else if(line == "SUBDB") D -= B;
        else if(line == "SUBDC") D -= C;
        else if(line == "SUBDE") D -= E;
        else if(line == "SUBDF") D -= F;

        else if(line == "SUBEA") E -= A;
        else if(line == "SUBEB") E -= B;
        else if(line == "SUBEC") E -= C;
        else if(line == "SUBEE") E -= D;
        else if(line == "SUBEF") E -= F;

        else if(line == "SUBFA") F -= A;
        else if(line == "SUBFB") F -= B;
        else if(line == "SUBFC") F -= C;
        else if(line == "SUBFE") F -= D;
        else if(line == "SUBFF") F -= E;

        else if(line == "MULTAB") A *= B;
        else if(line == "MULTAC") A *= C;
        else if(line == "MULTAD") A *= D;
        else if(line == "MULTAE") A *= E;
        else if(line == "MULTAF") A *= F;

        else if(line == "MULTBA") B *= A;
        else if(line == "MULTBC") B *= C;
        else if(line == "MULTBD") B *= D;
        else if(line == "MULTBE") B *= E;
        else if(line == "MULTBF") B *= F;

        else if(line == "MULTCA") C *= A;
        else if(line == "MULTCB") C *= B;
        else if(line == "MULTCD") C *= D;
        else if(line == "MULTCE") C *= E;
        else if(line == "MULTCF") C *= F;

        else if(line == "MULTDA") D *= A;
        else if(line == "MULTDB") D *= B;
        else if(line == "MULTDC") D *= C;
        else if(line == "MULTDE") D *= E;
        else if(line == "MULTDF") D *= F;

        else if(line == "MULTEA") E *= A;
        else if(line == "MULTEB") E *= B;
        else if(line == "MULTEC") E *= C;
        else if(line == "MULTEE") E *= D;
        else if(line == "MULTEF") E *= F;

        else if(line == "MULTFA") F *= A;
        else if(line == "MULTFB") F *= B;
        else if(line == "MULTFC") F *= C;
        else if(line == "MULTFE") F *= D;
        else if(line == "MULTFF") F *= E;
        else if(line == "DIVAB") A /= B;
        else if(line == "DIVAC") A /= C;
        else if(line == "DIVAD") A /= D;
        else if(line == "DIVAE") A /= E;
        else if(line == "DIVAF") A /= F;

        else if(line == "DIVBA") B /= A;
        else if(line == "DIVBC") B /= C;
        else if(line == "DIVBD") B /= D;
        else if(line == "DIVBE") B /= E;
        else if(line == "DIVBF") B /= F;

        else if(line == "DIVCA") C /= A;
        else if(line == "DIVCB") C /= B;
        else if(line == "DIVCD") C /= D;
        else if(line == "DIVCE") C /= E;
        else if(line == "DIVCF") C /= F;

        else if(line == "DIVDA") D /= A;
        else if(line == "DIVDB") D /= B;
        else if(line == "DIVDC") D /= C;
        else if(line == "DIVDE") D /= E;
        else if(line == "DIVDF") D /= F;

        else if(line == "DIVEA") E /= A;
        else if(line == "DIVEB") E /= B;
        else if(line == "DIVEC") E /= C;
        else if(line == "DIVEE") E /= D;
        else if(line == "DIVEF") E /= F;

        else if(line == "DIVFA") F /= A;
        else if(line == "DIVFB") F /= B;
        else if(line == "DIVFC") F /= C;
        else if(line == "DIVFE") F /= D;
        else if(line == "DIVFF") F /= E;


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
    if(argc < 2) { fprintf(stderr, "\aUsage: %s <file.lpp>\n", argv[0]); return -1; }
    LoadFile(argv[1]);

    return 0;
}