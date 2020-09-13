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

        else if(line == "SOUSAB") A -= B;
        else if(line == "SOUSAC") A -= C;
        else if(line == "SOUSAD") A -= D;
        else if(line == "SOUSAE") A -= E;
        else if(line == "SOUSAF") A -= F;

        else if(line == "SOUSBA") B -= A;
        else if(line == "SOUSBC") B -= C;
        else if(line == "SOUSBD") B -= D;
        else if(line == "SOUSBE") B -= E;
        else if(line == "SOUSBF") B -= F;

        else if(line == "SOUSCA") C -= A;
        else if(line == "SOUSCB") C -= B;
        else if(line == "SOUSCD") C -= D;
        else if(line == "SOUSCE") C -= E;
        else if(line == "SOUSCF") C -= F;

        else if(line == "SOUSDA") D -= A;
        else if(line == "SOUSDB") D -= B;
        else if(line == "SOUSDC") D -= C;
        else if(line == "SOUSDE") D -= E;
        else if(line == "SOUSDF") D -= F;

        else if(line == "SOUSEA") E -= A;
        else if(line == "SOUSEB") E -= B;
        else if(line == "SOUSEC") E -= C;
        else if(line == "SOUSEE") E -= D;
        else if(line == "SOUSEF") E -= F;

        else if(line == "SOUSFA") F -= A;
        else if(line == "SOUSFB") F -= B;
        else if(line == "SOUSFC") F -= C;
        else if(line == "SOUSFE") F -= D;
        else if(line == "SOUSFF") F -= E;

        else if(line == "PROAB") A *= B;
        else if(line == "PROAC") A *= C;
        else if(line == "PROAD") A *= D;
        else if(line == "PROAE") A *= E;
        else if(line == "PROAF") A *= F;

        else if(line == "PROBA") B *= A;
        else if(line == "PROBC") B *= C;
        else if(line == "PROBD") B *= D;
        else if(line == "PROBE") B *= E;
        else if(line == "PROBF") B *= F;

        else if(line == "PROCA") C *= A;
        else if(line == "PROCB") C *= B;
        else if(line == "PROCD") C *= D;
        else if(line == "PROCE") C *= E;
        else if(line == "PROCF") C *= F;

        else if(line == "PRODA") D *= A;
        else if(line == "PRODB") D *= B;
        else if(line == "PRODC") D *= C;
        else if(line == "PRODE") D *= E;
        else if(line == "PRODF") D *= F;

        else if(line == "PROEA") E *= A;
        else if(line == "PROEB") E *= B;
        else if(line == "PROEC") E *= C;
        else if(line == "PROED") E *= D;
        else if(line == "PROEF") E *= F;

        else if(line == "PROFA") F *= A;
        else if(line == "PROFB") F *= B;
        else if(line == "PROFC") F *= C;
        else if(line == "PROFD") F *= D;
        else if(line == "PROFE") F *= E;

	else if(line == "SHLAB") A <<= B;
	else if(line == "SHLAC") A <<= C;
	else if(line == "SHLAD") A <<= D;
	else if(line == "SHLAE") A <<= E;
	else if(line == "SHLAF") A <<= F;
	else if(line == "SHRAB") A >>= B;
	else if(line == "SHRAC") A >>= C;
	else if(line == "SHRAD") A >>= D;
	else if(line == "SHRAE") A >>= E;
	else if(line == "SHRAF") A >>= F;

	else if(line == "SHLBA") B <<= A;
	else if(line == "SHLBC") B <<= C;
	else if(line == "SHLBD") B <<= D;
	else if(line == "SHLBE") B <<= E;
	else if(line == "SHLBF") B <<= F;
	else if(line == "SHRBA") B >>= A;
	else if(line == "SHRBC") B >>= C;
	else if(line == "SHRBD") B >>= D;
	else if(line == "SHRBE") B >>= E;
	else if(line == "SHRBF") B >>= F;


	else if(line == "SHLCB") C <<= B;
	else if(line == "SHLCA") C <<= C;
	else if(line == "SHLCD") C <<= D;
	else if(line == "SHLCE") C <<= E;
	else if(line == "SHLCF") C <<= F;
	else if(line == "SHRCB") C >>= B;
	else if(line == "SHRCA") C >>= C;
	else if(line == "SHRCD") C >>= D;
	else if(line == "SHRCE") C >>= E;
	else if(line == "SHRCF") C >>= F;


	else if(line == "SHLDB") D <<= B;
	else if(line == "SHLDC") D <<= C;
	else if(line == "SHLDA") D <<= D;
	else if(line == "SHLDE") D <<= E;
	else if(line == "SHLDF") D <<= F;
	else if(line == "SHRDB") D >>= B;
	else if(line == "SHRDC") D >>= C;
	else if(line == "SHRDA") D >>= D;
	else if(line == "SHRDE") D >>= E;
	else if(line == "SHRDF") D >>= F;


	else if(line == "SHLEB") E <<= B;
	else if(line == "SHLEC") E <<= C;
	else if(line == "SHLED") E <<= D;
	else if(line == "SHLEA") E <<= E;
	else if(line == "SHLEF") E <<= F;
	else if(line == "SHREB") E >>= B;
	else if(line == "SHREC") E >>= C;
	else if(line == "SHRED") E >>= D;
	else if(line == "SHREA") E >>= E;
	else if(line == "SHREF") E >>= F;


	else if(line == "SHLFB") F <<= B;
	else if(line == "SHLFC") F <<= C;
	else if(line == "SHLFD") F <<= D;
	else if(line == "SHLFE") F <<= E;
	else if(line == "SHLFA") F <<= F;
	else if(line == "SHRFB") F >>= B;
	else if(line == "SHRFC") F >>= C;
	else if(line == "SHRFD") F >>= D;
	else if(line == "SHRFE") F >>= E;
	else if(line == "SHRFA") F >>= F;


	else if(line == "IFAEQB") {if(A==B) putchar(A);}
	else if(line == "IFAEQC") {if(A==C) putchar(A);}
	else if(line == "IFAEQD") {if(A==D) putchar(A);}
	else if(line == "IFAEQE") {if(A==E) putchar(A);}
	else if(line == "IFAEQF") {if(A==F) putchar(A);}

	else if(line == "IFBEQC") {if(B==C) putchar(B);}
	else if(line == "IFBEQD") {if(B==D) putchar(B);}
	else if(line == "IFBEQE") {if(B==E) putchar(B);}
	else if(line == "IFBEQF") {if(B==F) putchar(B);}
	else if(line == "IFBEQA") {if(B==A) putchar(B);}

	else if(line == "IFCEQB") {if(C==B) putchar(C);}
	else if(line == "IFCEQD") {if(C==D) putchar(C);}
	else if(line == "IFCEQE") {if(C==E) putchar(C);}
	else if(line == "IFCEQF") {if(C==F) putchar(C);}
	else if(line == "IFCEQA") {if(C==A) putchar(C);}

	else if(line == "IFDEQB") {if(D==B) putchar(D);}
	else if(line == "IFDEQC") {if(D==C) putchar(D);}
	else if(line == "IFDEQE") {if(D==E) putchar(D);}
	else if(line == "IFDEQF") {if(D==F) putchar(D);}
	else if(line == "IFDEQA") {if(D==A) putchar(D);}

	else if(line == "IFEEQB") {if(E==B) putchar(E);}
	else if(line == "IFEEQC") {if(E==C) putchar(E);}
	else if(line == "IFEEQD") {if(E==D) putchar(E);}
	else if(line == "IFEEQF") {if(E==F) putchar(E);}
	else if(line == "IFEEQA") {if(E==A) putchar(E);}

	else if(line == "IFFEQA") {if(F==B) putchar(F);}
	else if(line == "IFFEQB") {if(F==C) putchar(F);}
	else if(line == "IFFEQC") {if(F==D) putchar(F);}
	else if(line == "IFFEQD") {if(F==E) putchar(F);}
	else if(line == "IFFEQE") {if(F==A) putchar(F);}

	else if(line == "NOPE") 1+1;

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
