#include "gerais.h"

std::vector<double> linspace(double start, double stop, int n) {
    std::vector<double> v;

    /// Retorna vetor com apenas o primeiro valor se n=1; Retorna vetor vazio se n=0; Levanta erro se n<0;
    if (n <= 1) {
        if (n < 0) {
            throw std::invalid_argument("n deve ser um inteiro positivo");
        }
        if (n == 1) {
            v.push_back(start);
        }
        return v;
    }

    /// Define o passo
    double h = (stop - start) / (n - 1);

    /// Preenche o corpo do vetor
    for(int i=0; i < n-1; i++) {
        v.push_back(start + h * i);
    }

    /// Preenche ultimo item
    v.push_back(stop);

    return v;
}


std::vector<double> transform(std::vector<double> x, std::function<double(double)> f) {
    std::vector<double> ret(x.size());
    std::transform(x.begin(), x.end(), ret.begin(), f);
    return ret;
}
