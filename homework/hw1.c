#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int user; //사용자의 선택(1,2,3)
    int ai; //상대방의 선택(1,2,3)

    // 랜덤 시드 초기화
    srand((unsigned int)time(NULL));

    // 가위바위보 및 선수 명단 배열
    const char* rsp[] = {"", "가위", "바위", "보"}; // 1부터 사용
    const char* names[] = {"플레이어", "철수", "영희", "민준", "지아", "현우", "수빈", "태양"};
    
    // 4강 진출자 랜덤 추첨
    const char* semiFinalist1 = (rand() % 2 == 0) ? names[2] : names[3]; // 영희 vs 민준
    const char* semiFinalist2 = (rand() % 2 == 0) ? names[4] : names[5]; // 지아 vs 현우
    const char* semiFinalist3 = (rand() % 2 == 0) ? names[6] : names[7]; // 수빈 vs 태양

    // 결승 진출자 랜덤 추첨
    const char* Finalist2 = (rand() % 2 == 0) ? semiFinalist2 : semiFinalist3;

    // 가위바위보 토너먼트 타이틀 출력
    printf("====================================================\n");
    printf("           가위 바위 보  토 너 먼 트\n");
    printf("====================================================\n\n");

    // 대진표 출력
    printf("[ 대진표 ]\n");
    printf("----------------------------------------------------\n");
    printf("  8강\n");
    printf("  [1] 플레이어   vs   [2] 철수\n");
    printf("  [3] 영희       vs   [4] 민준\n");
    printf("  [5] 지아       vs   [6] 현우\n");
    printf("  [7] 수빈       vs   [8] 태양\n");
    printf("----------------------------------------------------\n");
    printf("  당신은 [1] 플레이어 입니다.\n");
    printf("----------------------------------------------------\n\n\n");

    // 8강 첫 경기 안내
    printf("====================================================\n");
    printf("  8강  -  상대 : 철수\n");
    printf("====================================================\n");

    // 8강 입력 처리
    while (1) { // 승부가 날 때까지 무한 반복
        printf("  1: 가위    2: 바위    3: 보\n");
        printf("  선택 > ");
        scanf("%d", &user);

        // 1, 2, 3 이외의 값 입력 시 예외 처리
        if (user < 1 || user > 3) {
            printf("\n  1, 2, 3 중에서 입력하세요 > ");
            continue; // 다시 선택지로 돌아감
        }

        ai = rand() % 3 + 1; // 상대방(AI) 랜덤 결정
        
        printf(" \n 나: %s", rsp[user]);
        printf("  철수: %s\n", rsp[ai]);

        if (user == ai) { // 비긴 경우 
            printf("  => 비겼습니다! 재경기!\n\n");
            continue; // while문의 처음으로 돌아가서 다시 입력받음
        } 
        else if ((user == 1 && ai == 3) || (user == 2 && ai == 1) || (user == 3 && ai == 2)) {
            // 이긴 경우
            printf("  => 이겼습니다!\n");
            printf("  => 4강 진출!\n");
            break; // 반복문을 빠져나가 다음 라운드로 이동 
        } 
        else {
            // 진 경우
            printf("  => 졌습니다...\n");
            printf("  아쉽습니다. 다음 기회에!\n");
            return 0; // 패배 시 즉시 종료
        }
    }
    
    // 4강 진출자 명단
    printf("\n[ 4강 진출자 명단 ]\n");
    printf("플레이어, %s, %s, %s\n", semiFinalist1, semiFinalist2, semiFinalist3);
    
    // 4강 경기 안내
    printf("\n====================================================\n");
    printf("  4강  -  상대 : %s\n", semiFinalist1);
    printf("====================================================\n");

    // 4강 입력 처리    
    while (1) { // 승부가 날 때까지 무한 반복
        printf("  1: 가위    2: 바위    3: 보\n");
        printf("  선택 > ");
        scanf("%d", &user);

        // 1, 2, 3 이외의 값 입력 시 예외 처리
        if (user < 1 || user > 3) {
            printf("\n  1, 2, 3 중에서 입력하세요 > ");
            continue; // 다시 선택지로 돌아감
        }

        ai = rand() % 3 + 1; // 상대방(AI) 랜덤 결정
        
        printf(" \n 나: %s", rsp[user]);
        printf("  %s: %s\n", semiFinalist1, rsp[ai]);

        if (user == ai) { // 비긴 경우 
            printf("  => 비겼습니다! 재경기!\n\n");
            continue; // while문의 처음으로 돌아가서 다시 입력받음
        } 
        else if ((user == 1 && ai == 3) || (user == 2 && ai == 1) || (user == 3 && ai == 2)) {
            // 이긴 경우
            printf("  => 이겼습니다!\n");
            printf("  => 결승 진출!\n");
            break; // 반복문을 빠져나가 다음 라운드로 이동 
        } 
        else {
            // 진 경우
            printf("  => 졌습니다...\n");
            printf("  아쉽습니다. 다음 기회에!\n");
            return 0; // 패배 즉시 프로그램 종료
        }
    }

    // 결승 경기 안내
    printf("\n====================================================\n");
    printf("  결승  -  상대 : %s\n", Finalist2);
    printf("====================================================\n");

    //결승 입력 처리    
    while (1) { // 승부가 날 때까지 무한 반복
        printf("  1: 가위    2: 바위    3: 보\n");
        printf("  선택 > ");
        scanf("%d", &user);

        // 1, 2, 3 이외의 값 입력 시 예외 처리
        if (user < 1 || user > 3) {
            printf("\n  1, 2, 3 중에서 입력하세요 > ");
            continue; // 다시 선택지로 돌아감
        }

        ai = rand() % 3 + 1; // 상대방(AI) 랜덤 결정
        
        printf(" \n 나: %s", rsp[user]);
        printf("  %s: %s\n", Finalist2, rsp[ai]);

        if (user == ai) { // 비긴 경우 
            printf("  => 비겼습니다! 재경기!\n\n");
            continue; // while문의 처음으로 돌아가서 다시 입력받음
        } 
        else if ((user == 1 && ai == 3) || (user == 2 && ai == 1) || (user == 3 && ai == 2)) {
            // 이긴 경우
            printf("  => 이겼습니다!\n");
            printf("  => 축하드립니다! 최종 우승!\n");
            break; // 반복문 탈출
        } 
        else {
            // 진 경우
            printf("  => 졌습니다...\n");
            printf("  아쉽습니다. 다음 기회에!\n");
            return 0; // 패배 후 프로그램 종료
        }
    }
    // break로 빠져나오면 여기로 오게 됨
    return 0; // 최종 우승 후 프로그램 종료
}