#include <stdio.h>

int min = 100000;
char board[9][9];
int counter = 0;

void map(char board[9][9]){
    for(int i=1; i<=8; i++){
        printf("%s", board[i]);
        printf("\n");
    }
    printf("\n");
}

void check(char board[9][9], int x, int y){
    if(x < 0 || y < 0 || board[x][y] == 'V' || y >= 8 || x >= 8){
        return;
    }
    else if(board[x][y] == 'E'){
        if(min > counter){
            min = counter;
        }
        return;
    }
    else if(counter >= min){
        return;
    }
    counter++;
    board[x][y] = 'V';
    check(board, x + 2, y + 1);
    check(board, x + 1, y + 2);
    check(board, x - 2, y + 1);
    check(board, x - 1, y + 2);
    check(board, x + 2, y - 1);
    check(board, x + 1, y - 2);
    check(board, x - 2, y - 1);
    check(board, x - 1, y - 2);
    board[x][y] = ' ';
    counter--;
    return;
}

int main(){
    int T,x,y;
   
    scanf("%d", &T);
    
	for(int i = 0; i < T; i++){
        min = 100000;
        counter = 0;
        
        for(int j = 0; j < 8; j++){
            for(int k = 0; k < 8; k++){
                board[j][k] = ' ';
            }
        }
        
		char kordinat1[10], kordinat2[10];
        scanf("%s %s", kordinat1, kordinat2);
        
		board[7 - (kordinat1[1] - '1')][kordinat1[0] - 'A'] = 'S';
        board[7 - (kordinat2[1] - '1')][kordinat2[0] - 'A'] = 'E';
    	
		x = 7 - (kordinat1[1] - '1');
        y = kordinat1[0] - 'A';
        check(board, x, y);
        
		printf("Case #%d: %d\n", i + 1, min);
    }
    
    return 0;
}
