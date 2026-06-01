class ConsecutiveSum {
    public static void main(String[] args) {
        int n = 15; // Example input
        int count = countConsecutiveSum(n);
        System.out.println("Number of ways to express " + n + " as a sum of consecutive integers: " + count);
    }

    public static int countConsecutiveSum(int n) {
        int count = 0;
        for (int k = 1; k * (k + 1) / 2 < n; k++) {
            if ((n - k * (k + 1) / 2) % k == 0) {
                count++;
            }
        }
        return count;
    }
}