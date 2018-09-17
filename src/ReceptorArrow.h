#ifndef RECEPTOR_ARROW_H
#define RECEPTOR_ARROW_H

#include "global.h"
#include "ActorFrame.h"
#include "AutoActor.h"
#include "GameConstantsAndTypes.h"

class PlayerState;
/** @brief A gray arrow that "receives" the note arrows. */
class ReceptorArrow : public ActorFrame
{
  public:
	ReceptorArrow();
	void Load(const PlayerState* pPlayerState, int iColNo, RString Type);

	void DrawPrimitives() override;
	void Update(float fDeltaTime) override;
	void Step(TapNoteScore score);
	void SetPressed() { m_bIsPressed = true; };
	void SetNoteUpcoming(int iCol, int iRow, bool b);

  private:
	const PlayerState* m_pPlayerState;
	int m_iColNo;

	AutoActor m_pReceptor;

	bool m_bIsPressed;
	bool m_bWasPressed; // set in Update
	bool m_bWasReverse;
};

#endif

/**
 * @file
 * @author Ben Nordstrom, Chris Danford (c) 2001-2004
 * @section LICENSE
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, and/or sell copies of the Software, and to permit persons to
 * whom the Software is furnished to do so, provided that the above
 * copyright notice(s) and this permission notice appear in all copies of
 * the Software and that both the above copyright notice(s) and this
 * permission notice appear in supporting documentation.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT OF
 * THIRD PARTY RIGHTS. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR HOLDERS
 * INCLUDED IN THIS NOTICE BE LIABLE FOR ANY CLAIM, OR ANY SPECIAL INDIRECT
 * OR CONSEQUENTIAL DAMAGES, OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS
 * OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR
 * OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */
