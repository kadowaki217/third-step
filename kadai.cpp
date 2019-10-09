#include<iostream>

using namespace std;

int main(){
	double sci[20] = {65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
       	double eng[20] = {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};

	double sum[2] = 0;
	for(int i = 0; i < 20; ++i){
		sum[0] += sci[i];
		sum[1] += eng[i];
	}
	double avg[2] = {sum[0]/20, sum[1]/20};
	double stdev[2] = {0};
	for(int i = 0; i < 20; ++i){
		stdev[0] += (avg[0]-sci[i])*(avg[0]-sci[i]);
		stdev[1] += (avg[1]-eng[i])*(avg[1]-eng[i]);
	}
	
	printf("平均点\n\t理科:%.3f\n\t英語:%.3f\n", avg[0], avg[1]);
	printf("標準偏差\n\t理科:%.3f\n\t英語:%.3f\n", stdev[0], stdev[1]);
	printf("合計点\n\t理科:%.3f\n\t英語:%.3f\n", sum[0], sum[1]);

	reutrn 0;
}
