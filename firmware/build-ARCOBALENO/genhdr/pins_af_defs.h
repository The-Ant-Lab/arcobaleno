#define STATIC_AF_TIM2_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM9_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_CKIN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_EVENTOUT_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A2_obj)")  & strcmp( #pin_obj , "((&pin_A2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C0_obj)")  & strcmp( #pin_obj , "((&pin_C0_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C13_obj)")  & strcmp( #pin_obj , "((&pin_C13_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C14_obj)")  & strcmp( #pin_obj , "((&pin_C14_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C15_obj)")  & strcmp( #pin_obj , "((&pin_C15_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C1_obj)")  & strcmp( #pin_obj , "((&pin_C1_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C4_obj)")  & strcmp( #pin_obj , "((&pin_C4_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C5_obj)")  & strcmp( #pin_obj , "((&pin_C5_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (15) : \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (15) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM9_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_MCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A3_obj)")  & strcmp( #pin_obj , "((&pin_A3_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_CTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A0_obj)")  & strcmp( #pin_obj , "((&pin_A0_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM2_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM5_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI4_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S4_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_RTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A1_obj)")  & strcmp( #pin_obj , "((&pin_A1_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S1_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART2_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A4_obj)")  & strcmp( #pin_obj , "((&pin_A4_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S1_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A5_obj)")  & strcmp( #pin_obj , "((&pin_A5_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_BKIN(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_CMD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A6_obj)")  & strcmp( #pin_obj , "((&pin_A6_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH1N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI1_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S1_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A7_obj)")  & strcmp( #pin_obj , "((&pin_A7_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C1_SCL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B6_obj)")  & strcmp( #pin_obj , "((&pin_B6_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C1_SDA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (4) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D0(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_B7_obj)")  & strcmp( #pin_obj , "((&pin_B7_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTDO_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (0) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TRACESWO_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (0) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C2_SDA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B3_obj)")  & strcmp( #pin_obj , "((&pin_B3_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (9) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_EXTSD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C2_obj)")  & strcmp( #pin_obj , "((&pin_C2_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C3_obj)")  & strcmp( #pin_obj , "((&pin_C3_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_TX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D6(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C6_obj)")  & strcmp( #pin_obj , "((&pin_C6_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_MCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_RX(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (8) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D7(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C7_obj)")  & strcmp( #pin_obj , "((&pin_C7_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C2_SCL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B10_obj)")  & strcmp( #pin_obj , "((&pin_B10_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM11_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI2_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S2_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (5) : \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D5(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B9_obj)")  & strcmp( #pin_obj , "((&pin_B9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C2_SMBA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI4_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S4_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B12_obj)")  & strcmp( #pin_obj , "((&pin_B12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI4_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S4_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B13_obj)")  & strcmp( #pin_obj , "((&pin_B13_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH2N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B14_obj)")  & strcmp( #pin_obj , "((&pin_B14_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_RTC_50Hz(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH3N(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (1) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B15_obj)")  & strcmp( #pin_obj , "((&pin_B15_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_MCO_1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C3_SCL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USB_FS_SOF(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A8_obj)")  & strcmp( #pin_obj , "((&pin_A8_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM4_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM10_CH1(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (3) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI5_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S5_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C3_SDA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (9) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B8_obj)")  & strcmp( #pin_obj , "((&pin_B8_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI5_SCK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S5_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B0_obj)")  & strcmp( #pin_obj , "((&pin_B0_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (2) : \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI5_NSS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S5_WS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_B1_obj)")  & strcmp( #pin_obj , "((&pin_B1_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C1_SMBA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_MOSI(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_SD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C12_obj)")  & strcmp( #pin_obj , "((&pin_C12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B5_obj)")  & strcmp( #pin_obj , "((&pin_B5_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTRST_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI3_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (6) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2S3_EXTSD(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_B4_obj)")  & strcmp( #pin_obj , "((&pin_B4_obj))")) == 0) ? (7) : \
    ((strcmp( #pin_obj , "(&pin_C11_obj)")  & strcmp( #pin_obj , "((&pin_C11_obj))")) == 0) ? (5) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART6_CK(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C8_obj)")  & strcmp( #pin_obj , "((&pin_C8_obj))")) == 0) ? (8) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_MCO_2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_C9_obj)")  & strcmp( #pin_obj , "((&pin_C9_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SDIO_D2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (12) : \
    ((strcmp( #pin_obj , "(&pin_C10_obj)")  & strcmp( #pin_obj , "((&pin_C10_obj))")) == 0) ? (12) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM3_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_D2_obj)")  & strcmp( #pin_obj , "((&pin_D2_obj))")) == 0) ? (2) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_JTDI_NULL(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A15_obj)")  & strcmp( #pin_obj , "((&pin_A15_obj))")) == 0) ? (0) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH2(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_I2C3_SMBA(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (4) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USB_FS_VBUS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A9_obj)")  & strcmp( #pin_obj , "((&pin_A9_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH4(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI4_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_CTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USB_FS_DM(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A11_obj)")  & strcmp( #pin_obj , "((&pin_A11_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_ETR(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_SPI5_MISO(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (6) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USART1_RTS(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (7) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USB_FS_DP(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A12_obj)")  & strcmp( #pin_obj , "((&pin_A12_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_TIM1_CH3(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (1) : \
    (0xffffffffffffffffULL))

#define STATIC_AF_USB_FS_ID(pin_obj) ( \
    ((strcmp( #pin_obj , "(&pin_A10_obj)")  & strcmp( #pin_obj , "((&pin_A10_obj))")) == 0) ? (10) : \
    (0xffffffffffffffffULL))

