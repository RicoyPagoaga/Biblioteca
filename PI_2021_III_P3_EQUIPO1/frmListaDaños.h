#pragma once

namespace PI2021IIIP3EQUIPO1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frmListaDa�os
	/// </summary>
	public ref class frmListaDa�os : public System::Windows::Forms::Form
	{
	public:
		frmListaDa�os(void)
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
		~frmListaDa�os()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dgvDa�os;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCostoDa�o;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ colCostoExtravio;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ colTipoDa�o;
	private: System::Windows::Forms::Label^ lblTitulo;







	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(frmListaDa�os::typeid));
			this->dgvDa�os = (gcnew System::Windows::Forms::DataGridView());
			this->colID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCostoDa�o = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colCostoExtravio = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->colTipoDa�o = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->lblTitulo = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDa�os))->BeginInit();
			this->SuspendLayout();
			// 
			// dgvDa�os
			// 
			this->dgvDa�os->BackgroundColor = System::Drawing::Color::LightCyan;
			this->dgvDa�os->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDa�os->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->colID, this->colCostoDa�o,
					this->colCostoExtravio, this->colTipoDa�o
			});
			this->dgvDa�os->Location = System::Drawing::Point(27, 100);
			this->dgvDa�os->Name = L"dgvDa�os";
			this->dgvDa�os->Size = System::Drawing::Size(546, 462);
			this->dgvDa�os->TabIndex = 0;
			// 
			// colID
			// 
			this->colID->HeaderText = L"ID";
			this->colID->Name = L"colID";
			// 
			// colCostoDa�o
			// 
			this->colCostoDa�o->HeaderText = L"Costo por da�o";
			this->colCostoDa�o->Name = L"colCostoDa�o";
			// 
			// colCostoExtravio
			// 
			this->colCostoExtravio->HeaderText = L"Costo de extravio";
			this->colCostoExtravio->Name = L"colCostoExtravio";
			// 
			// colTipoDa�o
			// 
			this->colTipoDa�o->HeaderText = L"Tipo de da�o";
			this->colTipoDa�o->Name = L"colTipoDa�o";
			// 
			// lblTitulo
			// 
			this->lblTitulo->AutoSize = true;
			this->lblTitulo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lblTitulo->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lblTitulo->Location = System::Drawing::Point(146, 46);
			this->lblTitulo->Name = L"lblTitulo";
			this->lblTitulo->Size = System::Drawing::Size(303, 25);
			this->lblTitulo->TabIndex = 1;
			this->lblTitulo->Text = L"Lista de Da�os Registrados";
			// 
			// frmListaDa�os
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkCyan;
			this->ClientSize = System::Drawing::Size(596, 586);
			this->Controls->Add(this->lblTitulo);
			this->Controls->Add(this->dgvDa�os);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"frmListaDa�os";
			this->Text = L"Registro de Da�os";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDa�os))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	};
}
