#include <stdio.h>

int main() {
    int n, i, j;
    int count[10001] = {0,}; // 1부터 10000까지의 숫자를 세기 위한 배열, 모든 값을 0으로 초기화
    
    scanf("%d", &n); // 사용자로부터 숫자의 개수를 입력받음
    
    // 입력받은 숫자를 세어 count 배열에 기록
    for(i = 0; i < n; i++) {
        int num;
        scanf("%d", &num); // 숫자를 하나씩 입력받음
        count[num]++; // 해당 숫자의 등장 횟수를 1 증가
    }
    
    // 정렬된 숫자 출력
    for(i = 1; i <= 10000; i++) { // 1부터 10000까지 각 숫자에 대해
        if(count[i] > 0) { // 해당 숫자가 한 번 이상 등장했다면
            for(j = 0; j < count[i]; j++) { // 등장 횟수만큼 반복하여
                printf("%d\n", i); // 해당 숫자를 출력
            }
        }
    }
    
    return 0;
}