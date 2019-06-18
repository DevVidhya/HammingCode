#include<stdio.h>
int power(int n,int m)
{
        int i=0;
        int sum=1;
        for(i=1;i<=m;i++)
                sum *= n;
        return sum;
}
void dec2bin(char bits[], int l, int a)
{
        int i;
        for(i=l-1;i>=0;i--)
        {
                bits[i] = (a & 1) + '0';
                a >>= 1;
        }
}
unsigned char chrpos(int ch,int pos)
{
        return (ch & power(2,pos-1))>>(pos-1);
}
int calcBit(unsigned long c)
{
        int l=0;
        while(c>0)
        {
                l++;
                c>>=1;
        }
        return l;

}
struct checkbit
{
        unsigned int b:1;
};
1
2
3
4
5
6
7
8
9
10
11
12
13
14
15
16
17
18
19
20
21
22
23
24
25
26
27
28
29
30
31
32
33
34
35
36
37
#include<stdio.h>
int power(int n,int m)
{
        int i=0;
        int sum=1;
        for(i=1;i<=m;i++)
                sum *= n;
        return sum;
}
void dec2bin(char bits[], int l, int a)
{
        int i;
        for(i=l-1;i>=0;i--)
        {
                bits[i] = (a & 1) + '0';
                a >>= 1;
        }
}
unsigned char chrpos(int ch,int pos)
{
        return (ch & power(2,pos-1))>>(pos-1);
}
int calcBit(unsigned long c)
{
        int l=0;
        while(c>0)
        {
                l++;
                c>>=1;
        }
        return l;
 
}
struct checkbit
{
        unsigned int b:1;
};

