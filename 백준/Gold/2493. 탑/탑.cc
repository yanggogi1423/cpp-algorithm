#include <iostream>
using namespace std;

#define MAX_NUM 100000001

typedef struct Pair {
    int data;
    int idx;
}Pair;

int* dst = nullptr;
int top = -1;
Pair* stack = nullptr;
int N;

void push(int e, int idx) {
    top++;
    if (top >= N) {
        top--;
        return;
    }

    stack[top].data = e;
    stack[top].idx = idx;
}

void pop() {
    if (top == -1) {
        return;
    }

    top--;
}

int peek_val() {
    if (top == -1) {
        return -1;
    }

    return stack[top].data;
}

int peek_idx() {
    if (top == -1) {
        return -1;
    }

    return stack[top].idx;
}

int main(void) {

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;

    stack = new Pair[N];
    dst = new int[N];

    push(MAX_NUM, 0);

    int cnt = 1;
    int input;

    for (int i = 0; i < N; i++) {
        cin >> input;

        while (true) {
            if (peek_val() > input) {
                break;
            }
            pop();
        }

        dst[i] = peek_idx();
        push(input, cnt);
        cnt++;
    }

    for (int i = 0; i < N; i++) {
        cout << dst[i] << " ";
    }

    return 0;
}
