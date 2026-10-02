

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);
    
    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);
    
    total_number_of_books = calloc(total_number_of_shelves, sizeof(int));

    total_number_of_pages = malloc(total_number_of_shelves * sizeof(int*));
    
    while (total_number_of_queries--) {
        int type_of_query;
        scanf("%d", &type_of_query);
        
        if (type_of_query == 1) {
            /*
             * Process the query of first type here.
             */
            int x, y;
            scanf("%d %d", &x, &y);
            total_number_of_pages[x]=realloc(total_number_of_pages[x], (total_number_of_books[x]+1)*sizeof(int));
            total_number_of_pages[x][total_number_of_books[x]]=y;
            total_number_of_books[x]++;


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna