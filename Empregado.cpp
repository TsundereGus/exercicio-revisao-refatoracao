#include "Empregado.hpp"

#define HORAS_DIARIAS 8

double Empregado::pagamentoMes(double horasTrabalhadas){    
        double salarioMes = horasTrabalhadas;
        
        //Cálculo de hora extra (+50% se horasTrabalhadas > 8)
        if (horasTrabalhadas > HORAS_DIARIAS){
            double horasExtras = horasTrabalhadas - HORAS_DIARIAS;
            salarioMes += horasExtras / 2;
        }
        return salarioMes * salarioHora;
}