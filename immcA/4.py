def cGmax(Cwater,H,Sc,Cs,Tlim,Tms_py,C_py):
	L=[];rst=[0,0,0];G=0
	for i in range(1000,2500):
		L.append(i/1000)
	for n in range(0,10):
		for l in L:
			G=Cwater*Sc*l*n/(l*n+l+1)*Tlim*Tms_py-n*Cs*l-C_py*Tlim #bugs here
			if(G-rst[0]>0):
				rst[0]=G;rst[1]=l;rst[2]=n
		print("@: ",n)
	print("when Gmax=",rst[0],"λ=",rst[1],"n=",rst[2])

cGmax(0.57,23.65,23485,333333333,50,39*356,10000000)
