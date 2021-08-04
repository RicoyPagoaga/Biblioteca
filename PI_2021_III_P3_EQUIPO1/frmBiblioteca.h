#pragma once
#include "frmPersona.h"
#include "frmCliente.h"
#include "frmLibro.h"
#include "frmSucursal.h"
#include "frmSalaComputo.h"
#include "frmComputadora.h"
#include "frmEstante.h"



namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmBiblioteca
	/// </summary>
	public ref class frmBiblioteca : public System::Windows::Forms::Form
	{
	public:
		frmBiblioteca(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frmBiblioteca()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnPersona;
	protected:
	private: System::Windows::Forms::Button^ btnCliente;
	private: System::Windows::Forms::Button^ btnLibro;
	private: System::Windows::Forms::Button^ btnEstantes;
	private: System::Windows::Forms::Button^ btnComputadora;


	private: System::Windows::Forms::Button^ btnComputo;
	private: System::Windows::Forms::Button^ btnSucursal;



	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmBiblioteca::typeid));
			this->btnPersona = (gcnew System::Windows::Forms::Button());
			this->btnCliente = (gcnew System::Windows::Forms::Button());
			this->btnLibro = (gcnew System::Windows::Forms::Button());
			this->btnEstantes = (gcnew System::Windows::Forms::Button());
			this->btnComputadora = (gcnew System::Windows::Forms::Button());
			this->btnComputo = (gcnew System::Windows::Forms::Button());
			this->btnSucursal = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// btnPersona
			// 
			this->btnPersona->BackColor = System::Drawing::Color::LightSalmon;
			this->btnPersona->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnPersona->FlatAppearance->BorderSize = 2;
			this->btnPersona->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnPersona->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnPersona->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnPersona->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnPersona.Image")));
			this->btnPersona->Location = System::Drawing::Point(137, 95);
			this->btnPersona->Name = L"btnPersona";
			this->btnPersona->Size = System::Drawing::Size(95, 47);
			this->btnPersona->TabIndex = 0;
			this->btnPersona->Text = L"Persona";
			this->btnPersona->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnPersona->UseVisualStyleBackColor = false;
			this->btnPersona->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnPersona_Click);
			// 
			// btnCliente
			// 
			this->btnCliente->BackColor = System::Drawing::Color::LightSalmon;
			this->btnCliente->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnCliente->FlatAppearance->BorderSize = 2;
			this->btnCliente->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCliente->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCliente->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnCliente->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCliente.Image")));
			this->btnCliente->Location = System::Drawing::Point(137, 148);
			this->btnCliente->Name = L"btnCliente";
			this->btnCliente->Size = System::Drawing::Size(95, 49);
			this->btnCliente->TabIndex = 1;
			this->btnCliente->Text = L"Cliente";
			this->btnCliente->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnCliente->UseVisualStyleBackColor = false;
			this->btnCliente->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnCliente_Click);
			// 
			// btnLibro
			// 
			this->btnLibro->BackColor = System::Drawing::Color::LightSalmon;
			this->btnLibro->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnLibro->FlatAppearance->BorderSize = 2;
			this->btnLibro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnLibro->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnLibro->ForeColor = System::Drawing::SystemColors::Desktop;
			this->btnLibro->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnLibro.Image")));
			this->btnLibro->Location = System::Drawing::Point(137, 203);
			this->btnLibro->Name = L"btnLibro";
			this->btnLibro->Size = System::Drawing::Size(95, 47);
			this->btnLibro->TabIndex = 2;
			this->btnLibro->Text = L"Libros";
			this->btnLibro->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnLibro->UseVisualStyleBackColor = false;
			this->btnLibro->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnLibro_Click);
			// 
			// btnEstantes
			// 
			this->btnEstantes->BackColor = System::Drawing::Color::LightSalmon;
			this->btnEstantes->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnEstantes->FlatAppearance->BorderSize = 2;
			this->btnEstantes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEstantes->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEstantes->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEstantes.Image")));
			this->btnEstantes->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEstantes->Location = System::Drawing::Point(515, 86);
			this->btnEstantes->Name = L"btnEstantes";
			this->btnEstantes->Size = System::Drawing::Size(164, 47);
			this->btnEstantes->TabIndex = 3;
			this->btnEstantes->Text = L"Estante";
			this->btnEstantes->UseVisualStyleBackColor = false;
			this->btnEstantes->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnEstantes_Click);
			// 
			// btnComputadora
			// 
			this->btnComputadora->BackColor = System::Drawing::Color::LightSalmon;
			this->btnComputadora->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnComputadora->FlatAppearance->BorderSize = 2;
			this->btnComputadora->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComputadora->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComputadora->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComputadora.Image")));
			this->btnComputadora->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComputadora->Location = System::Drawing::Point(515, 139);
			this->btnComputadora->Name = L"btnComputadora";
			this->btnComputadora->Size = System::Drawing::Size(164, 49);
			this->btnComputadora->TabIndex = 4;
			this->btnComputadora->Text = L"Computadora";
			this->btnComputadora->UseVisualStyleBackColor = false;
			this->btnComputadora->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnComputadora_Click);
			// 
			// btnComputo
			// 
			this->btnComputo->BackColor = System::Drawing::Color::LightSalmon;
			this->btnComputo->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnComputo->FlatAppearance->BorderSize = 2;
			this->btnComputo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnComputo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnComputo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnComputo.Image")));
			this->btnComputo->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnComputo->Location = System::Drawing::Point(515, 194);
			this->btnComputo->Name = L"btnComputo";
			this->btnComputo->Size = System::Drawing::Size(164, 47);
			this->btnComputo->TabIndex = 5;
			this->btnComputo->Text = L"Sala de Computo";
			this->btnComputo->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnComputo->UseVisualStyleBackColor = false;
			this->btnComputo->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnComputo_Click);
			// 
			// btnSucursal
			// 
			this->btnSucursal->BackColor = System::Drawing::Color::LightSalmon;
			this->btnSucursal->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->btnSucursal->FlatAppearance->BorderSize = 2;
			this->btnSucursal->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSucursal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnSucursal->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSucursal.Image")));
			this->btnSucursal->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSucursal->Location = System::Drawing::Point(515, 247);
			this->btnSucursal->Name = L"btnSucursal";
			this->btnSucursal->Size = System::Drawing::Size(164, 47);
			this->btnSucursal->TabIndex = 6;
			this->btnSucursal->Text = L"Sucursal";
			this->btnSucursal->UseVisualStyleBackColor = false;
			this->btnSucursal->Click += gcnew System::EventHandler(this, &frmBiblioteca::btnSucursal_Click);
			// 
			// frmBiblioteca
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::Teal;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(938, 594);
			this->Controls->Add(this->btnSucursal);
			this->Controls->Add(this->btnComputo);
			this->Controls->Add(this->btnComputadora);
			this->Controls->Add(this->btnEstantes);
			this->Controls->Add(this->btnLibro);
			this->Controls->Add(this->btnCliente);
			this->Controls->Add(this->btnPersona);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmBiblioteca";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Biblioteca";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void btnPersona_Click(System::Object^ sender, System::EventArgs^ e) {
		frmPersona^ formulario = gcnew frmPersona;
		formulario->Show();
	}
	private: System::Void btnCliente_Click(System::Object^ sender, System::EventArgs^ e) {
		frmCliente^ formulario = gcnew frmCliente;
		formulario->Show();
	}
	private: System::Void btnLibro_Click(System::Object^ sender, System::EventArgs^ e) {
		frmLibro^ formulario = gcnew frmLibro;
		formulario->Show();
	}
private: System::Void btnComputo_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSalaComputo^ formulario = gcnew frmSalaComputo;
	formulario->Show();
}
private: System::Void btnEstantes_Click(System::Object^ sender, System::EventArgs^ e) {
	frmEstante^ formulario = gcnew frmEstante;
	formulario->Show();
}


private: System::Void btnComputadora_Click(System::Object^ sender, System::EventArgs^ e) {
	frmComputadora^ formulario = gcnew frmComputadora;
	formulario->Show();
}

private: System::Void btnSucursal_Click(System::Object^ sender, System::EventArgs^ e) {
	frmSucursal^ formulario = gcnew frmSucursal;
	formulario->Show();
}
};
}
