#include "ip1.h"


int main()
{

        char *ip,*netmask;
        int sr=0,n,ssrr;
        int ipp[32];  //ip en 32 bits
        int octet[4],msr[32];
        ip=stringg(256);
        netmask=stringg(256);
        printf("IP:");
        fgets(ip,256,stdin);
        checkPointCharBits(ip,octet,ipp);
        //afficheBinaire(ipp);
        netBroad(octet);
printf("----------------------------------------------------\n\n");

printf("Netmask:");
fgets(netmask,256,stdin);
netmaskget(netmask,msr,&sr);
getNetmask(msr,octet,sr,ipp);

printf("----------------------------------------------------\n\n");

printf ("SR:");
scanf("%d",&ssrr);
getIP1(ssrr, octet,ipp);

printf("------------------------------------------------------\n\n");

printf ("Nombre de coupe:");
scanf("%d",&n);
couper(n, octet,ipp );
 
return (EXIT_SUCCESS);
}

