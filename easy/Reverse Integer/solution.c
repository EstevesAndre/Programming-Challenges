int reverse(int x) {
    
    int y = 0;

    while(x != 0) {
        // prevents overflow errors
        long yy = (long)y*10 + x%10;

        if (((int)yy - x%10)/10 != y) return 0;
        else y = yy;

        x = x/10;   
    }
    return y;
}