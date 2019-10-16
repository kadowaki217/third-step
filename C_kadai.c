#include<stdio.h>
#include<math.h>

int main()
{
 int science[20]={65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
 int english[20]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
 int s_sort[20]={65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
 int e_sort[20]={44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
 double s_sum=0.0,e_sum=0.0;
 double s_dev=0.0,e_dev=0.0;
 double s_ave,e_ave;
 double s_diff[20],e_diff[20];
 int i,j,tmp,tmp2;

 for(i=0;i<20;i++)
 {
	s_sum+=science[i];
	e_sum+=english[i];
 }

 s_ave=s_sum/20.0;
 e_ave=e_sum/20.0;

 for(i=0;i<20;i++)
 {
	s_diff[i]=science[i]-s_ave;
	e_diff[i]=english[i]-e_ave;
	s_dev+=pow(s_diff[i],2.0);
	e_dev+=pow(e_diff[i],2.0);
 }


 printf("平均点 理科：%.3f 英語：%.3f\n",s_ave,e_ave);
 printf("標準偏差 理科：%.3f 英語：%.3f\n",sqrt(s_dev/20.0),sqrt(e_dev/20.0));
 printf("合計点 理科：%.3f 英語：%.3f\n",s_sum,e_sum);

 printf("理科と英語の偏差値\n");
 for(i=0;i<20;i++)
 {
	printf("%d人目 理科：%.3f",i+1,(10.0*(s_diff[i])/sqrt(s_dev/20.0))+50.0);
	printf("英語：%.3f\n",(10.0*(s_diff[i])/sqrt(s_dev/20.0))+50.0);
 } 
 
 for(i=0;i<20;i++)
 {
  for(j=i+1;j<20;j++)
  {
	if(s_sort[i]<s_sort[j])
	{
	 tmp=s_sort[i];
	 s_sort[i]=s_sort[j];
	 s_sort[j]=tmp;
	}

	if(e_sort[i]<e_sort[j])
        {
         tmp2=e_sort[i];
         e_sort[i]=e_sort[j];
         e_sort[j]=tmp2;
        }
  }
 }

 printf("理科 高い順\n");
 for(i=0;i<20;i++)
 {
  printf("%d ",s_sort[i]);
 }

 printf("\n英語 高い順\n");
 for(i=0;i<20;i++)
 {
  printf("%d ",e_sort[i]);
 }
 printf("\n");

 return 0;
} 
