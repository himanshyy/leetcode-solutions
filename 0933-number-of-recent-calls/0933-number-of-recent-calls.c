


typedef struct {
    int queue[10000];
    int front;
    int rear;
} RecentCounter;


RecentCounter* recentCounterCreate() {
    RecentCounter *obj = malloc(sizeof(RecentCounter));
    obj->front = 0;
    obj->rear = -1;
    return obj;
}

int recentCounterPing(RecentCounter* obj, int t) {
    int count=obj->rear-obj->front+1;
    obj->rear++;
    obj->queue[obj->rear]=t;
    count++;

    while(obj->front <= obj->rear && obj->queue[obj->front] < t-3000){
        obj->front++;
        count--;
    }
    return count;
}

void recentCounterFree(RecentCounter* obj) {
    free(obj);
}

/**
 * Your RecentCounter struct will be instantiated and called as such:
 * RecentCounter* obj = recentCounterCreate();
 * int param_1 = recentCounterPing(obj, t);
 
 * recentCounterFree(obj);
*/

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna