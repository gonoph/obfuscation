#!/usr/bin/sh

# b=(converted to int)
# def p(i):
#   print('*' * i); return 0 if i>4 else p(i+1);

python3 <<< "b=0x64656620702869293a0a202020207072696e7428272a27202a2069293b2072657475726e203020696620693e3420656c7365207028692b31293b;exec(b.to_bytes(58, 'big').decode('utf8'));p(1);"
