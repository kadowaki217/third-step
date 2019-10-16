#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	double science[20] = {65,80,67,35,58,60,72,75,68,92,36,50,2,58.5,46,42,78,62,84,70};
	double english[20] = {44,87,100,63,52,60,58,73,55,86,29,56,89,23,65,84,64,27,86,84};
	double SortedSci[20], SortedEng[20];

	double sum[2] = {0};
	for(int i = 0; i < 20; ++i){
		sum[0] += science[i];
		sum[1] += english[i];
	}
	double avg[2] = {sum[0]/20, sum[1]/20};
	double stddev[2] = {0};
	for(int i = 0; i < 20; ++i){
		stddev[0] += (avg[0]-science[i])*(avg[0]-science[i]);
		stddev[1] += (avg[1]-english[i])*(avg[1]-english[i]);
	}
	stddev[0] = sqrt(stddev[0]/20);
	stddev[1] = sqrt(stddev[1]/20);
	
	printf("平均点\n\t理科:%.3f\n\t英語:%.3f\n", avg[0], avg[1]);
	printf("標準偏差\n\t理科:%.3f\n\t英語:%.3f\n", stddev[0], stddev[1]);
	printf("合計点\n\t理科:%.3f\n\t英語:%.3f\n", sum[0], sum[1]);

	double scidev[20], engdev[20];
	for(int i = 0; i < 20; ++i){
		scidev[i] = 10 * (science[i] - avg[0]) / stddev[0] + 50;
		engdev[i] = 10 * (english[i] - avg[1]) / stddev[1] + 50;
	}
	printf("偏差値\n");
	for(int i = 0; i < 20; ++i){
		printf("生徒%d\t理科:%.3f\t英語:%.3f\n", i+1, scidev[i], engdev[i]);
	}

	for(int i = 0; i < 20; ++i){
		SortedSci[i] = science[i];
		SortedEng[i] = english[i];
	}
	sort(SortedSci, SortedSci+20, greater<double>());
	sort(SortedEng, SortedEng+20, greater<double>());
	
	printf("\n理科:\n");
	for(int i = 0; i < 20; ++i){
		printf("%.3f\t", SortedSci[i]);
	}
	printf("\n英語:\n");
	for(int i = 0; i < 20; ++i){
		printf("%.3f\t", SortedEng[i]);
	}
	printf("\n");

	return 0;
}
