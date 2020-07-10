#pragma once

std::string ToString(BOOL b)
{
	return b ? "TRUE" : "FALSE";
}

std::string ToString(D3D12_SHADER_MIN_PRECISION_SUPPORT minPrec)
{
	if (minPrec == D3D12_SHADER_MIN_PRECISION_SUPPORT_NONE) return "None";

	std::string result;
	bool first = true;
	if (minPrec & D3D12_SHADER_MIN_PRECISION_SUPPORT_10_BIT)
	{
		result.append("10-bit");
	}
	if (minPrec & D3D12_SHADER_MIN_PRECISION_SUPPORT_16_BIT)
	{
		if (result.length() > 0)
		{
			result.append(", ");
		}
		result.append("16-bit");
	}

	return result;
}

std::string ToString(D3D12_TILED_RESOURCES_TIER tier)
{
	switch (tier)
	{
	case D3D12_TILED_RESOURCES_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_TILED_RESOURCES_TIER_1: return "Tier 1";
	case D3D12_TILED_RESOURCES_TIER_2: return "Tier 2";
	case D3D12_TILED_RESOURCES_TIER_3: return "Tier 3";
	case D3D12_TILED_RESOURCES_TIER_4: return "Tier 4";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_RESOURCE_BINDING_TIER tier)
{
	switch (tier)
	{
	case D3D12_RESOURCE_BINDING_TIER_1: return "Tier 1";
	case D3D12_RESOURCE_BINDING_TIER_2: return "Tier 2";
	case D3D12_RESOURCE_BINDING_TIER_3: return "Tier 3";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_CONSERVATIVE_RASTERIZATION_TIER tier)
{
	switch (tier)
	{
	case D3D12_CONSERVATIVE_RASTERIZATION_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_CONSERVATIVE_RASTERIZATION_TIER_1: return "Tier 1";
	case D3D12_CONSERVATIVE_RASTERIZATION_TIER_2: return "Tier 2";
	case D3D12_CONSERVATIVE_RASTERIZATION_TIER_3: return "Tier 3";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_CROSS_NODE_SHARING_TIER tier)
{
	switch (tier)
	{
	case D3D12_CROSS_NODE_SHARING_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_CROSS_NODE_SHARING_TIER_1_EMULATED: return "Tier 1, emulated";
	case D3D12_CROSS_NODE_SHARING_TIER_1: return "Tier 1";
	case D3D12_CROSS_NODE_SHARING_TIER_2: return "Tier 2";
	case D3D12_CROSS_NODE_SHARING_TIER_3: return "Tier 3";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_RESOURCE_HEAP_TIER tier)
{
	switch (tier)
	{
	case D3D12_RESOURCE_HEAP_TIER_1: return "Tier 1";
	case D3D12_RESOURCE_HEAP_TIER_2: return "Tier 2";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER tier)
{
	switch (tier)
	{
	case D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER_1: return "Tier 1";
	case D3D12_PROGRAMMABLE_SAMPLE_POSITIONS_TIER_2: return "Tier 2";
	default: return "<Unknown>";
	}
}

template<typename T>
class FlagsStringFormatter
{
	struct FlagAndString
	{
		T Flag;
		std::string Str;
	};
	std::vector<FlagAndString> m_values;

public:
	void AddFlag(T flag, std::string str)
	{
		FlagAndString fs;
		fs.Flag = flag;
		fs.Str = str;
		m_values.push_back(fs);
	}

	std::string Format(T flagValue)
	{
		std::string result;

		for (size_t i = 0; i < m_values.size(); ++i)
		{
			if (flagValue & m_values[i].Flag)
			{
				if (result.length() > 0)
				{
					result.append(" | ");
				}
				result.append(m_values[i].Str);
			}

		}

		return result;
	}
};

std::string ToString(D3D12_COMMAND_LIST_SUPPORT_FLAGS flags)
{
	if (flags == D3D12_COMMAND_LIST_SUPPORT_FLAG_NONE) return "None";

	FlagsStringFormatter<D3D12_COMMAND_LIST_SUPPORT_FLAGS> fs;
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_DIRECT, "Direct");
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_BUNDLE, "Bundle");
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_COMPUTE, "Compute");
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_COPY, "Copy");
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_VIDEO_DECODE, "VideoDecode");
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_VIDEO_PROCESS, "VideoProcess");
	fs.AddFlag(D3D12_COMMAND_LIST_SUPPORT_FLAG_VIDEO_ENCODE, "VideoEncode");

	return fs.Format(flags);
}

std::string ToString(D3D12_VIEW_INSTANCING_TIER tier)
{
	switch (tier)
	{
	case D3D12_VIEW_INSTANCING_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_VIEW_INSTANCING_TIER_1: return "Tier 1";
	case D3D12_VIEW_INSTANCING_TIER_2: return "Tier 2";
	case D3D12_VIEW_INSTANCING_TIER_3: return "Tier 2";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER tier)
{
	switch (tier)
	{
	case D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_0: return "Tier 0";
	case D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_1: return "Tier 1";
	case D3D12_SHARED_RESOURCE_COMPATIBILITY_TIER_2: return "Tier 2";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_RENDER_PASS_TIER tier)
{
	switch (tier)
	{
	case D3D12_RENDER_PASS_TIER_0: return "Tier 0";
	case D3D12_RENDER_PASS_TIER_1: return "Tier 1";
	case D3D12_RENDER_PASS_TIER_2: return "Tier 2";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_RAYTRACING_TIER tier)
{
	switch (tier)
	{
	case D3D12_RAYTRACING_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_RAYTRACING_TIER_1_0: return "Tier 1.0";
	case D3D12_RAYTRACING_TIER_1_1: return "Tier 1.1";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_VARIABLE_SHADING_RATE_TIER tier)
{
	switch (tier)
	{
	case D3D12_VARIABLE_SHADING_RATE_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_VARIABLE_SHADING_RATE_TIER_1: return "Tier 1";
	case D3D12_VARIABLE_SHADING_RATE_TIER_2: return "Tier 2";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_MESH_SHADER_TIER tier)
{
	switch (tier)
	{
	case D3D12_MESH_SHADER_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_MESH_SHADER_TIER_1: return "Tier 1";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D12_SAMPLER_FEEDBACK_TIER tier)
{
	switch (tier)
	{
	case D3D12_SAMPLER_FEEDBACK_TIER_NOT_SUPPORTED: return "Not supported";
	case D3D12_SAMPLER_FEEDBACK_TIER_0_9: return "Tier 0.9";
	case D3D12_SAMPLER_FEEDBACK_TIER_1_0: return "Tier 1.0";
	default: return "<Unknown>";
	}
}

std::string ToString(D3D_FEATURE_LEVEL fl)
{
	switch (fl)
	{
	case D3D_FEATURE_LEVEL_1_0_CORE: return "1.0-Core";
	case D3D_FEATURE_LEVEL_9_1: return "9.1";
	case D3D_FEATURE_LEVEL_9_2: return "9.2";
	case D3D_FEATURE_LEVEL_9_3: return "9.3";
	case D3D_FEATURE_LEVEL_10_0: return "10.0";
	case D3D_FEATURE_LEVEL_10_1: return "10.1";
	case D3D_FEATURE_LEVEL_11_0: return "11.0";
	case D3D_FEATURE_LEVEL_11_1: return "11.1";
	case D3D_FEATURE_LEVEL_12_0: return "12.0";
	case D3D_FEATURE_LEVEL_12_1: return "12.1";
	default: return "<Unknown>";
	}
}
