int a() {
        long k = 0;
        for (int i=0;i<523;i++)
                k  = 1 + i + k /365;
        return k;
}

int main() {
        for (int i=0; i<1024*1024;i++) {
                if (i%2)
                        a();
                else ;
        }
        return 0;
}
