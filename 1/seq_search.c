//순차탐색
int seq_search(int list[], int key)
{
	int i;
	for(i=0;i<n;i++)
	    if(list[i] == key)
		return i; // 탐색에 성공하면 키 값의 인덱스 반환
	return -1; // 탐색에 실패하면 -1 반환

}


// 최선의 경우 : O(1)
// 최악의 경우 : O(n)
// 평균의 경우 : O(n)  (1+2+...+n)/n=(n+1)/2
