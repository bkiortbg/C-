#include <stdio.h>
#include <string.h>
char a[26]={0};
int are_anagrams(const char* word1,const char* word2){
	int len1=strlen(word1);int len2=strlen(word2);
	if(len1!=len2) return 0;
	else{
		for(int i=0;i<len1;i++) a[word1[i]-'a']++;
		for(int i=0;i<len2;i++) a[word2[i]-'a']--;
	}
	for(int i=0;i<26;i++){
		if(a[i]!=0) return 0;
	}
	return 1;
}
int main()
{
	char w1[20],w2[20];
	printf("enter first word:");
	scanf("%s",w1);
	printf("enter second word:");
	scanf("%s",w2);
	if(are_anagrams(w1,w2))
		printf("the words are anagrams");
	else printf("the words are not anagrams");
	return 0; 
}
