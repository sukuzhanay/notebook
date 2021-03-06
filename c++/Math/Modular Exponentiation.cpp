Realiza la operación (a ^ b) % mod.

long long modpow(long long a, long long b, long long mod) {
    if (b == 0) return 1;
    if (b % 2 == 0) {
        long long temp = modpow(a, b/2, mod);
        return (temp * temp) % mod;
    } else {
        long long temp = modpow(a, b-1, mod);
        return (temp * a) % mod;
    }
}
