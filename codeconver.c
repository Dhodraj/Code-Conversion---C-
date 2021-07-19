#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int bin_to();
int bin_to_deci();
int bin_to_gray();
int bin_to_hex();
int bin_to_oct();

int deci_to();
int deci_to_gray();
int deci_to_hex();
int deci_to_oct();
int decibin();
int bindeci();
int bingray();
int binhex();
int binoct();

int hex_to();
int hex_to_deci();
int hex_to_gray();
int hexbin();
int hex_to_octal();
long long int hex_to_binary(char hex[]);
long long int bin_to_octal(long long bin);
long long int hex_to_oct(char hex[]);

int main()
{
	system("cls");
	printf("\t\t\t\t\tCode Conversion System - DhodRaj\n\n");
	printf("\t\t\t\t\t1.Binary To Others\n\n");
	printf("\t\t\t\t\t2.Decimal To Others\n\n");
	printf("\t\t\t\t\t3.HexaDecimal To Others\n\n");
	int get;
	printf("\n\n\t\t\t\t\tEnter your Choice : ");
	scanf("%d",&get);
	switch(get)
	{
		case 1: bin_to();
		        break;
		case 2: deci_to();
		        break;
		case 3: hex_to();
		        break;
	}
}

int bin_to()
{
	system("cls");
	printf("\t\t\t\t\tCode Conversion System - DhodRaj\n\n");
	printf("\t\t\t\t\t1.Binary To Decimal\n\n");
	printf("\t\t\t\t\t2.Binary To Gray\n\n");
	printf("\t\t\t\t\t3.Binary To HexaDecimal\n\n");
	printf("\t\t\t\t\t4.Binary To Octal\n\n");
	int get;
	printf("\n\n\t\t\t\t\tEnter your Choice : ");
	scanf("%d",&get);
	switch(get)
	{
		case 1: bin_to_deci();
	            break;
	    case 2: bin_to_gray();
	            break;
	    case 3: bin_to_hex();
	            break;
	    case 4: bin_to_oct();
	            break;
    }
}

int bin_to_deci()
{
	system("cls");
	printf("\t\t\t\t\tBinary To Decimal Conversion\n\n");
	int deci_num=0,base=1,rem,num;
	printf("\n\t\t\t\t\tEnter a Binary Number : ");
	scanf("\t\t\t\t\t%d",&num);
	while(num>0)
	{
		rem=num%10;
		deci_num=deci_num+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("\n\t\t\t\t\tDecimal Equivalent : %d\n",deci_num);
	getch();
	bin_to();
}
int bin_to_gray()
{
	system("cls");
	printf("\t\t\t\t\tBinary To Decimal Conversion\n\n");
	int a,b,result=0,i=0;
	int num;
	printf("\n\t\t\t\t\tEnter a Binary Number : ");
	scanf("\t\t\t\t\t%d",&num);
	while(num!=0)
	{
		a=num%10;
		num=num/10;
		b=num%10;
		
		if((a&&!b) || (!a&&b))
		{
			result=result+pow(10,i);
		}
		i++;
	}
	printf("\n\t\t\t\t\tGray Equivalent : %d",result);
	
	getch();
	bin_to();
}

int bin_to_hex()
{
	system("cls");
	printf("\t\t\t\t\tBinary To Decimal Conversion\n\n");
	long int binaryval,hex=0,i=1,rem;
	printf("\n\t\t\t\t\tEnter a Binary Number : ");
	scanf("\t\t\t\t\t%ld",&binaryval);
	while(binaryval!=0)
	{
		rem=binaryval%10;
		hex=hex+rem*i;
		i=i*2;
		binaryval=binaryval/10;
	}
	printf("\n\t\t\t\t\tHexaDecimal Equivalent : %lX",hex);
	
	getch();
	bin_to();
}

int bin_to_oct()
{
	system("cls");
	printf("\t\t\t\t\tBinary To Decimal Conversion\n\n");
	long long bin;
	printf("\n\t\t\t\t\tEnter a Binary Number : ");
	scanf("\t\t\t\t\t%lld",&bin);
	int oct=0,dec=0,i=0;
	while(bin!=0)
	{
		dec+=(bin%10)*pow(2,i);
		i++;
		bin/=10;
	}
	i=1;
	
	while(dec!=0)
	{
		oct+=(dec%8)*i;
		dec/=8;
		i*=10;
	}
	
	printf("\n\t\t\t\t\tOctal Equivalent : %d",oct);	
	getch();
	bin_to();
}

int deci_to()
{
	system("cls");
	printf("\t\t\t\t\tCode Conversion System - DhodRaj\n\n");
	printf("\t\t\t\t\t1.Decimal To Binary\n\n");
	printf("\t\t\t\t\t2.Decimal To Gray\n\n");
	printf("\t\t\t\t\t3.Decimal To HexaDecimal\n\n");
	printf("\t\t\t\t\t4.Decimal To Octal\n\n");
	int get;
	printf("\n\n\t\t\t\t\tEnter your Choice : ");
	scanf("%d",&get);
	switch(get)
	{
		case 1: deci_to_bin();
	            break;
	    case 2: deci_to_gray();
	            break;
	    case 3: deci_to_hex();
	            break;
	    case 4: deci_to_oct();
	            break;
	    
    }
}

int bindeci(int n)
{
	int decinum=0,base=1,rem;
	while(n>0)
	{
		rem=n%10;
		decinum=decinum+rem*base;
		n=n/2;
		base=base*2;
	}
	return decinum;
}

int bingray(long n)
{
	int a,b,result=0,i=0;
	while(n!=0)
	{
		a=n%10;
		n=n/10;
		b=n%10;
		if((a&&!b) || (!a&&b))
		{
			result=result+pow(10,i);
		}
		i++;
	}
	return result;
}

int decibin(long n)
{
	long r,bin=0;
	int temp=1;
	while(n!=0)
	{
		r=n%2;
		n=n/2;
		bin=bin+r*temp;
		temp=temp*10;
	}
	return bin;
}

int binhex(long n)
{
  long int hex=0,i=1,rem;
  while(n!=0)
  {
  	rem=n%10;
  	hex=hex+rem*i;
  	i=i*2;
  	n=n/10;
  }
  return hex;	
}


int binoct(long n)
{
	long int oct=0,j=1,rem;
	while(n!=0)
	{
		rem=n%10;
		oct=oct+rem*j;
		j=j*2;
		n=n/10;
	}
	return oct;
}


int deci_to_bin()
{
	system("cls");
	printf("\t\t\t\t\tDecimal To Binary Conversion\n\n");
	long num;
	printf("\t\t\t\t\tEnter Decimal Number : ");
	scanf("\t\t\t\t\t%ld",&num);
	int res=decibin(num);
	printf("\n\t\t\t\t\tBinary Equivalent : %d",res);
	getch();
	deci_to();
}

int deci_to_gray()
{
	system("cls");
	printf("\t\t\t\t\tDecimal To Binary Conversion\n\n");
	long num;
	printf("\t\t\t\t\tEnter Decimal Number : ");
	scanf("\t\t\t\t\t%ld",&num);
	int resu=decibin(num);
	int res=bingray(resu);
	printf("\n\t\t\t\t\tGray Equivalent : %d",res);
	getch();
	deci_to();
}

int deci_to_hex()
{
	system("cls");
	printf("\t\t\t\t\tDecimal To Binary Conversion\n\n");
	long num;
	printf("\t\t\t\t\tEnter Decimal Number : ");
	scanf("\t\t\t\t\t%ld",&num);
	int resu=decibin(num);
	int res=binhex(resu);
	printf("\n\t\t\t\t\tHexaDecimal Equivalent : %lX",res);
	getch();
	deci_to();
}

int deci_to_oct()
{
	system("cls");
	printf("\t\t\t\t\tDecimal To Binary Conversion\n\n");
	long num;
	printf("\t\t\t\t\tEnter Decimal Number : ");
	scanf("\t\t\t\t\t%ld",&num);
	int resu=decibin(num);
	int res=binhex(resu);
	printf("\n\t\t\t\t\tOctal Equivalent : %lo",res);
	getch();
	deci_to();
}

int hex_to()
{
		system("cls");
	printf("\t\t\t\t\tCode Conversion System - DhodRaj\n\n");
	printf("\t\t\t\t\t1.HexaDecimal To Binary\n\n");
	printf("\t\t\t\t\t2.HexaDecimal To Gray\n\n");
	printf("\t\t\t\t\t3.HexaDecimal To Decimal\n\n");
	printf("\t\t\t\t\t4.HexaDecimal To Octal\n\n");
	int get;
	printf("\n\n\t\t\t\t\tEnter your Choice : ");
	scanf("%d",&get);
	switch(get)
	{
		case 1: hex_to_bin();
	            break;
	    case 2: hex_to_gray();
	            break;
	    case 3: hex_to_deci();
	            break;
		case 4: hex_to_octal();
		        break;  
    }
	
}

int hexbin(char* hex)
{
	long int i=0;
	
	while(hex[i]){
	
	switch(hex[i]){
		
		case '0': printf("0000");
		          break;
		case '1': printf("0001");
		          break;
    	case '2': printf("0010");
		          break;
		case '3': printf("0011");
		          break;
		case '4': printf("0100");
		          break;
		case '5': printf("0101");
		          break;
		case '6': printf("0101");
		          break;
		case '7': printf("0111");
		          break;
		case '8': printf("1000");
		          break;
		case '9': printf("1001");
		          break;
		case 'A': 
		case 'a': printf("1010");
		          break;
		case 'B': 
		case 'b': printf("1011");
		          break;
		case 'C': 
		case 'c': printf("1100");
		          break;
		case 'D': 
		case 'd': printf("1101");
		          break;
		case 'E': 
		case 'e': printf("1110");
		          break;
		case 'F': 
		case 'f': printf("1111");
		          break;
		default: printf("\n\n\t\t\t\t\tInvalid Hex Code : %c",hex[i]);
	}
	i++;
}
return hex;
}

int hex_to_bin()
{
	system("cls");
	printf("\t\t\t\t\tHexaDecimal To Binary Conversion\n\n");
	char hex[100];
	printf("\t\t\t\t\tEnter HexaDecimal Number : ");
	scanf("\t\t\t\t\t%s",&hex);
	printf("\n\t\t\t\t\tBinary Equivalent : ");
	hexbin(hex);
	getch();
	hex_to();
}


int hex_to_deci()
{
	
	system("cls");
	printf("\t\t\t\t\tHexaDecimal To Binary Conversion\n\n");
	char hex[100];
	printf("\t\t\t\t\tEnter HexaDecimal Number : ");
	scanf("\t\t\t\t\t%s",&hex);
	
    long long decimal, place;
    int i = 0, val, len;

    decimal = 0;
    place = 1;

    len = strlen(hex);
    len--;

    
    for(i=0; hex[i]!='\0'; i++)
    {
 
        if(hex[i]>='0' && hex[i]<='9')
        {
            val = hex[i] - 48;
        }
        else if(hex[i]>='a' && hex[i]<='f')
        {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i]>='A' && hex[i]<='F')
        {
            val = hex[i] - 65 + 10;
        }

        decimal += val * pow(16, len);
        len--;
    }

    printf("\n\t\t\t\t\tDecimal number = %lld", decimal);
    getch();
    hex_to();
    
}

int hex_to_gray(){
	system("cls");
	printf("\t\t\t\t\tHexaDecimal To Gray Conversion\n\n");
	char hex[100];
	printf("\t\t\t\t\tHexaDecimal Value: ");
	scanf("%s",hex);
	printf("\n\t\t\t\t\tGray Equivalent : ");
	char res[100];
	res[100]=hexbin(hex);
	printf("%s",res);
	getch();
	hex_to();
}

long long int hex_to_binary(char hex[])
{
    long long int bin, place;
    int i = 0, rem, val;
 
    bin = 0ll;
    place = 0ll;
 
    // Hexadecimal to binary conversion
    for (i = 0; hex[i] != '\0'; i++) {
        bin = bin * place;
 
        switch (hex[i]) {
        case '0':
            bin += 0;
            break;
        case '1':
            bin += 1;
            break;
        case '2':
            bin += 10;
            break;
        case '3':
            bin += 11;
            break;
        case '4':
            bin += 100;
            break;
        case '5':
            bin += 101;
            break;
        case '6':
            bin += 110;
            break;
        case '7':
            bin += 111;
            break;
        case '8':
            bin += 1000;
            break;
        case '9':
            bin += 1001;
            break;
        case 'a':
        case 'A':
            bin += 1010;
            break;
        case 'b':
        case 'B':
            bin += 1011;
            break;
        case 'c':
        case 'C':
            bin += 1100;
            break;
        case 'd':
        case 'D':
            bin += 1101;
            break;
        case 'e':
        case 'E':
            bin += 1110;
            break;
        case 'f':
        case 'F':
            bin += 1111;
            break;
        default:
            printf("Invalid hexadecimal input.");
        }
 
        place = 10000;
    }
 
    return bin;
}

long long int bin_to_octal(long long bin)
{
    long long int octal, place;
    int i = 0, rem, val;
 
    octal = 0ll;
    place = 0ll;
 
    place = 1;
 
    // Binary to octal conversion
    while (bin > 0) {
        rem = bin % 1000;
 
        switch (rem) {
        case 0:
            val = 0;
            break;
        case 1:
            val = 1;
            break;
        case 10:
            val = 2;
            break;
        case 11:
            val = 3;
            break;
        case 100:
            val = 4;
            break;
        case 101:
            val = 5;
            break;
        case 110:
            val = 6;
            break;
        case 111:
            val = 7;
            break;
        }
 
        octal = (val * place) + octal;
        bin /= 1000;
 
        place *= 10;
    }
 
    return octal;
}

long long int hex_to_oct(char hex[])
{
    long long int octal, bin;
 
    // convert HexaDecimal to Binary
    bin = hex_to_binary(hex);
 
    // convert Binary to Octal
    octal = bin_to_octal(bin);
 
    return octal;
}


int hex_to_octal()
{
	system("cls");
	printf("\t\t\t\t\tHexaDecimal To Octal Conversion\n\n");
	char hex[20];
	printf("\t\t\t\t\tHexaDecimal Value: ");
	scanf("%s",hex);
    printf("\n\t\t\t\t\tEquivalent Octal Value = %lld",hex_to_oct(hex));
    getch();
    hex_to();
}


