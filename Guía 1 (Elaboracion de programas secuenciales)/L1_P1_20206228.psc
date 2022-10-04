Algoritmo circunferenciasTangentesExteriores
	//Jeremy Daniel Aldama Giraldo 20206228
	Escribir 'Ingrese las coordenadas x e y del centro de la circunferencia 1: '
	Leer x1, y1
	Escribir 'Ingrese las coordenadas x e y del centro de la circunferencia 2: '
	Leer x2, y2
	Escribir 'Ingrese el radio de la circunferencia 1: '
	Leer radio1
	Escribir 'Ingrese el radio de la circunferencia 2: '
	Leer radio2
	
	areaCircunferencia1 <- 3.141592*radio1*radio1
	areaCircunferencia2 <- 3.141592*radio2*radio2
	longitudCircunferencia1 <- 2*3.141592*radio1
	longitudCircunferencia2 <- 2*3.141592*radio2
	verificarTangencia <- abs ( rc((x2-x1)^2 + (y2-y1)) - (radio1+radio2)) < 0.0001 //Los calculos de la formula de la distancia entre puntos debe ser igual  o cercana a la suma de los radios
	
	Escribir 'Resultado de la Circunferencia 1: '
	Escribir 'El área es: ', areaCircunferencia1
	Escribir 'La longitud es: ', longitudCircunferencia1
	Escribir 'Resultado de la circunferencia 2: '
	Escribir 'El área es: ' areaCircunferencia2
	Escribir 'La longitud es: ', longitudCircunferencia2
	Escribir '¿Son circunferencias tangentes? ', verificarTangencia
FinAlgoritmo
