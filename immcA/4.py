def cGmax(xy,Cwater,H,Sc,CwbCws,CwrCwp):
	L=[];rst=[0,0,0];G=0
	for i in range(1000,2500):
		L.append(i/1000)
	for n in range(0,10):
		for l in L:
			G=xy*Cwater*H*Sc*n/(n+1+1/l)-n*l*(CwbCws+xy*CwrCwp) #bugs
			if(G-rst[0]>0):
				rst[0]=G;rst[1]=l;rst[2]=n
		print("@: ",n)
	print("when Gmax=",rst[0],"λ=",rst[1],"n=",rst[2])

cGmax(50*30*365,0.57,23.65,23485,333333333,10000)
