#include <stdio.h>
void a();
void b();
int main(){
    a();
    b();
    return 0;
}

void a(){
    printf("Hello!\n");
}
void b() {
    printf("Good Bye!");
}