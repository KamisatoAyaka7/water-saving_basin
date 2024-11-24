#include<iostream>
#include<fstream>
#include<math.h>

using namespace std;

#define 0 C_treatment

long cC_pumping(long E_pump,long C_energy,long V_total)
{
	return E_pump*C_energy*V_total;
}

long cC_extraction(long C_infra,long T,long C_permit,long V_total)
{
	return C_infra/T+C_permit*V_total;
}

long cC_supply(long C_pumping,long C_extraction)
{
	return C_pumping+C_extraction;
}

long cC_pipeline(long C_pipe_infra,long T)
{
	return C_pipe_infra/T;
}

long cC_transport_energy(long E_transport,long C_energy,long V_total)
{
	return E_transport*C_energy*V_total;
}

long cC_transport(long C_pipeline,long C_transport_energy)
{
	return C_pipeline+C_transport_energy;
}

long cC_evaporation(long V_evap,long C_water)
{
	return V_evap+C_water;
}

long cC_depletion(long C_mitigation,long V_total)
{
	return C_mitigation*V_total;
}

long cC_biodiversity(long C_regulation,long V_total)
{
	return C_regulation*V_total;
}

long cC_environment(long C_evaporation,long C_depletion,long C_biodiversity)
{
	return C_evaporation+C_depletion+C_biodiversity;
}

long cC_agriculture(long P_crop,long Y_water)
{
	return P_crop*Y_water;
}

long cC_municipal(long C_municipal_tariff,long V_total)
{
	return C_municipal_tariff*V_total;
}

long cC_hydropower(long E_hydro,long C_energy)
{
	return E_hydro*C_energy;
}

long cC_water(long C_pumping,long C_extraction,long C_pipeline,
				long C_transport_energy,long C_evaporation
				long C_depletion,long C_biodiversity,long C_opportunity)
{
	return (C_pumping+C_extraction+C_pipeline+C_transport_energy+C_evaporation
				+C_depletion+C_biodiversity+C_opportunity)/V_total;
}

long cC_water2()
{
	long C_pumping=cCpumping(E_pump,C_energy,V_total);
	long C_extraction=cC_extraction(C_infra,T,C_permit);
	long C_pipeline=cC_pipeline(C_pipe_infra,T);
	long C_transport_energy=cC_transport_energy(E_transport,C_energy,V_total);
	long C_evaporation=cC_evaporation(V_evap,C_water);
	long C_depletion=cC_depletion(C_mitigation,V_total);
	long C_biodiversity=cC_biodiversity(C_regulation,V_total);
	long C_opportunity=cC_opportunity(
