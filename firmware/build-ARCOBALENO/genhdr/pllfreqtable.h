#if MICROPY_HW_CLK_USE_HSI
#define PLL_FREQ_TABLE_SYS(pll) ((pll) & 255)
#define PLL_FREQ_TABLE_M(pll) (((pll) >> 10) & 63)
#define PLL_FREQ_TABLE_P(pll) (((((pll) >> 8) & 3) + 1) * 2)
typedef uint16_t pll_freq_table_t;
// (M, P/2-1, SYS) values for 16 MHz source
static const pll_freq_table_t pll_freq_table[21] = {
    (0 << 10) | (0 << 8) | 16,
    (16 << 10) | (3 << 8) | 24, // M=16 N=192 P=8 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (13 << 10) | (3 << 8) | 30, // M=13 N=195 P=8 Q=5 vco_in=1.23 vco_out=240.00 pll48=48.00
    (16 << 10) | (2 << 8) | 32, // M=16 N=192 P=6 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (11 << 10) | (3 << 8) | 36, // M=11 N=198 P=8 Q=6 vco_in=1.45 vco_out=288.00 pll48=48.00
    (13 << 10) | (2 << 8) | 40, // M=13 N=195 P=6 Q=5 vco_in=1.23 vco_out=240.00 pll48=48.00
    (10 << 10) | (3 << 8) | 42, // M=10 N=210 P=8 Q=7 vco_in=1.60 vco_out=336.00 pll48=48.00
    (16 << 10) | (1 << 8) | 48, // M=16 N=192 P=4 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (8 << 10) | (3 << 8) | 54, // M=8 N=216 P=8 Q=9 vco_in=2.00 vco_out=432.00 pll48=48.00
    (10 << 10) | (2 << 8) | 56, // M=10 N=210 P=6 Q=7 vco_in=1.60 vco_out=336.00 pll48=48.00
    (13 << 10) | (1 << 8) | 60, // M=13 N=195 P=4 Q=5 vco_in=1.23 vco_out=240.00 pll48=48.00
    (8 << 10) | (2 << 8) | 64, // M=8 N=192 P=6 Q=8 vco_in=2.00 vco_out=384.00 pll48=48.00
    (11 << 10) | (1 << 8) | 72, // M=11 N=198 P=4 Q=6 vco_in=1.45 vco_out=288.00 pll48=48.00
    (10 << 10) | (1 << 8) | 84, // M=10 N=210 P=4 Q=7 vco_in=1.60 vco_out=336.00 pll48=48.00
    (16 << 10) | (0 << 8) | 96, // M=16 N=192 P=2 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (8 << 10) | (1 << 8) | 108, // M=8 N=216 P=4 Q=9 vco_in=2.00 vco_out=432.00 pll48=48.00
    (13 << 10) | (0 << 8) | 120, // M=13 N=195 P=2 Q=5 vco_in=1.23 vco_out=240.00 pll48=48.00
    (11 << 10) | (0 << 8) | 144, // M=11 N=198 P=2 Q=6 vco_in=1.45 vco_out=288.00 pll48=48.00
    (10 << 10) | (0 << 8) | 168, // M=10 N=210 P=2 Q=7 vco_in=1.60 vco_out=336.00 pll48=48.00
    (8 << 10) | (0 << 8) | 192, // M=8 N=192 P=2 Q=8 vco_in=2.00 vco_out=384.00 pll48=48.00
    (8 << 10) | (0 << 8) | 216, // M=8 N=216 P=2 Q=9 vco_in=2.00 vco_out=432.00 pll48=48.00
};
#else
#define PLL_FREQ_TABLE_SYS(pll) ((pll) & 255)
#define PLL_FREQ_TABLE_M(pll) (((pll) >> 10) & 63)
#define PLL_FREQ_TABLE_P(pll) (((((pll) >> 8) & 3) + 1) * 2)
typedef uint16_t pll_freq_table_t;
// (M, P/2-1, SYS) values for 12 MHz source
static const pll_freq_table_t pll_freq_table[22] = {
    (1 << 10) | (0 << 8) | 12,
    (0 << 10) | (0 << 8) | 16,
    (12 << 10) | (3 << 8) | 24, // M=12 N=192 P=8 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (10 << 10) | (3 << 8) | 30, // M=10 N=200 P=8 Q=5 vco_in=1.20 vco_out=240.00 pll48=48.00
    (12 << 10) | (2 << 8) | 32, // M=12 N=192 P=6 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (8 << 10) | (3 << 8) | 36, // M=8 N=192 P=8 Q=6 vco_in=1.50 vco_out=288.00 pll48=48.00
    (10 << 10) | (2 << 8) | 40, // M=10 N=200 P=6 Q=5 vco_in=1.20 vco_out=240.00 pll48=48.00
    (7 << 10) | (3 << 8) | 42, // M=7 N=196 P=8 Q=7 vco_in=1.71 vco_out=336.00 pll48=48.00
    (12 << 10) | (1 << 8) | 48, // M=12 N=192 P=4 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (6 << 10) | (3 << 8) | 54, // M=6 N=216 P=8 Q=9 vco_in=2.00 vco_out=432.00 pll48=48.00
    (7 << 10) | (2 << 8) | 56, // M=7 N=196 P=6 Q=7 vco_in=1.71 vco_out=336.00 pll48=48.00
    (10 << 10) | (1 << 8) | 60, // M=10 N=200 P=4 Q=5 vco_in=1.20 vco_out=240.00 pll48=48.00
    (6 << 10) | (2 << 8) | 64, // M=6 N=192 P=6 Q=8 vco_in=2.00 vco_out=384.00 pll48=48.00
    (8 << 10) | (1 << 8) | 72, // M=8 N=192 P=4 Q=6 vco_in=1.50 vco_out=288.00 pll48=48.00
    (7 << 10) | (1 << 8) | 84, // M=7 N=196 P=4 Q=7 vco_in=1.71 vco_out=336.00 pll48=48.00
    (12 << 10) | (0 << 8) | 96, // M=12 N=192 P=2 Q=4 vco_in=1.00 vco_out=192.00 pll48=48.00
    (6 << 10) | (1 << 8) | 108, // M=6 N=216 P=4 Q=9 vco_in=2.00 vco_out=432.00 pll48=48.00
    (10 << 10) | (0 << 8) | 120, // M=10 N=200 P=2 Q=5 vco_in=1.20 vco_out=240.00 pll48=48.00
    (8 << 10) | (0 << 8) | 144, // M=8 N=192 P=2 Q=6 vco_in=1.50 vco_out=288.00 pll48=48.00
    (7 << 10) | (0 << 8) | 168, // M=7 N=196 P=2 Q=7 vco_in=1.71 vco_out=336.00 pll48=48.00
    (6 << 10) | (0 << 8) | 192, // M=6 N=192 P=2 Q=8 vco_in=2.00 vco_out=384.00 pll48=48.00
    (6 << 10) | (0 << 8) | 216, // M=6 N=216 P=2 Q=9 vco_in=2.00 vco_out=432.00 pll48=48.00
};
#endif
