Version 4
SymbolType BLOCK
TEXT 32 32 LEFT 4 complex_mul
RECTANGLE Normal 32 32 608 800
LINE Normal 0 80 32 80
PIN 0 80 LEFT 36
PINATTR PinName s_axis_a_tvalid
PINATTR Polarity IN
LINE Wide 0 176 32 176
PIN 0 176 LEFT 36
PINATTR PinName s_axis_a_tdata[15:0]
PINATTR Polarity IN
LINE Normal 0 272 32 272
PIN 0 272 LEFT 36
PINATTR PinName s_axis_b_tvalid
PINATTR Polarity IN
LINE Wide 0 368 32 368
PIN 0 368 LEFT 36
PINATTR PinName s_axis_b_tdata[15:0]
PINATTR Polarity IN
LINE Normal 0 656 32 656
PIN 0 656 LEFT 36
PINATTR PinName aclk
PINATTR Polarity IN
LINE Normal 640 80 608 80
PIN 640 80 RIGHT 36
PINATTR PinName m_axis_dout_tvalid
PINATTR Polarity OUT
LINE Wide 640 176 608 176
PIN 640 176 RIGHT 36
PINATTR PinName m_axis_dout_tdata[47:0]
PINATTR Polarity OUT

