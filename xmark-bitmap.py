#!/usr/bin/python3
bm=0xff81422418244281ff;sm=bm.to_bytes(9,'big');
def rp(x,y,z): return x.replace(y,z)
def dm(b): l=bin(b)[2:];l=(8-len(l))*'0'+l;l=rp(l,'1','#');l=rp(l,'0',' ');return l;
for b in sm: l=dm(b);print(f'#{l}#')
