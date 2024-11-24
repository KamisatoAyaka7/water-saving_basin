S_lock=10000

def saving_rate(n,S_wsb,H_wsb):
	return n/(1+n+S_lock/S_wsb)

def cost(n,S_wsb,
