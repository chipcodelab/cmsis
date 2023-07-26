#include "mfccdata.h"


const float32_t mfcc_dct_coefs_config1_f32[NB_MFCC_DCT_COEFS_CONFIG1_F32]={
0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,
0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,0.316228f,
0.315253f,0.307490f,0.292156f,0.269628f,0.240461f,0.205374f,0.165229f,0.121015f,0.073822f,0.024811f,
-0.024811f,-0.073822f,-0.121015f,-0.165229f,-0.205374f,-0.240461f,-0.269628f,-0.292156f,-0.307490f,-0.315253f,
0.312334f,0.281761f,0.223607f,0.143564f,0.049469f,-0.049469f,-0.143564f,-0.223607f,-0.281761f,-0.312334f,
-0.312334f,-0.281761f,-0.223607f,-0.143564f,-0.049469f,0.049469f,0.143564f,0.223607f,0.281761f,0.312334f,
0.307490f,0.240461f,0.121015f,-0.024811f,-0.165229f,-0.269628f,-0.315253f,-0.292156f,-0.205374f,-0.073822f,
0.073822f,0.205374f,0.292156f,0.315253f,0.269628f,0.165229f,0.024811f,-0.121015f,-0.240461f,-0.307490f,
0.300750f,0.185874f,0.000000f,-0.185874f,-0.300750f,-0.300750f,-0.185874f,-0.000000f,0.185874f,0.300750f,
0.300750f,0.185874f,0.000000f,-0.185874f,-0.300750f,-0.300750f,-0.185874f,-0.000000f,0.185874f,0.300750f,
0.292156f,0.121015f,-0.121015f,-0.292156f,-0.292156f,-0.121015f,0.121015f,0.292156f,0.292156f,0.121015f,
-0.121015f,-0.292156f,-0.292156f,-0.121015f,0.121015f,0.292156f,0.292156f,0.121015f,-0.121015f,-0.292156f,
0.281761f,0.049469f,-0.223607f,-0.312334f,-0.143564f,0.143564f,0.312334f,0.223607f,-0.049469f,-0.281761f,
-0.281761f,-0.049469f,0.223607f,0.312334f,0.143564f,-0.143564f,-0.312334f,-0.223607f,0.049469f,0.281761f,
0.269628f,-0.024811f,-0.292156f,-0.240461f,0.073822f,0.307490f,0.205374f,-0.121015f,-0.315253f,-0.165229f,
0.165229f,0.315253f,0.121015f,-0.205374f,-0.307490f,-0.073822f,0.240461f,0.292156f,0.024811f,-0.269628f,
0.255834f,-0.097720f,-0.316228f,-0.097720f,0.255834f,0.255834f,-0.097720f,-0.316228f,-0.097720f,0.255834f,
0.255834f,-0.097720f,-0.316228f,-0.097720f,0.255834f,0.255834f,-0.097720f,-0.316228f,-0.097720f,0.255834f,
0.240461f,-0.165229f,-0.292156f,0.073822f,0.315253f,0.024811f,-0.307490f,-0.121015f,0.269628f,0.205374f,
-0.205374f,-0.269628f,0.121015f,0.307490f,-0.024811f,-0.315253f,-0.073822f,0.292156f,0.165229f,-0.240461f,
0.223607f,-0.223607f,-0.223607f,0.223607f,0.223607f,-0.223607f,-0.223607f,0.223607f,0.223607f,-0.223607f,
-0.223607f,0.223607f,0.223607f,-0.223607f,-0.223607f,0.223607f,0.223607f,-0.223607f,-0.223607f,0.223607f,
0.205374f,-0.269628f,-0.121015f,0.307490f,0.024811f,-0.315253f,0.073822f,0.292156f,-0.165229f,-0.240461f,
0.240461f,0.165229f,-0.292156f,-0.073822f,0.315253f,-0.024811f,-0.307490f,0.121015f,0.269628f,-0.205374f,
0.185874f,-0.300750f,-0.000000f,0.300750f,-0.185874f,-0.185874f,0.300750f,0.000000f,-0.300750f,0.185874f,
0.185874f,-0.300750f,-0.000000f,0.300750f,-0.185874f,-0.185874f,0.300750f,-0.000000f,-0.300750f,0.185874f,
};




const float32_t mfcc_window_coefs_config1_f32[NB_MFCC_WIN_COEFS_CONFIG1_F32]={
0.080000f,0.080009f,0.080035f,0.080078f,0.080139f,0.080216f,0.080312f,0.080424f,0.080554f,0.080701f,
0.080866f,0.081047f,0.081246f,0.081463f,0.081696f,0.081947f,0.082215f,0.082500f,0.082803f,0.083123f,
0.083459f,0.083814f,0.084185f,0.084573f,0.084979f,0.085402f,0.085841f,0.086298f,0.086772f,0.087263f,
0.087771f,0.088297f,0.088839f,0.089398f,0.089974f,0.090567f,0.091177f,0.091804f,0.092448f,0.093108f,
0.093786f,0.094480f,0.095191f,0.095919f,0.096663f,0.097424f,0.098202f,0.098996f,0.099807f,0.100635f,
0.101479f,0.102340f,0.103217f,0.104111f,0.105021f,0.105947f,0.106890f,0.107849f,0.108824f,0.109816f,
0.110823f,0.111847f,0.112887f,0.113943f,0.115015f,0.116104f,0.117208f,0.118328f,0.119464f,0.120615f,
0.121783f,0.122966f,0.124165f,0.125380f,0.126610f,0.127856f,0.129117f,0.130394f,0.131686f,0.132993f,
0.134316f,0.135654f,0.137008f,0.138376f,0.139760f,0.141159f,0.142572f,0.144001f,0.145445f,0.146903f,
0.148377f,0.149865f,0.151367f,0.152885f,0.154417f,0.155963f,0.157524f,0.159099f,0.160689f,0.162293f,
0.163911f,0.165543f,0.167190f,0.168850f,0.170525f,0.172213f,0.173915f,0.175631f,0.177361f,0.179104f,
0.180861f,0.182631f,0.184415f,0.186212f,0.188023f,0.189847f,0.191684f,0.193534f,0.195397f,0.197273f,
0.199162f,0.201064f,0.202979f,0.204906f,0.206846f,0.208799f,0.210764f,0.212741f,0.214731f,0.216733f,
0.218747f,0.220773f,0.222811f,0.224862f,0.226924f,0.228997f,0.231083f,0.233180f,0.235289f,0.237409f,
0.239540f,0.241683f,0.243837f,0.246003f,0.248179f,0.250366f,0.252565f,0.254774f,0.256993f,0.259224f,
0.261465f,0.263716f,0.265978f,0.268251f,0.270533f,0.272826f,0.275128f,0.277441f,0.279763f,0.282096f,
0.284438f,0.286789f,0.289151f,0.291521f,0.293901f,0.296290f,0.298689f,0.301096f,0.303513f,0.305938f,
0.308372f,0.310815f,0.313267f,0.315727f,0.318195f,0.320672f,0.323157f,0.325651f,0.328152f,0.330662f,
0.333179f,0.335704f,0.338237f,0.340777f,0.343325f,0.345880f,0.348442f,0.351012f,0.353589f,0.356173f,
0.358764f,0.361361f,0.363966f,0.366577f,0.369194f,0.371818f,0.374448f,0.377085f,0.379727f,0.382376f,
0.385031f,0.387691f,0.390357f,0.393029f,0.395706f,0.398389f,0.401077f,0.403771f,0.406469f,0.409173f,
0.411881f,0.414594f,0.417312f,0.420035f,0.422762f,0.425493f,0.428229f,0.430969f,0.433713f,0.436461f,
0.439213f,0.441969f,0.444729f,0.447492f,0.450258f,0.453028f,0.455802f,0.458578f,0.461358f,0.464140f,
0.466925f,0.469713f,0.472504f,0.475297f,0.478093f,0.480891f,0.483691f,0.486493f,0.489298f,0.492104f,
0.494912f,0.497722f,0.500533f,0.503346f,0.506160f,0.508976f,0.511792f,0.514610f,0.517429f,0.520248f,
0.523069f,0.525890f,0.528711f,0.531533f,0.534355f,0.537178f,0.540000f,0.542822f,0.545645f,0.548467f,
0.551289f,0.554110f,0.556931f,0.559752f,0.562571f,0.565390f,0.568208f,0.571024f,0.573840f,0.576654f,
0.579467f,0.582278f,0.585088f,0.587896f,0.590702f,0.593507f,0.596309f,0.599109f,0.601907f,0.604703f,
0.607496f,0.610287f,0.613075f,0.615860f,0.618642f,0.621422f,0.624198f,0.626972f,0.629742f,0.632508f,
0.635271f,0.638031f,0.640787f,0.643539f,0.646287f,0.649031f,0.651771f,0.654507f,0.657238f,0.659965f,
0.662688f,0.665406f,0.668119f,0.670827f,0.673531f,0.676229f,0.678923f,0.681611f,0.684294f,0.686971f,
0.689643f,0.692309f,0.694969f,0.697624f,0.700273f,0.702915f,0.705552f,0.708182f,0.710806f,0.713423f,
0.716034f,0.718639f,0.721236f,0.723827f,0.726411f,0.728988f,0.731558f,0.734120f,0.736675f,0.739223f,
0.741763f,0.744296f,0.746821f,0.749338f,0.751848f,0.754349f,0.756842f,0.759328f,0.761805f,0.764273f,
0.766733f,0.769185f,0.771628f,0.774062f,0.776487f,0.778904f,0.781311f,0.783710f,0.786099f,0.788479f,
0.790850f,0.793211f,0.795562f,0.797904f,0.800237f,0.802559f,0.804872f,0.807174f,0.809467f,0.811749f,
0.814022f,0.816284f,0.818535f,0.820776f,0.823007f,0.825226f,0.827435f,0.829634f,0.831821f,0.833997f,
0.836163f,0.838317f,0.840460f,0.842591f,0.844711f,0.846820f,0.848917f,0.851003f,0.853076f,0.855138f,
0.857189f,0.859227f,0.861253f,0.863267f,0.865269f,0.867259f,0.869236f,0.871201f,0.873154f,0.875094f,
0.877021f,0.878936f,0.880838f,0.882727f,0.884603f,0.886466f,0.888316f,0.890153f,0.891977f,0.893788f,
0.895585f,0.897369f,0.899139f,0.900896f,0.902639f,0.904369f,0.906085f,0.907787f,0.909475f,0.911150f,
0.912810f,0.914457f,0.916089f,0.917707f,0.919311f,0.920901f,0.922476f,0.924037f,0.925583f,0.927115f,
0.928633f,0.930135f,0.931623f,0.933097f,0.934555f,0.935999f,0.937428f,0.938841f,0.940240f,0.941624f,
0.942992f,0.944346f,0.945684f,0.947007f,0.948314f,0.949606f,0.950883f,0.952145f,0.953390f,0.954620f,
0.955835f,0.957034f,0.958217f,0.959385f,0.960536f,0.961672f,0.962792f,0.963896f,0.964985f,0.966057f,
0.967113f,0.968153f,0.969177f,0.970184f,0.971176f,0.972151f,0.973110f,0.974053f,0.974979f,0.975889f,
0.976783f,0.977660f,0.978521f,0.979365f,0.980193f,0.981004f,0.981798f,0.982576f,0.983337f,0.984081f,
0.984809f,0.985520f,0.986214f,0.986892f,0.987552f,0.988196f,0.988823f,0.989433f,0.990026f,0.990602f,
0.991161f,0.991703f,0.992229f,0.992737f,0.993228f,0.993702f,0.994159f,0.994599f,0.995021f,0.995427f,
0.995815f,0.996186f,0.996541f,0.996877f,0.997197f,0.997500f,0.997785f,0.998053f,0.998304f,0.998537f,
0.998754f,0.998953f,0.999134f,0.999299f,0.999446f,0.999576f,0.999688f,0.999784f,0.999861f,0.999922f,
0.999965f,0.999991f,1.000000f,0.999991f,0.999965f,0.999922f,0.999861f,0.999784f,0.999688f,0.999576f,
0.999446f,0.999299f,0.999134f,0.998953f,0.998754f,0.998537f,0.998304f,0.998053f,0.997785f,0.997500f,
0.997197f,0.996877f,0.996541f,0.996186f,0.995815f,0.995427f,0.995021f,0.994599f,0.994159f,0.993702f,
0.993228f,0.992737f,0.992229f,0.991703f,0.991161f,0.990602f,0.990026f,0.989433f,0.988823f,0.988196f,
0.987552f,0.986892f,0.986214f,0.985520f,0.984809f,0.984081f,0.983337f,0.982576f,0.981798f,0.981004f,
0.980193f,0.979365f,0.978521f,0.977660f,0.976783f,0.975889f,0.974979f,0.974053f,0.973110f,0.972151f,
0.971176f,0.970184f,0.969177f,0.968153f,0.967113f,0.966057f,0.964985f,0.963896f,0.962792f,0.961672f,
0.960536f,0.959385f,0.958217f,0.957034f,0.955835f,0.954620f,0.953390f,0.952145f,0.950883f,0.949606f,
0.948314f,0.947007f,0.945684f,0.944346f,0.942992f,0.941624f,0.940240f,0.938841f,0.937428f,0.935999f,
0.934555f,0.933097f,0.931623f,0.930135f,0.928633f,0.927115f,0.925583f,0.924037f,0.922476f,0.920901f,
0.919311f,0.917707f,0.916089f,0.914457f,0.912810f,0.911150f,0.909475f,0.907787f,0.906085f,0.904369f,
0.902639f,0.900896f,0.899139f,0.897369f,0.895585f,0.893788f,0.891977f,0.890153f,0.888316f,0.886466f,
0.884603f,0.882727f,0.880838f,0.878936f,0.877021f,0.875094f,0.873154f,0.871201f,0.869236f,0.867259f,
0.865269f,0.863267f,0.861253f,0.859227f,0.857189f,0.855138f,0.853076f,0.851003f,0.848917f,0.846820f,
0.844711f,0.842591f,0.840460f,0.838317f,0.836163f,0.833997f,0.831821f,0.829634f,0.827435f,0.825226f,
0.823007f,0.820776f,0.818535f,0.816284f,0.814022f,0.811749f,0.809467f,0.807174f,0.804872f,0.802559f,
0.800237f,0.797904f,0.795562f,0.793211f,0.790850f,0.788479f,0.786099f,0.783710f,0.781311f,0.778904f,
0.776487f,0.774062f,0.771628f,0.769185f,0.766733f,0.764273f,0.761805f,0.759328f,0.756842f,0.754349f,
0.751848f,0.749338f,0.746821f,0.744296f,0.741763f,0.739223f,0.736675f,0.734120f,0.731558f,0.728988f,
0.726411f,0.723827f,0.721236f,0.718639f,0.716034f,0.713423f,0.710806f,0.708182f,0.705552f,0.702915f,
0.700273f,0.697624f,0.694969f,0.692309f,0.689643f,0.686971f,0.684294f,0.681611f,0.678923f,0.676229f,
0.673531f,0.670827f,0.668119f,0.665406f,0.662688f,0.659965f,0.657238f,0.654507f,0.651771f,0.649031f,
0.646287f,0.643539f,0.640787f,0.638031f,0.635271f,0.632508f,0.629742f,0.626972f,0.624198f,0.621422f,
0.618642f,0.615860f,0.613075f,0.610287f,0.607496f,0.604703f,0.601907f,0.599109f,0.596309f,0.593507f,
0.590702f,0.587896f,0.585088f,0.582278f,0.579467f,0.576654f,0.573840f,0.571024f,0.568208f,0.565390f,
0.562571f,0.559752f,0.556931f,0.554110f,0.551289f,0.548467f,0.545645f,0.542822f,0.540000f,0.537178f,
0.534355f,0.531533f,0.528711f,0.525890f,0.523069f,0.520248f,0.517429f,0.514610f,0.511792f,0.508976f,
0.506160f,0.503346f,0.500533f,0.497722f,0.494912f,0.492104f,0.489298f,0.486493f,0.483691f,0.480891f,
0.478093f,0.475297f,0.472504f,0.469713f,0.466925f,0.464140f,0.461358f,0.458578f,0.455802f,0.453028f,
0.450258f,0.447492f,0.444729f,0.441969f,0.439213f,0.436461f,0.433713f,0.430969f,0.428229f,0.425493f,
0.422762f,0.420035f,0.417312f,0.414594f,0.411881f,0.409173f,0.406469f,0.403771f,0.401077f,0.398389f,
0.395706f,0.393029f,0.390357f,0.387691f,0.385031f,0.382376f,0.379727f,0.377085f,0.374448f,0.371818f,
0.369194f,0.366577f,0.363966f,0.361361f,0.358764f,0.356173f,0.353589f,0.351012f,0.348442f,0.345880f,
0.343325f,0.340777f,0.338237f,0.335704f,0.333179f,0.330662f,0.328152f,0.325651f,0.323157f,0.320672f,
0.318195f,0.315727f,0.313267f,0.310815f,0.308372f,0.305938f,0.303513f,0.301096f,0.298689f,0.296290f,
0.293901f,0.291521f,0.289151f,0.286789f,0.284438f,0.282096f,0.279763f,0.277441f,0.275128f,0.272826f,
0.270533f,0.268251f,0.265978f,0.263716f,0.261465f,0.259224f,0.256993f,0.254774f,0.252565f,0.250366f,
0.248179f,0.246003f,0.243837f,0.241683f,0.239540f,0.237409f,0.235289f,0.233180f,0.231083f,0.228997f,
0.226924f,0.224862f,0.222811f,0.220773f,0.218747f,0.216733f,0.214731f,0.212741f,0.210764f,0.208799f,
0.206846f,0.204906f,0.202979f,0.201064f,0.199162f,0.197273f,0.195397f,0.193534f,0.191684f,0.189847f,
0.188023f,0.186212f,0.184415f,0.182631f,0.180861f,0.179104f,0.177361f,0.175631f,0.173915f,0.172213f,
0.170525f,0.168850f,0.167190f,0.165543f,0.163911f,0.162293f,0.160689f,0.159099f,0.157524f,0.155963f,
0.154417f,0.152885f,0.151367f,0.149865f,0.148377f,0.146903f,0.145445f,0.144001f,0.142572f,0.141159f,
0.139760f,0.138376f,0.137008f,0.135654f,0.134316f,0.132993f,0.131686f,0.130394f,0.129117f,0.127856f,
0.126610f,0.125380f,0.124165f,0.122966f,0.121783f,0.120615f,0.119464f,0.118328f,0.117208f,0.116104f,
0.115015f,0.113943f,0.112887f,0.111847f,0.110823f,0.109816f,0.108824f,0.107849f,0.106890f,0.105947f,
0.105021f,0.104111f,0.103217f,0.102340f,0.101479f,0.100635f,0.099807f,0.098996f,0.098202f,0.097424f,
0.096663f,0.095919f,0.095191f,0.094480f,0.093786f,0.093108f,0.092448f,0.091804f,0.091177f,0.090567f,
0.089974f,0.089398f,0.088839f,0.088297f,0.087771f,0.087263f,0.086772f,0.086298f,0.085841f,0.085402f,
0.084979f,0.084573f,0.084185f,0.083814f,0.083459f,0.083123f,0.082803f,0.082500f,0.082215f,0.081947f,
0.081696f,0.081463f,0.081246f,0.081047f,0.080866f,0.080701f,0.080554f,0.080424f,0.080312f,0.080216f,
0.080139f,0.080078f,0.080035f,0.080009f,};



const float32_t mfcc_window_coefs_config2_f32[NB_MFCC_WIN_COEFS_CONFIG2_F32]={
0.080000f,0.080035f,0.080139f,0.080312f,0.080554f,0.080866f,0.081246f,0.081696f,0.082215f,0.082803f,
0.083459f,0.084185f,0.084979f,0.085841f,0.086772f,0.087771f,0.088839f,0.089974f,0.091177f,0.092448f,
0.093786f,0.095191f,0.096663f,0.098202f,0.099807f,0.101479f,0.103217f,0.105021f,0.106890f,0.108824f,
0.110823f,0.112887f,0.115015f,0.117208f,0.119464f,0.121783f,0.124165f,0.126610f,0.129117f,0.131686f,
0.134316f,0.137008f,0.139760f,0.142572f,0.145445f,0.148377f,0.151367f,0.154417f,0.157524f,0.160689f,
0.163911f,0.167190f,0.170525f,0.173915f,0.177361f,0.180861f,0.184415f,0.188023f,0.191684f,0.195397f,
0.199162f,0.202979f,0.206846f,0.210764f,0.214731f,0.218747f,0.222811f,0.226924f,0.231083f,0.235289f,
0.239540f,0.243837f,0.248179f,0.252565f,0.256993f,0.261465f,0.265978f,0.270533f,0.275128f,0.279763f,
0.284438f,0.289151f,0.293901f,0.298689f,0.303513f,0.308372f,0.313267f,0.318195f,0.323157f,0.328152f,
0.333179f,0.338237f,0.343325f,0.348442f,0.353589f,0.358764f,0.363966f,0.369194f,0.374448f,0.379727f,
0.385031f,0.390357f,0.395706f,0.401077f,0.406469f,0.411881f,0.417312f,0.422762f,0.428229f,0.433713f,
0.439213f,0.444729f,0.450258f,0.455802f,0.461358f,0.466925f,0.472504f,0.478093f,0.483691f,0.489298f,
0.494912f,0.500533f,0.506160f,0.511792f,0.517429f,0.523069f,0.528711f,0.534355f,0.540000f,0.545645f,
0.551289f,0.556931f,0.562571f,0.568208f,0.573840f,0.579467f,0.585088f,0.590702f,0.596309f,0.601907f,
0.607496f,0.613075f,0.618642f,0.624198f,0.629742f,0.635271f,0.640787f,0.646287f,0.651771f,0.657238f,
0.662688f,0.668119f,0.673531f,0.678923f,0.684294f,0.689643f,0.694969f,0.700273f,0.705552f,0.710806f,
0.716034f,0.721236f,0.726411f,0.731558f,0.736675f,0.741763f,0.746821f,0.751848f,0.756842f,0.761805f,
0.766733f,0.771628f,0.776487f,0.781311f,0.786099f,0.790850f,0.795562f,0.800237f,0.804872f,0.809467f,
0.814022f,0.818535f,0.823007f,0.827435f,0.831821f,0.836163f,0.840460f,0.844711f,0.848917f,0.853076f,
0.857189f,0.861253f,0.865269f,0.869236f,0.873154f,0.877021f,0.880838f,0.884603f,0.888316f,0.891977f,
0.895585f,0.899139f,0.902639f,0.906085f,0.909475f,0.912810f,0.916089f,0.919311f,0.922476f,0.925583f,
0.928633f,0.931623f,0.934555f,0.937428f,0.940240f,0.942992f,0.945684f,0.948314f,0.950883f,0.953390f,
0.955835f,0.958217f,0.960536f,0.962792f,0.964985f,0.967113f,0.969177f,0.971176f,0.973110f,0.974979f,
0.976783f,0.978521f,0.980193f,0.981798f,0.983337f,0.984809f,0.986214f,0.987552f,0.988823f,0.990026f,
0.991161f,0.992229f,0.993228f,0.994159f,0.995021f,0.995815f,0.996541f,0.997197f,0.997785f,0.998304f,
0.998754f,0.999134f,0.999446f,0.999688f,0.999861f,0.999965f,1.000000f,0.999965f,0.999861f,0.999688f,
0.999446f,0.999134f,0.998754f,0.998304f,0.997785f,0.997197f,0.996541f,0.995815f,0.995021f,0.994159f,
0.993228f,0.992229f,0.991161f,0.990026f,0.988823f,0.987552f,0.986214f,0.984809f,0.983337f,0.981798f,
0.980193f,0.978521f,0.976783f,0.974979f,0.973110f,0.971176f,0.969177f,0.967113f,0.964985f,0.962792f,
0.960536f,0.958217f,0.955835f,0.953390f,0.950883f,0.948314f,0.945684f,0.942992f,0.940240f,0.937428f,
0.934555f,0.931623f,0.928633f,0.925583f,0.922476f,0.919311f,0.916089f,0.912810f,0.909475f,0.906085f,
0.902639f,0.899139f,0.895585f,0.891977f,0.888316f,0.884603f,0.880838f,0.877021f,0.873154f,0.869236f,
0.865269f,0.861253f,0.857189f,0.853076f,0.848917f,0.844711f,0.840460f,0.836163f,0.831821f,0.827435f,
0.823007f,0.818535f,0.814022f,0.809467f,0.804872f,0.800237f,0.795562f,0.790850f,0.786099f,0.781311f,
0.776487f,0.771628f,0.766733f,0.761805f,0.756842f,0.751848f,0.746821f,0.741763f,0.736675f,0.731558f,
0.726411f,0.721236f,0.716034f,0.710806f,0.705552f,0.700273f,0.694969f,0.689643f,0.684294f,0.678923f,
0.673531f,0.668119f,0.662688f,0.657238f,0.651771f,0.646287f,0.640787f,0.635271f,0.629742f,0.624198f,
0.618642f,0.613075f,0.607496f,0.601907f,0.596309f,0.590702f,0.585088f,0.579467f,0.573840f,0.568208f,
0.562571f,0.556931f,0.551289f,0.545645f,0.540000f,0.534355f,0.528711f,0.523069f,0.517429f,0.511792f,
0.506160f,0.500533f,0.494912f,0.489298f,0.483691f,0.478093f,0.472504f,0.466925f,0.461358f,0.455802f,
0.450258f,0.444729f,0.439213f,0.433713f,0.428229f,0.422762f,0.417312f,0.411881f,0.406469f,0.401077f,
0.395706f,0.390357f,0.385031f,0.379727f,0.374448f,0.369194f,0.363966f,0.358764f,0.353589f,0.348442f,
0.343325f,0.338237f,0.333179f,0.328152f,0.323157f,0.318195f,0.313267f,0.308372f,0.303513f,0.298689f,
0.293901f,0.289151f,0.284438f,0.279763f,0.275128f,0.270533f,0.265978f,0.261465f,0.256993f,0.252565f,
0.248179f,0.243837f,0.239540f,0.235289f,0.231083f,0.226924f,0.222811f,0.218747f,0.214731f,0.210764f,
0.206846f,0.202979f,0.199162f,0.195397f,0.191684f,0.188023f,0.184415f,0.180861f,0.177361f,0.173915f,
0.170525f,0.167190f,0.163911f,0.160689f,0.157524f,0.154417f,0.151367f,0.148377f,0.145445f,0.142572f,
0.139760f,0.137008f,0.134316f,0.131686f,0.129117f,0.126610f,0.124165f,0.121783f,0.119464f,0.117208f,
0.115015f,0.112887f,0.110823f,0.108824f,0.106890f,0.105021f,0.103217f,0.101479f,0.099807f,0.098202f,
0.096663f,0.095191f,0.093786f,0.092448f,0.091177f,0.089974f,0.088839f,0.087771f,0.086772f,0.085841f,
0.084979f,0.084185f,0.083459f,0.082803f,0.082215f,0.081696f,0.081246f,0.080866f,0.080554f,0.080312f,
0.080139f,0.080035f,};



const float32_t mfcc_window_coefs_config3_f32[NB_MFCC_WIN_COEFS_CONFIG3_F32]={
0.080000f,0.080139f,0.080554f,0.081246f,0.082215f,0.083459f,0.084979f,0.086772f,0.088839f,0.091177f,
0.093786f,0.096663f,0.099807f,0.103217f,0.106890f,0.110823f,0.115015f,0.119464f,0.124165f,0.129117f,
0.134316f,0.139760f,0.145445f,0.151367f,0.157524f,0.163911f,0.170525f,0.177361f,0.184415f,0.191684f,
0.199162f,0.206846f,0.214731f,0.222811f,0.231083f,0.239540f,0.248179f,0.256993f,0.265978f,0.275128f,
0.284438f,0.293901f,0.303513f,0.313267f,0.323157f,0.333179f,0.343325f,0.353589f,0.363966f,0.374448f,
0.385031f,0.395706f,0.406469f,0.417312f,0.428229f,0.439213f,0.450258f,0.461358f,0.472504f,0.483691f,
0.494912f,0.506160f,0.517429f,0.528711f,0.540000f,0.551289f,0.562571f,0.573840f,0.585088f,0.596309f,
0.607496f,0.618642f,0.629742f,0.640787f,0.651771f,0.662688f,0.673531f,0.684294f,0.694969f,0.705552f,
0.716034f,0.726411f,0.736675f,0.746821f,0.756842f,0.766733f,0.776487f,0.786099f,0.795562f,0.804872f,
0.814022f,0.823007f,0.831821f,0.840460f,0.848917f,0.857189f,0.865269f,0.873154f,0.880838f,0.888316f,
0.895585f,0.902639f,0.909475f,0.916089f,0.922476f,0.928633f,0.934555f,0.940240f,0.945684f,0.950883f,
0.955835f,0.960536f,0.964985f,0.969177f,0.973110f,0.976783f,0.980193f,0.983337f,0.986214f,0.988823f,
0.991161f,0.993228f,0.995021f,0.996541f,0.997785f,0.998754f,0.999446f,0.999861f,1.000000f,0.999861f,
0.999446f,0.998754f,0.997785f,0.996541f,0.995021f,0.993228f,0.991161f,0.988823f,0.986214f,0.983337f,
0.980193f,0.976783f,0.973110f,0.969177f,0.964985f,0.960536f,0.955835f,0.950883f,0.945684f,0.940240f,
0.934555f,0.928633f,0.922476f,0.916089f,0.909475f,0.902639f,0.895585f,0.888316f,0.880838f,0.873154f,
0.865269f,0.857189f,0.848917f,0.840460f,0.831821f,0.823007f,0.814022f,0.804872f,0.795562f,0.786099f,
0.776487f,0.766733f,0.756842f,0.746821f,0.736675f,0.726411f,0.716034f,0.705552f,0.694969f,0.684294f,
0.673531f,0.662688f,0.651771f,0.640787f,0.629742f,0.618642f,0.607496f,0.596309f,0.585088f,0.573840f,
0.562571f,0.551289f,0.540000f,0.528711f,0.517429f,0.506160f,0.494912f,0.483691f,0.472504f,0.461358f,
0.450258f,0.439213f,0.428229f,0.417312f,0.406469f,0.395706f,0.385031f,0.374448f,0.363966f,0.353589f,
0.343325f,0.333179f,0.323157f,0.313267f,0.303513f,0.293901f,0.284438f,0.275128f,0.265978f,0.256993f,
0.248179f,0.239540f,0.231083f,0.222811f,0.214731f,0.206846f,0.199162f,0.191684f,0.184415f,0.177361f,
0.170525f,0.163911f,0.157524f,0.151367f,0.145445f,0.139760f,0.134316f,0.129117f,0.124165f,0.119464f,
0.115015f,0.110823f,0.106890f,0.103217f,0.099807f,0.096663f,0.093786f,0.091177f,0.088839f,0.086772f,
0.084979f,0.083459f,0.082215f,0.081246f,0.080554f,0.080139f,};



const uint32_t mfcc_filter_pos_config1_f32[NB_MFCC_NB_FILTER_CONFIG1_F32]={
5,11,17,25,33,43,54,66,79,94,
111,131,152,176,203,234,268,306,349,397,
};
const uint32_t mfcc_filter_len_config1_f32[NB_MFCC_NB_FILTER_CONFIG1_F32]={
12,14,16,18,21,23,25,28,32,37,
41,45,51,58,65,72,81,91,103,115,
};

const uint32_t mfcc_filter_pos_config2_f32[NB_MFCC_NB_FILTER_CONFIG2_F32]={
3,6,9,13,17,22,27,33,40,47,
56,66,76,88,102,117,134,153,175,199,
};
const uint32_t mfcc_filter_len_config2_f32[NB_MFCC_NB_FILTER_CONFIG2_F32]={
6,7,8,9,10,11,13,14,16,19,
20,22,26,29,32,36,41,46,51,57,
};

const uint32_t mfcc_filter_pos_config3_f32[NB_MFCC_NB_FILTER_CONFIG3_F32]={
2,3,5,7,9,11,14,17,20,24,
28,33,38,44,51,59,67,77,88,100,
};
const uint32_t mfcc_filter_len_config3_f32[NB_MFCC_NB_FILTER_CONFIG3_F32]={
3,4,4,4,5,6,6,7,8,9,
10,11,13,15,16,18,21,23,25,28,
};




const float32_t mfcc_filter_coefs_config1_f32[NB_MFCC_FILTER_COEFS_CONFIG1_F32]={
0.158152f,0.329789f,0.498080f,0.663153f,0.825129f,0.984122f,0.859761f,0.706417f,0.555749f,0.407665f,
0.262079f,0.118907f,0.140239f,0.293583f,0.444251f,0.592335f,0.737921f,0.881093f,0.978071f,0.839496f,
0.703110f,0.568845f,0.436636f,0.306422f,0.178142f,0.051741f,0.021929f,0.160504f,0.296890f,0.431155f,
0.563364f,0.693578f,0.821858f,0.948259f,0.927164f,0.804358f,0.683276f,0.563868f,0.446089f,0.329895f,
0.215245f,0.102097f,0.072836f,0.195642f,0.316724f,0.436132f,0.553911f,0.670105f,0.784755f,0.897903f,
0.990413f,0.880155f,0.771288f,0.663777f,0.557588f,0.452689f,0.349050f,0.246640f,0.145430f,0.045394f,
0.009587f,0.119845f,0.228712f,0.336223f,0.442412f,0.547311f,0.650950f,0.753360f,0.854570f,0.954606f,
0.946503f,0.848733f,0.752057f,0.656452f,0.561894f,0.468360f,0.375829f,0.284280f,0.193690f,0.104042f,
0.015315f,0.053497f,0.151267f,0.247943f,0.343548f,0.438106f,0.531640f,0.624171f,0.715720f,0.806310f,
0.895958f,0.984685f,0.927491f,0.840551f,0.754478f,0.669255f,0.584864f,0.501291f,0.418519f,0.336533f,
0.255318f,0.174861f,0.095146f,0.016160f,0.072509f,0.159449f,0.245522f,0.330745f,0.415136f,0.498709f,
0.581481f,0.663467f,0.744682f,0.825139f,0.904854f,0.983840f,0.937891f,0.860325f,0.783449f,0.707252f,
0.631722f,0.556847f,0.482615f,0.409017f,0.336040f,0.263676f,0.191913f,0.120741f,0.050152f,0.062109f,
0.139675f,0.216551f,0.292748f,0.368278f,0.443153f,0.517385f,0.590983f,0.663960f,0.736324f,0.808087f,
0.879259f,0.949848f,0.980135f,0.910681f,0.841781f,0.773427f,0.705610f,0.638322f,0.571554f,0.505298f,
0.439548f,0.374294f,0.309529f,0.245247f,0.181440f,0.118101f,0.055223f,0.019865f,0.089319f,0.158219f,
0.226573f,0.294390f,0.361678f,0.428446f,0.494702f,0.560452f,0.625706f,0.690471f,0.754753f,0.818560f,
0.881899f,0.944777f,0.992800f,0.930826f,0.869293f,0.808195f,0.747527f,0.687282f,0.627454f,0.568039f,
0.509029f,0.450420f,0.392207f,0.334383f,0.276944f,0.219885f,0.163200f,0.106885f,0.050935f,0.007200f,
0.069174f,0.130707f,0.191805f,0.252473f,0.312718f,0.372546f,0.431961f,0.490971f,0.549580f,0.607793f,
0.665617f,0.723056f,0.780115f,0.836800f,0.893115f,0.949065f,0.995345f,0.940111f,0.885228f,0.830692f,
0.776498f,0.722642f,0.669120f,0.615928f,0.563062f,0.510517f,0.458290f,0.406378f,0.354775f,0.303479f,
0.252487f,0.201793f,0.151396f,0.101291f,0.051475f,0.001945f,0.004655f,0.059889f,0.114772f,0.169308f,
0.223502f,0.277358f,0.330880f,0.384072f,0.436938f,0.489483f,0.541710f,0.593622f,0.645225f,0.696521f,
0.747513f,0.798207f,0.848604f,0.898709f,0.948525f,0.998055f,0.952698f,0.903729f,0.855038f,0.806619f,
0.758470f,0.710588f,0.662971f,0.615614f,0.568516f,0.521674f,0.475084f,0.428744f,0.382652f,0.336804f,
0.291199f,0.245834f,0.200705f,0.155811f,0.111150f,0.066718f,0.022514f,0.047302f,0.096271f,0.144962f,
0.193381f,0.241530f,0.289412f,0.337029f,0.384386f,0.431484f,0.478326f,0.524916f,0.571256f,0.617348f,
0.663196f,0.708801f,0.754166f,0.799295f,0.844189f,0.888850f,0.933282f,0.977486f,0.978535f,0.934779f,
0.891243f,0.847926f,0.804826f,0.761939f,0.719265f,0.676800f,0.634543f,0.592492f,0.550645f,0.508999f,
0.467554f,0.426307f,0.385255f,0.344399f,0.303734f,0.263260f,0.222975f,0.182877f,0.142965f,0.103236f,
0.063689f,0.024323f,0.021465f,0.065221f,0.108757f,0.152074f,0.195174f,0.238061f,0.280735f,0.323200f,
0.365457f,0.407508f,0.449355f,0.491001f,0.532446f,0.573693f,0.614745f,0.655601f,0.696266f,0.736740f,
0.777025f,0.817123f,0.857035f,0.896764f,0.936311f,0.975677f,0.985135f,0.946124f,0.907289f,0.868628f,
0.830139f,0.791821f,0.753672f,0.715691f,0.677876f,0.640227f,0.602740f,0.565416f,0.528253f,0.491249f,
0.454402f,0.417713f,0.381178f,0.344798f,0.308570f,0.272494f,0.236568f,0.200790f,0.165161f,0.129678f,
0.094340f,0.059146f,0.024095f,0.014865f,0.053876f,0.092711f,0.131372f,0.169861f,0.208179f,0.246328f,
0.284309f,0.322124f,0.359773f,0.397260f,0.434584f,0.471747f,0.508751f,0.545597f,0.582287f,0.618822f,
0.655202f,0.691430f,0.727506f,0.763432f,0.799210f,0.834839f,0.870322f,0.905660f,0.940854f,0.975905f,
0.989185f,0.954417f,0.919787f,0.885297f,0.850943f,0.816725f,0.782643f,0.748695f,0.714879f,0.681196f,
0.647643f,0.614221f,0.580927f,0.547761f,0.514722f,0.481809f,0.449021f,0.416357f,0.383817f,0.351398f,
0.319101f,0.286924f,0.254866f,0.222928f,0.191107f,0.159402f,0.127814f,0.096341f,0.064982f,0.033737f,
0.002604f,0.010815f,0.045583f,0.080213f,0.114703f,0.149057f,0.183275f,0.217357f,0.251305f,0.285121f,
0.318804f,0.352357f,0.385779f,0.419073f,0.452239f,0.485278f,0.518191f,0.550979f,0.583643f,0.616183f,
0.648602f,0.680899f,0.713076f,0.745134f,0.777072f,0.808893f,0.840598f,0.872186f,0.903659f,0.935018f,
0.966263f,0.997396f,0.971584f,0.940674f,0.909875f,0.879185f,0.848604f,0.818130f,0.787764f,0.757505f,
0.727351f,0.697302f,0.667357f,0.637516f,0.607777f,0.578141f,0.548606f,0.519172f,0.489838f,0.460603f,
0.431467f,0.402428f,0.373487f,0.344643f,0.315895f,0.287242f,0.258684f,0.230221f,0.201850f,0.173573f,
0.145388f,0.117295f,0.089293f,0.061381f,0.033559f,0.005827f,0.028416f,0.059326f,0.090125f,0.120815f,
0.151396f,0.181870f,0.212236f,0.242495f,0.272649f,0.302698f,0.332643f,0.362484f,0.392223f,0.421859f,
0.451394f,0.480828f,0.510162f,0.539397f,0.568533f,0.597572f,0.626513f,0.655357f,0.684105f,0.712758f,
0.741315f,0.769779f,0.798150f,0.826427f,0.854612f,0.882705f,0.910707f,0.938619f,0.966441f,0.994173f,
0.978184f,0.950628f,0.923161f,0.895780f,0.868486f,0.841279f,0.814156f,0.787119f,0.760166f,0.733296f,
0.706511f,0.679808f,0.653187f,0.626648f,0.600191f,0.573814f,0.547518f,0.521302f,0.495165f,0.469106f,
0.443127f,0.417225f,0.391401f,0.365653f,0.339983f,0.314388f,0.288869f,0.263425f,0.238056f,0.212762f,
0.187541f,0.162394f,0.137319f,0.112318f,0.087388f,0.062531f,0.037744f,0.013029f,0.021816f,0.049372f,
0.076839f,0.104220f,0.131514f,0.158721f,0.185844f,0.212881f,0.239834f,0.266704f,0.293489f,0.320192f,
0.346813f,0.373352f,0.399809f,0.426186f,0.452482f,0.478698f,0.504835f,0.530894f,0.556873f,0.582775f,
0.608599f,0.634347f,0.660017f,0.685612f,0.711131f,0.736575f,0.761944f,0.787238f,0.812459f,0.837606f,
0.862681f,0.887682f,0.912612f,0.937469f,0.962256f,0.986971f,0.988384f,0.963810f,0.939305f,0.914869f,
0.890503f,0.866205f,0.841975f,0.817813f,0.793719f,0.769691f,0.745730f,0.721836f,0.698008f,0.674245f,
0.650547f,0.626914f,0.603346f,0.579842f,0.556401f,0.533025f,0.509711f,0.486460f,0.463272f,0.440145f,
0.417081f,0.394078f,0.371136f,0.348254f,0.325434f,0.302673f,0.279973f,0.257332f,0.234750f,0.212227f,
0.189762f,0.167356f,0.145008f,0.122718f,0.100485f,0.078309f,0.056190f,0.034127f,0.012121f,0.011616f,
0.036190f,0.060695f,0.085131f,0.109497f,0.133795f,0.158025f,0.182187f,0.206281f,0.230309f,0.254270f,
0.278164f,0.301992f,0.325755f,0.349453f,0.373086f,0.396654f,0.420158f,0.443599f,0.466975f,0.490289f,
0.513540f,0.536728f,0.559855f,0.582919f,0.605922f,0.628864f,0.651745f,0.674566f,0.697327f,0.720027f,
0.742669f,0.765250f,0.787773f,0.810238f,0.832644f,0.854992f,0.877282f,0.899515f,0.921691f,0.943810f,
0.965873f,0.987879f,0.990171f,0.968276f,0.946437f,0.924653f,0.902923f,0.881249f,0.859628f,0.838062f,
0.816549f,0.795090f,0.773684f,0.752330f,0.731030f,0.709782f,0.688586f,0.667442f,0.646350f,0.625309f,
0.604320f,0.583381f,0.562493f,0.541655f,0.520867f,0.500130f,0.479442f,0.458803f,0.438214f,0.417674f,
0.397182f,0.376740f,0.356345f,0.335998f,0.315700f,0.295448f,0.275245f,0.255088f,0.234978f,0.214916f,
0.194899f,0.174929f,0.155005f,0.135127f,0.115295f,0.095508f,0.075766f,0.056069f,0.036417f,0.016810f,
0.009829f,0.031724f,0.053563f,0.075347f,0.097077f,0.118751f,0.140372f,0.161938f,0.183451f,0.204910f,
0.226316f,0.247670f,0.268970f,0.290218f,0.311414f,0.332558f,0.353650f,0.374691f,0.395680f,0.416619f,
0.437507f,0.458345f,0.479133f,0.499870f,0.520558f,0.541197f,0.561786f,0.582326f,0.602817f,0.623260f,
0.643655f,0.664002f,0.684300f,0.704552f,0.724755f,0.744912f,0.765022f,0.785084f,0.805101f,0.825071f,
0.844995f,0.864873f,0.884705f,0.904492f,0.924234f,0.943931f,0.963583f,0.983190f,0.997247f,0.977729f,
0.958254f,0.938824f,0.919437f,0.900093f,0.880792f,0.861535f,0.842321f,0.823149f,0.804020f,0.784933f,
0.765888f,0.746885f,0.727923f,0.709004f,0.690125f,0.671288f,0.652492f,0.633737f,0.615022f,0.596348f,
0.577714f,0.559120f,0.540567f,0.522053f,0.503578f,0.485144f,0.466748f,0.448391f,0.430074f,0.411795f,
0.393555f,0.375353f,0.357190f,0.339065f,0.320977f,0.302928f,0.284916f,0.266942f,0.249005f,0.231105f,
0.213242f,0.195416f,0.177627f,0.159875f,0.142159f,0.124479f,0.106835f,0.089227f,0.071656f,0.054119f,
0.036619f,0.019154f,0.001724f,0.002753f,0.022271f,0.041746f,0.061176f,0.080564f,0.099907f,0.119208f,
0.138465f,0.157679f,0.176851f,0.195980f,0.215067f,0.234112f,0.253115f,0.272077f,0.290996f,0.309875f,
0.328712f,0.347508f,0.366263f,0.384978f,0.403652f,0.422286f,0.440880f,0.459433f,0.477947f,0.496422f,
0.514856f,0.533252f,0.551609f,0.569926f,0.588205f,0.606445f,0.624647f,0.642810f,0.660935f,0.679023f,
0.697072f,0.715084f,0.733058f,0.750995f,0.768895f,0.786758f,0.804583f,0.822373f,0.840125f,0.857841f,
0.875521f,0.893165f,0.910773f,0.928344f,0.945881f,0.963381f,0.980846f,0.998276f,0.984329f,0.966969f,
0.949644f,0.932354f,0.915098f,0.897877f,0.880689f,0.863537f,0.846418f,0.829333f,0.812281f,0.795264f,
0.778279f,0.761329f,0.744411f,0.727526f,0.710675f,0.693856f,0.677070f,0.660317f,0.643596f,0.626907f,
0.610251f,0.593626f,0.577034f,0.560473f,0.543944f,0.527447f,0.510981f,0.494546f,0.478143f,0.461771f,
0.445430f,0.429119f,0.412840f,0.396591f,0.380372f,0.364184f,0.348027f,0.331899f,0.315802f,0.299734f,
0.283697f,0.267689f,0.251710f,0.235762f,0.219842f,0.203952f,0.188091f,0.172260f,0.156457f,0.140683f,
0.124938f,0.109221f,0.093533f,0.077874f,0.062243f,0.046640f,0.031065f,0.015519f,};



const float32_t mfcc_filter_coefs_config2_f32[NB_MFCC_FILTER_COEFS_CONFIG2_F32]={
0.329789f,0.663153f,0.984122f,0.706417f,0.407665f,0.118907f,0.293583f,0.592335f,0.881093f,0.839496f,
0.568845f,0.306422f,0.051741f,0.160504f,0.431155f,0.693578f,0.948259f,0.804358f,0.563868f,0.329895f,
0.102097f,0.195642f,0.436132f,0.670105f,0.897903f,0.880155f,0.663777f,0.452689f,0.246640f,0.045394f,
0.119845f,0.336223f,0.547311f,0.753360f,0.954606f,0.848733f,0.656452f,0.468360f,0.284280f,0.104042f,
0.151267f,0.343548f,0.531640f,0.715720f,0.895958f,0.927491f,0.754478f,0.584864f,0.418519f,0.255318f,
0.095146f,0.072509f,0.245522f,0.415136f,0.581481f,0.744682f,0.904854f,0.937891f,0.783449f,0.631722f,
0.482615f,0.336040f,0.191913f,0.050152f,0.062109f,0.216551f,0.368278f,0.517385f,0.663960f,0.808087f,
0.949848f,0.910681f,0.773427f,0.638322f,0.505298f,0.374294f,0.245247f,0.118101f,0.089319f,0.226573f,
0.361678f,0.494702f,0.625706f,0.754753f,0.881899f,0.992800f,0.869293f,0.747527f,0.627454f,0.509029f,
0.392207f,0.276944f,0.163200f,0.050935f,0.007200f,0.130707f,0.252473f,0.372546f,0.490971f,0.607793f,
0.723056f,0.836800f,0.949065f,0.940111f,0.830692f,0.722642f,0.615928f,0.510517f,0.406378f,0.303479f,
0.201793f,0.101291f,0.001945f,0.059889f,0.169308f,0.277358f,0.384072f,0.489483f,0.593622f,0.696521f,
0.798207f,0.898709f,0.998055f,0.903729f,0.806619f,0.710588f,0.615614f,0.521674f,0.428744f,0.336804f,
0.245834f,0.155811f,0.066718f,0.096271f,0.193381f,0.289412f,0.384386f,0.478326f,0.571256f,0.663196f,
0.754166f,0.844189f,0.933282f,0.978535f,0.891243f,0.804826f,0.719265f,0.634543f,0.550645f,0.467554f,
0.385255f,0.303734f,0.222975f,0.142965f,0.063689f,0.021465f,0.108757f,0.195174f,0.280735f,0.365457f,
0.449355f,0.532446f,0.614745f,0.696266f,0.777025f,0.857035f,0.936311f,0.985135f,0.907289f,0.830139f,
0.753672f,0.677876f,0.602740f,0.528253f,0.454402f,0.381178f,0.308570f,0.236568f,0.165161f,0.094340f,
0.024095f,0.014865f,0.092711f,0.169861f,0.246328f,0.322124f,0.397260f,0.471747f,0.545597f,0.618822f,
0.691430f,0.763432f,0.834839f,0.905660f,0.975905f,0.954417f,0.885297f,0.816725f,0.748695f,0.681196f,
0.614221f,0.547761f,0.481809f,0.416357f,0.351398f,0.286924f,0.222928f,0.159402f,0.096341f,0.033737f,
0.045583f,0.114703f,0.183275f,0.251305f,0.318804f,0.385779f,0.452239f,0.518191f,0.583643f,0.648602f,
0.713076f,0.777072f,0.840598f,0.903659f,0.966263f,0.971584f,0.909875f,0.848604f,0.787764f,0.727351f,
0.667357f,0.607777f,0.548606f,0.489838f,0.431467f,0.373487f,0.315895f,0.258684f,0.201850f,0.145388f,
0.089293f,0.033559f,0.028416f,0.090125f,0.151396f,0.212236f,0.272649f,0.332643f,0.392223f,0.451394f,
0.510162f,0.568533f,0.626513f,0.684105f,0.741315f,0.798150f,0.854612f,0.910707f,0.966441f,0.978184f,
0.923161f,0.868486f,0.814156f,0.760166f,0.706511f,0.653187f,0.600191f,0.547518f,0.495165f,0.443127f,
0.391401f,0.339983f,0.288869f,0.238056f,0.187541f,0.137319f,0.087388f,0.037744f,0.021816f,0.076839f,
0.131514f,0.185844f,0.239834f,0.293489f,0.346813f,0.399809f,0.452482f,0.504835f,0.556873f,0.608599f,
0.660017f,0.711131f,0.761944f,0.812459f,0.862681f,0.912612f,0.962256f,0.988384f,0.939305f,0.890503f,
0.841975f,0.793719f,0.745730f,0.698008f,0.650547f,0.603346f,0.556401f,0.509711f,0.463272f,0.417081f,
0.371136f,0.325434f,0.279973f,0.234750f,0.189762f,0.145008f,0.100485f,0.056190f,0.012121f,0.011616f,
0.060695f,0.109497f,0.158025f,0.206281f,0.254270f,0.301992f,0.349453f,0.396654f,0.443599f,0.490289f,
0.536728f,0.582919f,0.628864f,0.674566f,0.720027f,0.765250f,0.810238f,0.854992f,0.899515f,0.943810f,
0.987879f,0.968276f,0.924653f,0.881249f,0.838062f,0.795090f,0.752330f,0.709782f,0.667442f,0.625309f,
0.583381f,0.541655f,0.500130f,0.458803f,0.417674f,0.376740f,0.335998f,0.295448f,0.255088f,0.214916f,
0.174929f,0.135127f,0.095508f,0.056069f,0.016810f,0.031724f,0.075347f,0.118751f,0.161938f,0.204910f,
0.247670f,0.290218f,0.332558f,0.374691f,0.416619f,0.458345f,0.499870f,0.541197f,0.582326f,0.623260f,
0.664002f,0.704552f,0.744912f,0.785084f,0.825071f,0.864873f,0.904492f,0.943931f,0.983190f,0.977729f,
0.938824f,0.900093f,0.861535f,0.823149f,0.784933f,0.746885f,0.709004f,0.671288f,0.633737f,0.596348f,
0.559120f,0.522053f,0.485144f,0.448391f,0.411795f,0.375353f,0.339065f,0.302928f,0.266942f,0.231105f,
0.195416f,0.159875f,0.124479f,0.089227f,0.054119f,0.019154f,0.022271f,0.061176f,0.099907f,0.138465f,
0.176851f,0.215067f,0.253115f,0.290996f,0.328712f,0.366263f,0.403652f,0.440880f,0.477947f,0.514856f,
0.551609f,0.588205f,0.624647f,0.660935f,0.697072f,0.733058f,0.768895f,0.804583f,0.840125f,0.875521f,
0.910773f,0.945881f,0.980846f,0.984329f,0.949644f,0.915098f,0.880689f,0.846418f,0.812281f,0.778279f,
0.744411f,0.710675f,0.677070f,0.643596f,0.610251f,0.577034f,0.543944f,0.510981f,0.478143f,0.445430f,
0.412840f,0.380372f,0.348027f,0.315802f,0.283697f,0.251710f,0.219842f,0.188091f,0.156457f,0.124938f,
0.093533f,0.062243f,0.031065f,};



const float32_t mfcc_filter_coefs_config3_f32[NB_MFCC_FILTER_COEFS_CONFIG3_F32]={
0.663153f,0.706417f,0.118907f,0.293583f,0.881093f,0.568845f,0.051741f,0.431155f,0.948259f,0.563868f,
0.102097f,0.436132f,0.897903f,0.663777f,0.246640f,0.336223f,0.753360f,0.848733f,0.468360f,0.104042f,
0.151267f,0.531640f,0.895958f,0.754478f,0.418519f,0.095146f,0.245522f,0.581481f,0.904854f,0.783449f,
0.482615f,0.191913f,0.216551f,0.517385f,0.808087f,0.910681f,0.638322f,0.374294f,0.118101f,0.089319f,
0.361678f,0.625706f,0.881899f,0.869293f,0.627454f,0.392207f,0.163200f,0.130707f,0.372546f,0.607793f,
0.836800f,0.940111f,0.722642f,0.510517f,0.303479f,0.101291f,0.059889f,0.277358f,0.489483f,0.696521f,
0.898709f,0.903729f,0.710588f,0.521674f,0.336804f,0.155811f,0.096271f,0.289412f,0.478326f,0.663196f,
0.844189f,0.978535f,0.804826f,0.634543f,0.467554f,0.303734f,0.142965f,0.021465f,0.195174f,0.365457f,
0.532446f,0.696266f,0.857035f,0.985135f,0.830139f,0.677876f,0.528253f,0.381178f,0.236568f,0.094340f,
0.014865f,0.169861f,0.322124f,0.471747f,0.618822f,0.763432f,0.905660f,0.954417f,0.816725f,0.681196f,
0.547761f,0.416357f,0.286924f,0.159402f,0.033737f,0.045583f,0.183275f,0.318804f,0.452239f,0.583643f,
0.713076f,0.840598f,0.966263f,0.909875f,0.787764f,0.667357f,0.548606f,0.431467f,0.315895f,0.201850f,
0.089293f,0.090125f,0.212236f,0.332643f,0.451394f,0.568533f,0.684105f,0.798150f,0.910707f,0.978184f,
0.868486f,0.760166f,0.653187f,0.547518f,0.443127f,0.339983f,0.238056f,0.137319f,0.037744f,0.021816f,
0.131514f,0.239834f,0.346813f,0.452482f,0.556873f,0.660017f,0.761944f,0.862681f,0.962256f,0.939305f,
0.841975f,0.745730f,0.650547f,0.556401f,0.463272f,0.371136f,0.279973f,0.189762f,0.100485f,0.012121f,
0.060695f,0.158025f,0.254270f,0.349453f,0.443599f,0.536728f,0.628864f,0.720027f,0.810238f,0.899515f,
0.987879f,0.924653f,0.838062f,0.752330f,0.667442f,0.583381f,0.500130f,0.417674f,0.335998f,0.255088f,
0.174929f,0.095508f,0.016810f,0.075347f,0.161938f,0.247670f,0.332558f,0.416619f,0.499870f,0.582326f,
0.664002f,0.744912f,0.825071f,0.904492f,0.983190f,0.938824f,0.861535f,0.784933f,0.709004f,0.633737f,
0.559120f,0.485144f,0.411795f,0.339065f,0.266942f,0.195416f,0.124479f,0.054119f,0.061176f,0.138465f,
0.215067f,0.290996f,0.366263f,0.440880f,0.514856f,0.588205f,0.660935f,0.733058f,0.804583f,0.875521f,
0.945881f,0.984329f,0.915098f,0.846418f,0.778279f,0.710675f,0.643596f,0.577034f,0.510981f,0.445430f,
0.380372f,0.315802f,0.251710f,0.188091f,0.124938f,0.062243f,};



