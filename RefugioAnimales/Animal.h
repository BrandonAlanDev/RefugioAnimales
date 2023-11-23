#pragma once
#include <vcclr.h>

using namespace System;

ref class Animal
{
private:
	int^ Edad;
	String^ Nombre;
	DateTime^ Ingreso;
	DateTime^ Adopcion;

public:
	Animal(int^ edad, System::String^ nombre)
	{
		this->Edad = edad;
		this->Nombre = nombre;
		this->Ingreso = DateTime::Now;
	}
	void Adoptar()
	{
		// Obtener la fecha y hora actual
		this->Adopcion = DateTime::Now;
	}
	void SetEdad(int^ edad)
	{ 
		this->Edad = edad;
	}
};

