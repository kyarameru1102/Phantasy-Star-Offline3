#include "stdafx.h"
#include "RecoveryItem.h"

RecoveryItem::RecoveryItem()
{
}

RecoveryItem::~RecoveryItem()
{
	if (m_recoveryItemModel != nullptr) {
		DeleteGO(m_recoveryItemModel);
	}
}

bool RecoveryItem::Start()
{
	m_recoveryItemModel = NewGO<SkinModelRender>(0);
	m_recoveryItemModel->Init("Assets/modelData/Item/RecoveryItem.tkm");
	m_recoveryItemModel->SetPosition(m_position);

	return true;
}

void RecoveryItem::Update()
{
}
