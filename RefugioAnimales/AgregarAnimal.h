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
	/// Summary for AgregarAnimal
	/// </summary>
	public ref class AgregarAnimal : public System::Windows::Forms::Form
	{
	public:
		AgregarAnimal(void)
		{
			InitializeComponent();
			dtIngreso->MaxDate= DateTime::Now;
			dtIngreso->Value= DateTime::Now;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AgregarAnimal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	protected:

	private: System::Windows::Forms::Panel^ panel2;
	public: System::Windows::Forms::Button^ btnConfirmar;
	private:
	private: System::Windows::Forms::Button^ btnCancelar;



	private: System::Windows::Forms::Label^ lbEdad;


	private: System::Windows::Forms::Label^ lbIngreso;
	private: System::Windows::Forms::Label^ lbNombre;


	private: System::Windows::Forms::DateTimePicker^ dtIngreso;
	private: System::Windows::Forms::TextBox^ Nombre;


	private: System::Windows::Forms::NumericUpDown^ Edad;





	public:

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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->btnConfirmar = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->dtIngreso = (gcnew System::Windows::Forms::DateTimePicker());
			this->Nombre = (gcnew System::Windows::Forms::TextBox());
			this->Edad = (gcnew System::Windows::Forms::NumericUpDown());
			this->lbEdad = (gcnew System::Windows::Forms::Label());
			this->lbIngreso = (gcnew System::Windows::Forms::Label());
			this->lbNombre = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Edad))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->btnCancelar);
			this->panel1->Controls->Add(this->btnConfirmar);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(0, 271);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(553, 104);
			this->panel1->TabIndex = 0;
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
			this->btnCancelar->Click += gcnew System::EventHandler(this, &AgregarAnimal::btnCancelar_Click);
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
			this->btnConfirmar->Click += gcnew System::EventHandler(this, &AgregarAnimal::btnConfirmar_Click);
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->dtIngreso);
			this->panel2->Controls->Add(this->Nombre);
			this->panel2->Controls->Add(this->Edad);
			this->panel2->Controls->Add(this->lbEdad);
			this->panel2->Controls->Add(this->lbIngreso);
			this->panel2->Controls->Add(this->lbNombre);
			this->panel2->Location = System::Drawing::Point(0, -1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(553, 266);
			this->panel2->TabIndex = 1;
			// 
			// dtIngreso
			// 
			this->dtIngreso->AccessibleDescription = L"Ingreso";
			this->dtIngreso->AccessibleName = L"Ingreso";
			this->dtIngreso->Location = System::Drawing::Point(168, 178);
			this->dtIngreso->MaxDate = System::DateTime(2023, 12, 5, 0, 0, 0, 0);
			this->dtIngreso->Name = L"dtIngreso";
			this->dtIngreso->Size = System::Drawing::Size(296, 25);
			this->dtIngreso->TabIndex = 8;
			this->dtIngreso->Value = System::DateTime(2023, 12, 5, 0, 0, 0, 0);
			// 
			// Nombre
			// 
			this->Nombre->Location = System::Drawing::Point(168, 87);
			this->Nombre->Name = L"Nombre";
			this->Nombre->Size = System::Drawing::Size(296, 25);
			this->Nombre->TabIndex = 7;
			// 
			// Edad
			// 
			this->Edad->Location = System::Drawing::Point(168, 130);
			this->Edad->Name = L"Edad";
			this->Edad->Size = System::Drawing::Size(296, 25);
			this->Edad->TabIndex = 6;
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
			// AgregarAnimal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 17);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(200)));
			this->ClientSize = System::Drawing::Size(553, 375);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Segoe UI", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"AgregarAnimal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AgregarAnimal";
			this->panel1->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Edad))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void btnCancelar_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void btnConfirmar_Click(System::Object^ sender, System::EventArgs^ e) {
	if ( Nombre->Text != nullptr && Edad->Text != nullptr )
	{
		String^ nombreag = Nombre->Text;
		int^ edadag = Convert::ToInt32(Edad->Text);
		Archivos::AgregarAnimal(nombreag,edadag);
	}
	this->Close();
}
};
}
