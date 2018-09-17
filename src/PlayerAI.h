﻿/* PlayerAI - Chooses which notes the AI steps on. */

#ifndef PlayerAI_H
#define PlayerAI_H

#include "global.h"
#include "GameConstantsAndTypes.h"
#include "HighScore.h"

class PlayerState;

const int NUM_SKILL_LEVELS = 6; // 0-5

class PlayerAI
{
  public:
	// Pointer to real high score data for a replay

	static HighScore* pScoreData;

	// Pulled from pScoreData on initialization

	// A map with indices for each row of the chart, pointing to nothing or a
	// Normal Result
	static map<int, vector<TapReplayResult>> m_ReplayTapMap;
	// A map with indices for each row of the chart, pointing to nothing or hold
	// drop results.
	static map<int, vector<HoldReplayResult>> m_ReplayHoldMap;

	static void InitFromDisk();
	static TapNoteScore GetTapNoteScore(const PlayerState* pPlayerState);
	static void SetScoreData(HighScore* pHighScore);

	static float GetTapNoteOffsetForReplay(TapNote* pTN, int noteRow, int col);
	static TapNoteScore GetTapNoteScoreForReplay(
	  const PlayerState* pPlayerState,
	  float fNoteOffset);
	static bool DetermineIfHoldDropped(int noteRow, int col);
};

#endif

/*
 * (c) 2003-2004 Chris Danford
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
