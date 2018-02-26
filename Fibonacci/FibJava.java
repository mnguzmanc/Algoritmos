public class FibJava {

    /**
     * Overflows de Fibonacci para los siguientes tipos de datos:
     * - int: overflow en 47
     * - short: overflow en 24
     * - long: overflow en 93
     */

    public static void main(String[] args) {
        
        long x1 = 1, x2 = 2, n = 3, temp = 0;
        while(x2 > x1){
            temp = x2;
            x2 += x1;
            x1 = temp;
            n++;
        }
        System.out.println(n);
    }
}