#pragma once
#include "frmListaDa�os.h";
#include "frmPrestamo.h"

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmDa�o
	/// </summary>
	public ref class frmDa�o : public System::Windows::Forms::Form
	{
	public:
		frmDa�o(void)
		{
			InitializeComponent();
			//
			//TODO: agregar c�digo de constructor aqu�
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se est�n usando.
		/// </summary>
		~frmDa�o()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ lblDa�oID;
	private: System::Windows::Forms::Label^ lblTitulo;
	protected:

	private: System::Windows::Forms::Label^ lblCostoExtravio;
	private: System::Windows::Forms::Label^ lblTipoDa�o;
	private: System::Windows::Forms::Label^ lblCostoDa�o;

	private: System::Windows::Forms::TextBox^ txtCostoExtravio;

	private: System::Windows::Forms::TextBox^ txtCostoDa�o;











	private: System::Windows::Forms::ComboBox^ cboTipoDa�o;
	private: System::Windows::Forms::Button^ btnAgregar;
	private: System::Windows::Forms::Button^ btnMostrar;
	private: System::Windows::Forms::TextBox^ txtID;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;





	private:
		/// <summary>
		/// Variable del dise�ador necesaria.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// M�todo necesario para admitir el Dise�ador. No se puede modificar
		/// el contenido de este m�todo con el editor de c�digo.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmDa�o::typeid));
			this->lblDa�oID = (gcnew System::Windows::Forms::Label());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			this->lblCostoExtravio = (gcnew System::Windows::Forms::Label());
			this->lblTipoDa�o = (gcnew System::Windows::Forms::Label());
			this->lblCostoDa�o = (gcnew System::Windows::Forms::Label());
			this->txtCostoExtravio = (gcnew System::Windows::Forms::TextBox());
			this->txtCostoDa�o = (gcnew System::Windows::Forms::TextBox());
			this->cboTipoDa�o = (gcnew System::Windows::Forms::ComboBox());
			this->btnAgregar = (gcnew System::Windows::Forms::Button());
			this->btnMostrar = (gcnew System::Windows::Forms::Button());
			this->txtID = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			this->SuspendLayout();
			// 
			// lblDa�oID
			// 
			this->lblDa�oID->AutoSize = true;
			this->lblDa�oID->Location = System::Drawing::Point(221, 132);
			this->lblDa�oID->Name = L"lblDa�oID";
			this->lblDa�oID->Size = System::Drawing::Size(38, 13);
			this->lblDa�oID->TabIndex = 0;
			this->lblDa�oID->Text = L"No ID:";
			this->lblDa�oID->TextAlign = System::Drawing::ContentAlignment::TopRight;
			// 
			// lblTitulo
			// 
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->Location = System::Drawing::Point(128, 43);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(270, 44);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Penalizaciones por Da�o ";
			this->lblTitulo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lblCostoExtravio
			// 
			this->lblCostoExtravio->AutoSize = true;
			this->lblCostoExtravio->Location = System::Drawing::Point(162, 175);
			this->lblCostoExtravio->Name = L"lblCostoExtravio";
			this->lblCostoExtravio->Size = System::Drawing::Size(97, 13);
			this->lblCostoExtravio->TabIndex = 2;
			this->lblCostoExtravio->Text = L"Costo por extrav�o:";
			// 
			// lblTipoDa�o
			// 
			this->lblTipoDa�o->AutoSize = true;
			this->lblTipoDa�o->Location = System::Drawing::Point(186, 224);
			this->lblTipoDa�o->Name = L"lblTipoDa�o";
			this->lblTipoDa�o->Size = System::Drawing::Size(73, 13);
			this->lblTipoDa�o->TabIndex = 3;
			this->lblTipoDa�o->Text = L"Tipo de da�o:";
			// 
			// lblCostoDa�o
			// 
			this->lblCostoDa�o->AutoSize = true;
			this->lblCostoDa�o->Location = System::Drawing::Point(177, 269);
			this->lblCostoDa�o->Name = L"lblCostoDa�o";
			this->lblCostoDa�o->Size = System::Drawing::Size(82, 13);
			this->lblCostoDa�o->TabIndex = 4;
			this->lblCostoDa�o->Text = L"Costo por da�o:";
			// 
			// txtCostoExtravio
			// 
			this->txtCostoExtravio->Location = System::Drawing::Point(277, 168);
			this->txtCostoExtravio->Name = L"txtCostoExtravio";
			this->txtCostoExtravio->Size = System::Drawing::Size(121, 20);
			this->txtCostoExtravio->TabIndex = 6;
			// 
			// txtCostoDa�o
			// 
			this->txtCostoDa�o->Location = System::Drawing::Point(277, 262);
			this->txtCostoDa�o->Name = L"txtCostoDa�o";
			this->txtCostoDa�o->Size = System::Drawing::Size(121, 20);
			this->txtCostoDa�o->TabIndex = 8;
			// 
			// cboTipoDa�o
			// 
			this->cboTipoDa�o->FormattingEnabled = true;
			this->cboTipoDa�o->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Paginas rayadas", L"Deterioro de la estructura",
					L"Otro", L""
			});
			this->cboTipoDa�o->Location = System::Drawing::Point(277, 217);
			this->cboTipoDa�o->Name = L"cboTipoDa�o";
			this->cboTipoDa�o->Size = System::Drawing::Size(121, 21);
			this->cboTipoDa�o->TabIndex = 16;
			// 
			// btnAgregar
			// 
			this->btnAgregar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnAgregar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnAgregar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAgregar.Image")));
			this->btnAgregar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAgregar->Location = System::Drawing::Point(132, 356);
			this->btnAgregar->Name = L"btnAgregar";
			this->btnAgregar->Size = System::Drawing::Size(100, 38);
			this->btnAgregar->TabIndex = 17;
			this->btnAgregar->Text = L"Agregar  ";
			this->btnAgregar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAgregar->UseVisualStyleBackColor = false;
			// 
			// btnMostrar
			// 
			this->btnMostrar->BackColor = System::Drawing::Color::PaleTurquoise;
			this->btnMostrar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMostrar->ForeColor = System::Drawing::SystemColors::ControlText;
			this->btnMostrar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnMostrar.Image")));
			this->btnMostrar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnMostrar->Location = System::Drawing::Point(277, 356);
			this->btnMostrar->Name = L"btnMostrar";
			this->btnMostrar->Size = System::Drawing::Size(100, 38);
			this->btnMostrar->TabIndex = 18;
			this->btnMostrar->Text = L"Mostrar  ";
			this->btnMostrar->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnMostrar->UseVisualStyleBackColor = false;
			this->btnMostrar->Click += gcnew System::EventHandler(this, &frmDa�o::btnMostrar_Click);
			// 
			// txtID
			// 
			this->txtID->Location = System::Drawing::Point(277, 125);
			this->txtID->Name = L"txtID";
			this->txtID->Size = System::Drawing::Size(121, 20);
			this->txtID->TabIndex = 19;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(106, 125);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(32, 30);
			this->pictureBox1->TabIndex = 20;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(106, 262);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(32, 30);
			this->pictureBox2->TabIndex = 21;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(106, 217);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(32, 30);
			this->pictureBox3->TabIndex = 22;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(106, 168);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(32, 33);
			this->pictureBox4->TabIndex = 23;
			this->pictureBox4->TabStop = false;
			// 
			// frmDa�o
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(528, 463);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->txtID);
			this->Controls->Add(this->btnMostrar);
			this->Controls->Add(this->btnAgregar);
			this->Controls->Add(this->cboTipoDa�o);
			this->Controls->Add(this->txtCostoDa�o);
			this->Controls->Add(this->txtCostoExtravio);
			this->Controls->Add(this->lblCostoDa�o);
			this->Controls->Add(this->lblTipoDa�o);
			this->Controls->Add(this->lblCostoExtravio);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->lblDa�oID);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmDa�o";
			this->Text = L"Da�o";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void btnMostrar_Click(System::Object^ sender, System::EventArgs^ e) {
		frmListaDa�os^ formulario = gcnew frmListaDa�os;
		formulario->Show();

	}
	};
}
