public class sum_even_fibonacci {
    public static void main(String[] args) {
        int a = 0, b = 1;
        int sumEven = 0;
        while (b < 4000000) {
            if (b % 2 == 0) {
                sumEven += b;
            }
            int temp = b;
            // comment 2
            b = a + b;
            a = temp;
        }
        System.out.println(sumEven);
    }
    // comment 3
}

// answer should be 4613732
