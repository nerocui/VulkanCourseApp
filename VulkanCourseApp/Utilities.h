#pragma once

// Indices of Queue Families (if exist)
struct QueueFamilyIndices {
	int graphicsFamily = -1;		// Location of graphics Queue Family

	// Check if Queue families are valid
	bool isValid()
	{
		return graphicsFamily >= 0;
	}
};
