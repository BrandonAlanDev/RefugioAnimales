#pragma once
#include "Archivos.h"
#include "Animal.h"

namespace RefugioAnimales {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ModificarAnimales
	/// </summary>
	public ref class ModificarAnimales : public System::Windows::Forms::Form
	{
	public:
		ModificarAnimales(int^ id,String^ nombre,int^ edad, DateTime ingreso, DateTime adopcion)
		{
			InitializeComponent();
			this->ID->Text = Convert::ToString(id);
			this->Nombre->Text = nombre;
			this->Edad->Text = Convert::ToString(edad);
			DateTime fechaActual = DateTime::Now;
			this->dtIngreso->MaxDate = fechaActual;
			this->dtIngreso->Value = ingreso;
			this->dtIngreso->Value = ingreso;
			this->Adopcion->Value = adopcion;
			this->Adopcion->MinDate = DateTime::Today.AddYears(-51);
			this->Adopcion->MaxDate = fechaActual;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &ModificarAnimales::btnCancelar_Click);
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &ModificarAnimales::btnConfirmar_Click);
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ModificarAnimales()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel2;
	protected:
	private: System::Windows::Forms::TextBox^ ID;
	private: System::Windows::Forms::DateTimePicker^ dtIngreso;
	private: System::Windows::Forms::TextBox^ Nombre;
	private: System::Windows::Forms::NumericUpDown^ Edad;
	private: System::Windows::Forms::Label^ lbID;
	private: System::Windows::Forms::DateTimePicker^ Adopcion;
	private: System::Windows::Forms::Label^ lbAdopcion;
	private: System::Windows::Forms::Label^ lbEdad;
	private: System::Windows::Forms::Label^ lbIngreso;
	private: System::Windows::Forms::Label^ lbNombre;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ btnCancelar;
	public: System::Windows::Forms::Button^ btnConfirmar;
	private:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->ID = (gcnew System::Windows::Forms::TextBox());
			this->dtIngreso = (gcnew System::Windows::Forms::DateTimePicker());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Edad = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbID = (gcnew System::Windows::Forms::Label());
			this->Adopcion = (gcnew System::Windows::Forms::DateTimePicker());
			this->lbAdopcion = (gcnew System::Windows::Forms::Label());
			this->lbEdad = (gcnew System::Windows::Forms::Label());
			this->lbIngreso = (gcnew System::Windows::Forms::Label());
			this->lbNombre = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Edad))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->ID);
			this->panel2->Controls->Add(this->dtIngreso);
			this->panel2->Controls->Add(this->Nombre);
			this->panel2->Controls->Add(this->Edad);
			this->panel2->Controls->Add(this->lbID);
			this->panel2->Controls->Add(this->Adopcion);
			this->panel2->Controls->Add(this->lbAdopcion);
			this->panel2->Controls->Add(this->lbEdad);
			this->panel2->Controls->Add(this->lbIngreso);
			this->panel2->Controls->Add(this->lbNombre);
			this->panel2->Location = System::Drawing::Point(0, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(553, 267);
			this->panel2->TabIndex = 2;
			// 
			// ID
			// 
			this->ID->Enabled = false;
			this->ID->Location = System::Drawing::Point(168, 41);
			this->ID->Name = L"ID";
			this->ID->ReadOnly = true;
			this->ID->Size = System::Drawing::Size(296, 22);
			this->ID->TabIndex = 9;
			// 
			// dtIngreso
			// 
			this->dtIngreso->AccessibleDescription = L"Ingreso";
			this->dtIngreso->AccessibleName = L"Ingreso";
			this->dtIngreso->Location = System::Drawing::Point(168, 178);
			this->dtIngreso->MaxDate = System::DateTime(2023, 12, 5, 0, 0, 0, 0);
			this->dtIngreso->Name = L"dtIngreso";
			this->dtIngreso->Size = System::Drawing::Size(296, 22);
			this->dtIngreso->TabIndex = 8;
			this->dtIngreso->Value = System::DateTime(2023, 12, 5, 0, 0, 0, 0);
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(168, 87);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(296, 22);
			this->Nombre->TabIndex = 7;
			// 
			// Edad
			// 
			this->Edad->Location = System::Drawing::Point(168, 130);
			this->Edad->Name = L"Edad";
			this->Edad->Size = System::Drawing::Size(296, 22);
			this->Edad->TabIndex = 6;
			// 
			// lbID
			// 
			this->lbID->AutoSize = true;
			this->lbID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbID->Location = System::Drawing::Point(24, 34);
			this->lbID->Name = L"lbID";
			this->lbID->Size = System::Drawing::Size(40, 32);
			this->lbID->TabIndex = 5;
			this->lbID->Text = L"ID";
			// 
			// Adopcion
			// 
			this->Adopcion->Location = System::Drawing::Point(168, 224);
			this->Adopcion->MaxDate = System::DateTime(2023, 12, 5, 0, 0, 0, 0);
			this->Adopcion->Name = L"Adopcion";
			this->Adopcion->Size = System::Drawing::Size(296, 22);
			this->Adopcion->TabIndex = 4;
			this->Adopcion->Value = System::DateTime(2023, 12, 5, 0, 0, 0, 0);
			// 
			// lbAdopcion
			// 
			this->lbAdopcion->AutoSize = true;
			this->lbAdopcion->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbAdopcion->Location = System::Drawing::Point(24, 219);
			this->lbAdopcion->Name = L"lbAdopcion";
			this->lbAdopcion->Size = System::Drawing::Size(125, 32);
			this->lbAdopcion->TabIndex = 3;
			this->lbAdopcion->Text = L"Adopcion";
			// 
			// lbEdad
			// 
			this->lbEdad->AutoSize = true;
			this->lbEdad->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbEdad->Location = System::Drawing::Point(24, 123);
			this->lbEdad->Name = L"lbEdad";
			this->lbEdad->Size = System::Drawing::Size(70, 32);
			this->lbEdad->TabIndex = 2;
			this->lbEdad->Text = L"Edad";
			// 
			// lbIngreso
			// 
			this->lbIngreso->AutoSize = true;
			this->lbIngreso->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbIngreso->Location = System::Drawing::Point(24, 171);
			this->lbIngreso->Name = L"lbIngreso";
			this->lbIngreso->Size = System::Drawing::Size(101, 32);
			this->lbIngreso->TabIndex = 1;
			this->lbIngreso->Text = L"Ingreso";
			// 
			// lbNombre
			// 
			this->lbNombre->AutoSize = true;
			this->lbNombre->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbNombre->Location = System::Drawing::Point(24, 78);
			this->lbNombre->Name = L"lbNombre";
			this->lbNombre->Size = System::Drawing::Size(108, 32);
			this->lbNombre->TabIndex = 0;
			this->lbNombre->Text = L"Nombre";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnConfirmar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 271);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(553, 104);
			this->panel1->TabIndex = 3;
			// 
			// btnCancelar
			// 
			this->btnCancelar->AccessibleDescription = L"Cancelar";
			this->btnCancelar->AccessibleName = L"Cancelar";
			this->btnCancelar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnCancelar->Dock = System::Windows::Forms::DockStyle::Right;
			this->btnCancelar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->Location = System::Drawing::Point(386, 0);
			this->btnCancelar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(167, 104);
			this->btnCancelar->TabIndex = 6;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			// 
			// btnConfirmar
			// 
			this->btnConfirmar->AccessibleDescription = L"Confirmar";
			this->btnConfirmar->AccessibleName = L"Confirmar";
			this->btnConfirmar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->btnConfirmar->Dock = System::Windows::Forms::DockStyle::Left;
			this->btnConfirmar->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnConfirmar->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConfirmar->Location = System::Drawing::Point(0, 0);
			this->btnConfirmar->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->btnConfirmar->Name = L"btnConfirmar";
			this->btnConfirmar->Size = System::Drawing::Size(167, 104);
			this->btnConfirmar->TabIndex = 5;
			this->btnConfirmar->Text = L"Confirmar";
			this->btnConfirmar->UseVisualStyleBackColor = false;
			// 
			// ModificarAnimales
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->ClientSize = System::Drawing::Size(553, 375);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel2);
			this->Name = L"ModificarAnimales";
			this->Text = L"ModificarAnimales";
			this->Load += gcnew System::EventHandler(this, &ModificarAnimales::ModificarAnimales_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Edad))->EndInit();
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void ModificarAnimales_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void btnConfirmar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (Nombre->Text != nullptr && Edad->Text != nullptr)
		{
			int^ idm = Convert::ToInt32(ID->Text);
			String^ nombrem = Nombre->Text;
			int^ edadm = Convert::ToInt32(Edad->Text);
			DateTime^ ingresom = dtIngreso->Value;
			DateTime^ adopcionm = Adopcion->Value;
			Archivos::ModificarAnimal(idm,nombrem, edadm,ingresom,adopcionm);
		}
		this->Close();
	}
};
}
