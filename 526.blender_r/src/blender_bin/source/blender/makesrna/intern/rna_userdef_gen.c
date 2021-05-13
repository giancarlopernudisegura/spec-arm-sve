
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */
#if defined(SPEC)
#include <spec_config.h>
#endif

#define RNA_RUNTIME

#include <float.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

#include <stddef.h>

#include "MEM_guardedalloc.h"

#include "DNA_ID.h"
#include "DNA_scene_types.h"
#include "BLI_blenlib.h"

#include "BLI_utildefines.h"

#include "BKE_context.h"
#include "BKE_library.h"
#include "BKE_main.h"
#include "BKE_report.h"
#include "RNA_define.h"
#include "RNA_types.h"
#include "rna_internal.h"

extern StructRNA RNA_Struct;
extern StructRNA RNA_Property;
extern StructRNA RNA_BoolProperty;
extern StructRNA RNA_IntProperty;
extern StructRNA RNA_FloatProperty;
extern StructRNA RNA_StringProperty;
extern StructRNA RNA_EnumProperty;
extern StructRNA RNA_EnumPropertyItem;
extern StructRNA RNA_PointerProperty;
extern StructRNA RNA_CollectionProperty;
extern StructRNA RNA_Function;
extern StructRNA RNA_BlenderRNA;
extern StructRNA RNA_UnknownType;
extern StructRNA RNA_AnyType;
extern StructRNA RNA_ID;
extern StructRNA RNA_PropertyGroupItem;
extern StructRNA RNA_PropertyGroup;
extern StructRNA RNA_IDMaterials;
extern StructRNA RNA_Library;
extern StructRNA RNA_Texture;
extern StructRNA RNA_CloudsTexture;
extern StructRNA RNA_WoodTexture;
extern StructRNA RNA_MarbleTexture;
extern StructRNA RNA_MagicTexture;
extern StructRNA RNA_BlendTexture;
extern StructRNA RNA_StucciTexture;
extern StructRNA RNA_NoiseTexture;
extern StructRNA RNA_ImageTexture;
extern StructRNA RNA_EnvironmentMapTexture;
extern StructRNA RNA_MusgraveTexture;
extern StructRNA RNA_VoronoiTexture;
extern StructRNA RNA_DistortedNoiseTexture;
extern StructRNA RNA_PointDensity;
extern StructRNA RNA_PointDensityTexture;
extern StructRNA RNA_VoxelData;
extern StructRNA RNA_VoxelDataTexture;
extern StructRNA RNA_OceanTexData;
extern StructRNA RNA_OceanTexture;
extern StructRNA RNA_TextureSlot;
extern StructRNA RNA_EnvironmentMap;
extern StructRNA RNA_TexMapping;
extern StructRNA RNA_ColorMapping;
extern StructRNA RNA_Action;
extern StructRNA RNA_ActionFCurves;
extern StructRNA RNA_ActionGroups;
extern StructRNA RNA_ActionPoseMarkers;
extern StructRNA RNA_ActionGroup;
extern StructRNA RNA_DopeSheet;
extern StructRNA RNA_AnimData;
extern StructRNA RNA_NlaTracks;
extern StructRNA RNA_AnimDataDrivers;
extern StructRNA RNA_KeyingSet;
extern StructRNA RNA_KeyingSetPaths;
extern StructRNA RNA_KeyingSetPath;
extern StructRNA RNA_KeyingSetInfo;
extern StructRNA RNA_AnimViz;
extern StructRNA RNA_AnimVizOnionSkinning;
extern StructRNA RNA_AnimVizMotionPaths;
extern StructRNA RNA_MotionPath;
extern StructRNA RNA_MotionPathVert;
extern StructRNA RNA_Actuator;
extern StructRNA RNA_ActionActuator;
extern StructRNA RNA_ObjectActuator;
extern StructRNA RNA_CameraActuator;
extern StructRNA RNA_SoundActuator;
extern StructRNA RNA_PropertyActuator;
extern StructRNA RNA_ConstraintActuator;
extern StructRNA RNA_EditObjectActuator;
extern StructRNA RNA_SceneActuator;
extern StructRNA RNA_RandomActuator;
extern StructRNA RNA_MessageActuator;
extern StructRNA RNA_GameActuator;
extern StructRNA RNA_VisibilityActuator;
extern StructRNA RNA_Filter2DActuator;
extern StructRNA RNA_ParentActuator;
extern StructRNA RNA_StateActuator;
extern StructRNA RNA_ArmatureActuator;
extern StructRNA RNA_SteeringActuator;
extern StructRNA RNA_MouseActuator;
extern StructRNA RNA_Armature;
extern StructRNA RNA_ArmatureBones;
extern StructRNA RNA_ArmatureEditBones;
extern StructRNA RNA_Bone;
extern StructRNA RNA_EditBone;
extern StructRNA RNA_BoidRule;
extern StructRNA RNA_BoidRuleGoal;
extern StructRNA RNA_BoidRuleAvoid;
extern StructRNA RNA_BoidRuleAvoidCollision;
extern StructRNA RNA_BoidRuleFollowLeader;
extern StructRNA RNA_BoidRuleAverageSpeed;
extern StructRNA RNA_BoidRuleFight;
extern StructRNA RNA_BoidState;
extern StructRNA RNA_BoidSettings;
extern StructRNA RNA_Brush;
extern StructRNA RNA_BrushCapabilities;
extern StructRNA RNA_SculptToolCapabilities;
extern StructRNA RNA_ImapaintToolCapabilities;
extern StructRNA RNA_BrushTextureSlot;
extern StructRNA RNA_OperatorStrokeElement;
extern StructRNA RNA_Camera;
extern StructRNA RNA_ClothSettings;
extern StructRNA RNA_ClothCollisionSettings;
extern StructRNA RNA_CurveMapPoint;
extern StructRNA RNA_CurveMap;
extern StructRNA RNA_CurveMapPoints;
extern StructRNA RNA_CurveMapping;
extern StructRNA RNA_ColorRampElement;
extern StructRNA RNA_ColorRamp;
extern StructRNA RNA_ColorRampElements;
extern StructRNA RNA_Histogram;
extern StructRNA RNA_Scopes;
extern StructRNA RNA_ColorManagedDisplaySettings;
extern StructRNA RNA_ColorManagedViewSettings;
extern StructRNA RNA_ColorManagedInputColorspaceSettings;
extern StructRNA RNA_ColorManagedSequencerColorspaceSettings;
extern StructRNA RNA_Constraint;
extern StructRNA RNA_ConstraintTarget;
extern StructRNA RNA_ChildOfConstraint;
extern StructRNA RNA_PythonConstraint;
extern StructRNA RNA_StretchToConstraint;
extern StructRNA RNA_FollowPathConstraint;
extern StructRNA RNA_LockedTrackConstraint;
extern StructRNA RNA_ActionConstraint;
extern StructRNA RNA_CopyScaleConstraint;
extern StructRNA RNA_MaintainVolumeConstraint;
extern StructRNA RNA_CopyLocationConstraint;
extern StructRNA RNA_CopyRotationConstraint;
extern StructRNA RNA_CopyTransformsConstraint;
extern StructRNA RNA_FloorConstraint;
extern StructRNA RNA_TrackToConstraint;
extern StructRNA RNA_KinematicConstraint;
extern StructRNA RNA_RigidBodyJointConstraint;
extern StructRNA RNA_ClampToConstraint;
extern StructRNA RNA_LimitDistanceConstraint;
extern StructRNA RNA_LimitScaleConstraint;
extern StructRNA RNA_LimitRotationConstraint;
extern StructRNA RNA_LimitLocationConstraint;
extern StructRNA RNA_TransformConstraint;
extern StructRNA RNA_ShrinkwrapConstraint;
extern StructRNA RNA_DampedTrackConstraint;
extern StructRNA RNA_SplineIKConstraint;
extern StructRNA RNA_PivotConstraint;
extern StructRNA RNA_FollowTrackConstraint;
extern StructRNA RNA_CameraSolverConstraint;
extern StructRNA RNA_ObjectSolverConstraint;
extern StructRNA RNA_Context;
extern StructRNA RNA_Controller;
extern StructRNA RNA_ExpressionController;
extern StructRNA RNA_PythonController;
extern StructRNA RNA_AndController;
extern StructRNA RNA_OrController;
extern StructRNA RNA_NorController;
extern StructRNA RNA_NandController;
extern StructRNA RNA_XorController;
extern StructRNA RNA_XnorController;
extern StructRNA RNA_Curve;
extern StructRNA RNA_CurveSplines;
extern StructRNA RNA_SurfaceCurve;
extern StructRNA RNA_TextCurve;
extern StructRNA RNA_TextBox;
extern StructRNA RNA_TextCharacterFormat;
extern StructRNA RNA_SplinePoint;
extern StructRNA RNA_BezierSplinePoint;
extern StructRNA RNA_Spline;
extern StructRNA RNA_SplinePoints;
extern StructRNA RNA_SplineBezierPoints;
extern StructRNA RNA_DynamicPaintCanvasSettings;
extern StructRNA RNA_DynamicPaintSurfaces;
extern StructRNA RNA_DynamicPaintBrushSettings;
extern StructRNA RNA_DynamicPaintSurface;
extern StructRNA RNA_FCurve;
extern StructRNA RNA_FCurveKeyframePoints;
extern StructRNA RNA_FCurveModifiers;
extern StructRNA RNA_Keyframe;
extern StructRNA RNA_FCurveSample;
extern StructRNA RNA_DriverTarget;
extern StructRNA RNA_DriverVariable;
extern StructRNA RNA_Driver;
extern StructRNA RNA_ChannelDriverVariables;
extern StructRNA RNA_FModifier;
extern StructRNA RNA_FModifierGenerator;
extern StructRNA RNA_FModifierFunctionGenerator;
extern StructRNA RNA_FModifierEnvelope;
extern StructRNA RNA_FModifierEnvelopeControlPoints;
extern StructRNA RNA_FModifierEnvelopeControlPoint;
extern StructRNA RNA_FModifierCycles;
extern StructRNA RNA_FModifierPython;
extern StructRNA RNA_FModifierLimits;
extern StructRNA RNA_FModifierNoise;
extern StructRNA RNA_FModifierStepped;
extern StructRNA RNA_FluidSettings;
extern StructRNA RNA_DomainFluidSettings;
extern StructRNA RNA_FluidMeshVertex;
extern StructRNA RNA_FluidFluidSettings;
extern StructRNA RNA_ObstacleFluidSettings;
extern StructRNA RNA_InflowFluidSettings;
extern StructRNA RNA_OutflowFluidSettings;
extern StructRNA RNA_ParticleFluidSettings;
extern StructRNA RNA_ControlFluidSettings;
extern StructRNA RNA_GreasePencil;
extern StructRNA RNA_GreasePencilLayers;
extern StructRNA RNA_GPencilLayer;
extern StructRNA RNA_GPencilFrames;
extern StructRNA RNA_GPencilFrame;
extern StructRNA RNA_GPencilStrokes;
extern StructRNA RNA_GPencilStroke;
extern StructRNA RNA_GPencilStrokePoints;
extern StructRNA RNA_GPencilStrokePoint;
extern StructRNA RNA_Group;
extern StructRNA RNA_GroupObjects;
extern StructRNA RNA_RenderSlot;
extern StructRNA RNA_RenderSlots;
extern StructRNA RNA_Image;
extern StructRNA RNA_ImageUser;
extern StructRNA RNA_Key;
extern StructRNA RNA_ShapeKey;
extern StructRNA RNA_ShapeKeyPoint;
extern StructRNA RNA_ShapeKeyCurvePoint;
extern StructRNA RNA_ShapeKeyBezierPoint;
extern StructRNA RNA_Lamp;
extern StructRNA RNA_LampTextureSlots;
extern StructRNA RNA_PointLamp;
extern StructRNA RNA_AreaLamp;
extern StructRNA RNA_SpotLamp;
extern StructRNA RNA_SunLamp;
extern StructRNA RNA_LampSkySettings;
extern StructRNA RNA_HemiLamp;
extern StructRNA RNA_LampTextureSlot;
extern StructRNA RNA_Lattice;
extern StructRNA RNA_LatticePoint;
extern StructRNA RNA_LineStyleModifier;
extern StructRNA RNA_LineStyleColorModifier;
extern StructRNA RNA_LineStyleColorModifier_AlongStroke;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleColorModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleColorModifier_Material;
extern StructRNA RNA_LineStyleAlphaModifier;
extern StructRNA RNA_LineStyleAlphaModifier_AlongStroke;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleAlphaModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleAlphaModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier;
extern StructRNA RNA_LineStyleThicknessModifier_AlongStroke;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromCamera;
extern StructRNA RNA_LineStyleThicknessModifier_DistanceFromObject;
extern StructRNA RNA_LineStyleThicknessModifier_Material;
extern StructRNA RNA_LineStyleThicknessModifier_Calligraphy;
extern StructRNA RNA_LineStyleGeometryModifier;
extern StructRNA RNA_LineStyleGeometryModifier_Sampling;
extern StructRNA RNA_LineStyleGeometryModifier_BezierCurve;
extern StructRNA RNA_LineStyleGeometryModifier_SinusDisplacement;
extern StructRNA RNA_LineStyleGeometryModifier_SpatialNoise;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise1D;
extern StructRNA RNA_LineStyleGeometryModifier_PerlinNoise2D;
extern StructRNA RNA_LineStyleGeometryModifier_BackboneStretcher;
extern StructRNA RNA_LineStyleGeometryModifier_TipRemover;
extern StructRNA RNA_LineStyleGeometryModifier_Polygonalization;
extern StructRNA RNA_LineStyleGeometryModifier_GuidingLines;
extern StructRNA RNA_LineStyleGeometryModifier_Blueprint;
extern StructRNA RNA_LineStyleGeometryModifier_2DOffset;
extern StructRNA RNA_LineStyleGeometryModifier_2DTransform;
extern StructRNA RNA_FreestyleLineStyle;
extern StructRNA RNA_LineStyleTextureSlots;
extern StructRNA RNA_LineStyleColorModifiers;
extern StructRNA RNA_LineStyleAlphaModifiers;
extern StructRNA RNA_LineStyleThicknessModifiers;
extern StructRNA RNA_LineStyleGeometryModifiers;
extern StructRNA RNA_LineStyleTextureSlot;
extern StructRNA RNA_BlendData;
extern StructRNA RNA_BlendDataCameras;
extern StructRNA RNA_BlendDataScenes;
extern StructRNA RNA_BlendDataObjects;
extern StructRNA RNA_BlendDataMaterials;
extern StructRNA RNA_BlendDataNodeTrees;
extern StructRNA RNA_BlendDataMeshes;
extern StructRNA RNA_BlendDataLamps;
extern StructRNA RNA_BlendDataLibraries;
extern StructRNA RNA_BlendDataScreens;
extern StructRNA RNA_BlendDataWindowManagers;
extern StructRNA RNA_BlendDataImages;
extern StructRNA RNA_BlendDataLattices;
extern StructRNA RNA_BlendDataCurves;
extern StructRNA RNA_BlendDataMetaBalls;
extern StructRNA RNA_BlendDataFonts;
extern StructRNA RNA_BlendDataTextures;
extern StructRNA RNA_BlendDataBrushes;
extern StructRNA RNA_BlendDataWorlds;
extern StructRNA RNA_BlendDataGroups;
extern StructRNA RNA_BlendDataTexts;
extern StructRNA RNA_BlendDataSpeakers;
extern StructRNA RNA_BlendDataSounds;
extern StructRNA RNA_BlendDataArmatures;
extern StructRNA RNA_BlendDataActions;
extern StructRNA RNA_BlendDataParticles;
extern StructRNA RNA_BlendDataGreasePencils;
extern StructRNA RNA_BlendDataMovieClips;
extern StructRNA RNA_BlendDataMasks;
extern StructRNA RNA_BlendDataLineStyles;
extern StructRNA RNA_Material;
extern StructRNA RNA_MaterialTextureSlots;
extern StructRNA RNA_TexPaintSlot;
extern StructRNA RNA_MaterialRaytraceMirror;
extern StructRNA RNA_MaterialRaytraceTransparency;
extern StructRNA RNA_MaterialVolume;
extern StructRNA RNA_MaterialHalo;
extern StructRNA RNA_MaterialSubsurfaceScattering;
extern StructRNA RNA_MaterialTextureSlot;
extern StructRNA RNA_MaterialStrand;
extern StructRNA RNA_MaterialPhysics;
extern StructRNA RNA_MaterialGameSettings;
extern StructRNA RNA_Mesh;
extern StructRNA RNA_MeshVertices;
extern StructRNA RNA_MeshEdges;
extern StructRNA RNA_MeshTessFaces;
extern StructRNA RNA_MeshLoops;
extern StructRNA RNA_MeshPolygons;
extern StructRNA RNA_UVLoopLayers;
extern StructRNA RNA_TessfaceUVTextures;
extern StructRNA RNA_UVTextures;
extern StructRNA RNA_VertexColors;
extern StructRNA RNA_LoopColors;
extern StructRNA RNA_FloatProperties;
extern StructRNA RNA_IntProperties;
extern StructRNA RNA_StringProperties;
extern StructRNA RNA_MeshSkinVertexLayer;
extern StructRNA RNA_MeshSkinVertex;
extern StructRNA RNA_MeshVertex;
extern StructRNA RNA_VertexGroupElement;
extern StructRNA RNA_MeshEdge;
extern StructRNA RNA_MeshTessFace;
extern StructRNA RNA_MeshLoop;
extern StructRNA RNA_MeshPolygon;
extern StructRNA RNA_MeshUVLoopLayer;
extern StructRNA RNA_MeshUVLoop;
extern StructRNA RNA_MeshTextureFaceLayer;
extern StructRNA RNA_MeshTextureFace;
extern StructRNA RNA_MeshTexturePolyLayer;
extern StructRNA RNA_MeshTexturePoly;
extern StructRNA RNA_MeshColorLayer;
extern StructRNA RNA_MeshColor;
extern StructRNA RNA_MeshLoopColorLayer;
extern StructRNA RNA_MeshLoopColor;
extern StructRNA RNA_MeshFloatPropertyLayer;
extern StructRNA RNA_MeshFloatProperty;
extern StructRNA RNA_MeshIntPropertyLayer;
extern StructRNA RNA_MeshIntProperty;
extern StructRNA RNA_MeshStringPropertyLayer;
extern StructRNA RNA_MeshStringProperty;
extern StructRNA RNA_MetaElement;
extern StructRNA RNA_MetaBall;
extern StructRNA RNA_MetaBallElements;
extern StructRNA RNA_Modifier;
extern StructRNA RNA_SubsurfModifier;
extern StructRNA RNA_LatticeModifier;
extern StructRNA RNA_CurveModifier;
extern StructRNA RNA_BuildModifier;
extern StructRNA RNA_MirrorModifier;
extern StructRNA RNA_DecimateModifier;
extern StructRNA RNA_WaveModifier;
extern StructRNA RNA_ArmatureModifier;
extern StructRNA RNA_HookModifier;
extern StructRNA RNA_SoftBodyModifier;
extern StructRNA RNA_BooleanModifier;
extern StructRNA RNA_ArrayModifier;
extern StructRNA RNA_EdgeSplitModifier;
extern StructRNA RNA_DisplaceModifier;
extern StructRNA RNA_UVProjectModifier;
extern StructRNA RNA_UVProjector;
extern StructRNA RNA_SmoothModifier;
extern StructRNA RNA_CastModifier;
extern StructRNA RNA_MeshDeformModifier;
extern StructRNA RNA_ParticleSystemModifier;
extern StructRNA RNA_ParticleInstanceModifier;
extern StructRNA RNA_ExplodeModifier;
extern StructRNA RNA_ClothModifier;
extern StructRNA RNA_CollisionModifier;
extern StructRNA RNA_BevelModifier;
extern StructRNA RNA_ShrinkwrapModifier;
extern StructRNA RNA_FluidSimulationModifier;
extern StructRNA RNA_MaskModifier;
extern StructRNA RNA_SimpleDeformModifier;
extern StructRNA RNA_WarpModifier;
extern StructRNA RNA_MultiresModifier;
extern StructRNA RNA_SurfaceModifier;
extern StructRNA RNA_SmokeModifier;
extern StructRNA RNA_SolidifyModifier;
extern StructRNA RNA_ScrewModifier;
extern StructRNA RNA_UVWarpModifier;
extern StructRNA RNA_VertexWeightEditModifier;
extern StructRNA RNA_VertexWeightMixModifier;
extern StructRNA RNA_VertexWeightProximityModifier;
extern StructRNA RNA_DynamicPaintModifier;
extern StructRNA RNA_OceanModifier;
extern StructRNA RNA_RemeshModifier;
extern StructRNA RNA_SkinModifier;
extern StructRNA RNA_LaplacianSmoothModifier;
extern StructRNA RNA_TriangulateModifier;
extern StructRNA RNA_MeshCacheModifier;
extern StructRNA RNA_LaplacianDeformModifier;
extern StructRNA RNA_WireframeModifier;
extern StructRNA RNA_NlaTrack;
extern StructRNA RNA_NlaStrips;
extern StructRNA RNA_NlaStrip;
extern StructRNA RNA_NodeSocket;
extern StructRNA RNA_NodeSocketInterface;
extern StructRNA RNA_Node;
extern StructRNA RNA_NodeInputs;
extern StructRNA RNA_NodeOutputs;
extern StructRNA RNA_NodeLink;
extern StructRNA RNA_NodeInternalSocketTemplate;
extern StructRNA RNA_NodeInternal;
extern StructRNA RNA_ShaderNode;
extern StructRNA RNA_CompositorNode;
extern StructRNA RNA_TextureNode;
extern StructRNA RNA_NodeTree;
extern StructRNA RNA_Nodes;
extern StructRNA RNA_NodeLinks;
extern StructRNA RNA_NodeTreeInputs;
extern StructRNA RNA_NodeTreeOutputs;
extern StructRNA RNA_NodeSocketStandard;
extern StructRNA RNA_NodeSocketInterfaceStandard;
extern StructRNA RNA_NodeSocketFloat;
extern StructRNA RNA_NodeSocketInterfaceFloat;
extern StructRNA RNA_NodeSocketFloatUnsigned;
extern StructRNA RNA_NodeSocketInterfaceFloatUnsigned;
extern StructRNA RNA_NodeSocketFloatPercentage;
extern StructRNA RNA_NodeSocketInterfaceFloatPercentage;
extern StructRNA RNA_NodeSocketFloatFactor;
extern StructRNA RNA_NodeSocketInterfaceFloatFactor;
extern StructRNA RNA_NodeSocketFloatAngle;
extern StructRNA RNA_NodeSocketInterfaceFloatAngle;
extern StructRNA RNA_NodeSocketFloatTime;
extern StructRNA RNA_NodeSocketInterfaceFloatTime;
extern StructRNA RNA_NodeSocketInt;
extern StructRNA RNA_NodeSocketInterfaceInt;
extern StructRNA RNA_NodeSocketIntUnsigned;
extern StructRNA RNA_NodeSocketInterfaceIntUnsigned;
extern StructRNA RNA_NodeSocketIntPercentage;
extern StructRNA RNA_NodeSocketInterfaceIntPercentage;
extern StructRNA RNA_NodeSocketIntFactor;
extern StructRNA RNA_NodeSocketInterfaceIntFactor;
extern StructRNA RNA_NodeSocketBool;
extern StructRNA RNA_NodeSocketInterfaceBool;
extern StructRNA RNA_NodeSocketVector;
extern StructRNA RNA_NodeSocketInterfaceVector;
extern StructRNA RNA_NodeSocketVectorTranslation;
extern StructRNA RNA_NodeSocketInterfaceVectorTranslation;
extern StructRNA RNA_NodeSocketVectorDirection;
extern StructRNA RNA_NodeSocketInterfaceVectorDirection;
extern StructRNA RNA_NodeSocketVectorVelocity;
extern StructRNA RNA_NodeSocketInterfaceVectorVelocity;
extern StructRNA RNA_NodeSocketVectorAcceleration;
extern StructRNA RNA_NodeSocketInterfaceVectorAcceleration;
extern StructRNA RNA_NodeSocketVectorEuler;
extern StructRNA RNA_NodeSocketInterfaceVectorEuler;
extern StructRNA RNA_NodeSocketVectorXYZ;
extern StructRNA RNA_NodeSocketInterfaceVectorXYZ;
extern StructRNA RNA_NodeSocketColor;
extern StructRNA RNA_NodeSocketInterfaceColor;
extern StructRNA RNA_NodeSocketString;
extern StructRNA RNA_NodeSocketInterfaceString;
extern StructRNA RNA_NodeSocketShader;
extern StructRNA RNA_NodeSocketInterfaceShader;
extern StructRNA RNA_NodeSocketVirtual;
extern StructRNA RNA_CompositorNodeTree;
extern StructRNA RNA_ShaderNodeTree;
extern StructRNA RNA_TextureNodeTree;
extern StructRNA RNA_NodeFrame;
extern StructRNA RNA_NodeGroup;
extern StructRNA RNA_NodeGroupInput;
extern StructRNA RNA_NodeGroupOutput;
extern StructRNA RNA_NodeReroute;
extern StructRNA RNA_ShaderNodeOutput;
extern StructRNA RNA_ShaderNodeMaterial;
extern StructRNA RNA_ShaderNodeRGB;
extern StructRNA RNA_ShaderNodeValue;
extern StructRNA RNA_ShaderNodeMixRGB;
extern StructRNA RNA_ShaderNodeValToRGB;
extern StructRNA RNA_ShaderNodeRGBToBW;
extern StructRNA RNA_ShaderNodeTexture;
extern StructRNA RNA_ShaderNodeNormal;
extern StructRNA RNA_ShaderNodeGamma;
extern StructRNA RNA_ShaderNodeBrightContrast;
extern StructRNA RNA_ShaderNodeGeometry;
extern StructRNA RNA_ShaderNodeMapping;
extern StructRNA RNA_ShaderNodeVectorCurve;
extern StructRNA RNA_ShaderNodeRGBCurve;
extern StructRNA RNA_ShaderNodeCameraData;
extern StructRNA RNA_ShaderNodeLampData;
extern StructRNA RNA_ShaderNodeMath;
extern StructRNA RNA_ShaderNodeVectorMath;
extern StructRNA RNA_ShaderNodeSqueeze;
extern StructRNA RNA_ShaderNodeExtendedMaterial;
extern StructRNA RNA_ShaderNodeInvert;
extern StructRNA RNA_ShaderNodeSeparateRGB;
extern StructRNA RNA_ShaderNodeCombineRGB;
extern StructRNA RNA_ShaderNodeHueSaturation;
extern StructRNA RNA_ShaderNodeOutputMaterial;
extern StructRNA RNA_ShaderNodeOutputLamp;
extern StructRNA RNA_ShaderNodeOutputWorld;
extern StructRNA RNA_ShaderNodeOutputLineStyle;
extern StructRNA RNA_ShaderNodeFresnel;
extern StructRNA RNA_ShaderNodeLayerWeight;
extern StructRNA RNA_ShaderNodeMixShader;
extern StructRNA RNA_ShaderNodeAddShader;
extern StructRNA RNA_ShaderNodeAttribute;
extern StructRNA RNA_ShaderNodeAmbientOcclusion;
extern StructRNA RNA_ShaderNodeBackground;
extern StructRNA RNA_ShaderNodeHoldout;
extern StructRNA RNA_ShaderNodeBsdfAnisotropic;
extern StructRNA RNA_ShaderNodeBsdfDiffuse;
extern StructRNA RNA_ShaderNodeBsdfGlossy;
extern StructRNA RNA_ShaderNodeBsdfGlass;
extern StructRNA RNA_ShaderNodeBsdfRefraction;
extern StructRNA RNA_ShaderNodeBsdfTranslucent;
extern StructRNA RNA_ShaderNodeBsdfTransparent;
extern StructRNA RNA_ShaderNodeBsdfVelvet;
extern StructRNA RNA_ShaderNodeBsdfToon;
extern StructRNA RNA_ShaderNodeBsdfHair;
extern StructRNA RNA_ShaderNodeSubsurfaceScattering;
extern StructRNA RNA_ShaderNodeVolumeAbsorption;
extern StructRNA RNA_ShaderNodeVolumeScatter;
extern StructRNA RNA_ShaderNodeEmission;
extern StructRNA RNA_ShaderNodeNewGeometry;
extern StructRNA RNA_ShaderNodeLightPath;
extern StructRNA RNA_ShaderNodeLightFalloff;
extern StructRNA RNA_ShaderNodeObjectInfo;
extern StructRNA RNA_ShaderNodeParticleInfo;
extern StructRNA RNA_ShaderNodeHairInfo;
extern StructRNA RNA_ShaderNodeWireframe;
extern StructRNA RNA_ShaderNodeWavelength;
extern StructRNA RNA_ShaderNodeBlackbody;
extern StructRNA RNA_ShaderNodeBump;
extern StructRNA RNA_ShaderNodeNormalMap;
extern StructRNA RNA_ShaderNodeTangent;
extern StructRNA RNA_ShaderNodeScript;
extern StructRNA RNA_ShaderNodeTexImage;
extern StructRNA RNA_ShaderNodeTexEnvironment;
extern StructRNA RNA_ShaderNodeTexSky;
extern StructRNA RNA_ShaderNodeTexGradient;
extern StructRNA RNA_ShaderNodeTexNoise;
extern StructRNA RNA_ShaderNodeTexMagic;
extern StructRNA RNA_ShaderNodeTexWave;
extern StructRNA RNA_ShaderNodeTexMusgrave;
extern StructRNA RNA_ShaderNodeTexVoronoi;
extern StructRNA RNA_ShaderNodeTexChecker;
extern StructRNA RNA_ShaderNodeTexBrick;
extern StructRNA RNA_ShaderNodeTexCoord;
extern StructRNA RNA_ShaderNodeVectorTransform;
extern StructRNA RNA_ShaderNodeSeparateHSV;
extern StructRNA RNA_ShaderNodeCombineHSV;
extern StructRNA RNA_ShaderNodeUVMap;
extern StructRNA RNA_ShaderNodeUVAlongStroke;
extern StructRNA RNA_ShaderNodeSeparateXYZ;
extern StructRNA RNA_ShaderNodeCombineXYZ;
extern StructRNA RNA_CompositorNodeViewer;
extern StructRNA RNA_CompositorNodeRGB;
extern StructRNA RNA_CompositorNodeValue;
extern StructRNA RNA_CompositorNodeMixRGB;
extern StructRNA RNA_CompositorNodeValToRGB;
extern StructRNA RNA_CompositorNodeRGBToBW;
extern StructRNA RNA_CompositorNodeNormal;
extern StructRNA RNA_CompositorNodeCurveVec;
extern StructRNA RNA_CompositorNodeCurveRGB;
extern StructRNA RNA_CompositorNodeAlphaOver;
extern StructRNA RNA_CompositorNodeBlur;
extern StructRNA RNA_CompositorNodeFilter;
extern StructRNA RNA_CompositorNodeMapValue;
extern StructRNA RNA_CompositorNodeMapRange;
extern StructRNA RNA_CompositorNodeTime;
extern StructRNA RNA_CompositorNodeVecBlur;
extern StructRNA RNA_CompositorNodeSepRGBA;
extern StructRNA RNA_CompositorNodeSepHSVA;
extern StructRNA RNA_CompositorNodeSetAlpha;
extern StructRNA RNA_CompositorNodeHueSat;
extern StructRNA RNA_CompositorNodeImage;
extern StructRNA RNA_CompositorNodeRLayers;
extern StructRNA RNA_CompositorNodeComposite;
extern StructRNA RNA_CompositorNodeOutputFile;
extern StructRNA RNA_CompositorNodeOutputFileFileSlots;
extern StructRNA RNA_CompositorNodeOutputFileLayerSlots;
extern StructRNA RNA_CompositorNodeTexture;
extern StructRNA RNA_CompositorNodeTranslate;
extern StructRNA RNA_CompositorNodeZcombine;
extern StructRNA RNA_CompositorNodeCombRGBA;
extern StructRNA RNA_CompositorNodeDilateErode;
extern StructRNA RNA_CompositorNodeInpaint;
extern StructRNA RNA_CompositorNodeDespeckle;
extern StructRNA RNA_CompositorNodeRotate;
extern StructRNA RNA_CompositorNodeScale;
extern StructRNA RNA_CompositorNodeSepYCCA;
extern StructRNA RNA_CompositorNodeCombYCCA;
extern StructRNA RNA_CompositorNodeSepYUVA;
extern StructRNA RNA_CompositorNodeCombYUVA;
extern StructRNA RNA_CompositorNodeDiffMatte;
extern StructRNA RNA_CompositorNodeColorSpill;
extern StructRNA RNA_CompositorNodeChromaMatte;
extern StructRNA RNA_CompositorNodeChannelMatte;
extern StructRNA RNA_CompositorNodeFlip;
extern StructRNA RNA_CompositorNodeSplitViewer;
extern StructRNA RNA_CompositorNodeMapUV;
extern StructRNA RNA_CompositorNodeIDMask;
extern StructRNA RNA_CompositorNodeDoubleEdgeMask;
extern StructRNA RNA_CompositorNodeDefocus;
extern StructRNA RNA_CompositorNodeDisplace;
extern StructRNA RNA_CompositorNodeCombHSVA;
extern StructRNA RNA_CompositorNodeMath;
extern StructRNA RNA_CompositorNodeLumaMatte;
extern StructRNA RNA_CompositorNodeBrightContrast;
extern StructRNA RNA_CompositorNodeGamma;
extern StructRNA RNA_CompositorNodeInvert;
extern StructRNA RNA_CompositorNodeNormalize;
extern StructRNA RNA_CompositorNodeCrop;
extern StructRNA RNA_CompositorNodeDBlur;
extern StructRNA RNA_CompositorNodeBilateralblur;
extern StructRNA RNA_CompositorNodePremulKey;
extern StructRNA RNA_CompositorNodeGlare;
extern StructRNA RNA_CompositorNodeTonemap;
extern StructRNA RNA_CompositorNodeLensdist;
extern StructRNA RNA_CompositorNodeLevels;
extern StructRNA RNA_CompositorNodeColorMatte;
extern StructRNA RNA_CompositorNodeDistanceMatte;
extern StructRNA RNA_CompositorNodeColorBalance;
extern StructRNA RNA_CompositorNodeHueCorrect;
extern StructRNA RNA_CompositorNodeMovieClip;
extern StructRNA RNA_CompositorNodeTransform;
extern StructRNA RNA_CompositorNodeStabilize;
extern StructRNA RNA_CompositorNodeMovieDistortion;
extern StructRNA RNA_CompositorNodeBoxMask;
extern StructRNA RNA_CompositorNodeEllipseMask;
extern StructRNA RNA_CompositorNodeBokehImage;
extern StructRNA RNA_CompositorNodeBokehBlur;
extern StructRNA RNA_CompositorNodeSwitch;
extern StructRNA RNA_CompositorNodeColorCorrection;
extern StructRNA RNA_CompositorNodeMask;
extern StructRNA RNA_CompositorNodeKeyingScreen;
extern StructRNA RNA_CompositorNodeKeying;
extern StructRNA RNA_CompositorNodeTrackPos;
extern StructRNA RNA_CompositorNodePixelate;
extern StructRNA RNA_CompositorNodePlaneTrackDeform;
extern StructRNA RNA_CompositorNodeCornerPin;
extern StructRNA RNA_CompositorNodeSunBeams;
extern StructRNA RNA_TextureNodeOutput;
extern StructRNA RNA_TextureNodeChecker;
extern StructRNA RNA_TextureNodeTexture;
extern StructRNA RNA_TextureNodeBricks;
extern StructRNA RNA_TextureNodeMath;
extern StructRNA RNA_TextureNodeMixRGB;
extern StructRNA RNA_TextureNodeRGBToBW;
extern StructRNA RNA_TextureNodeValToRGB;
extern StructRNA RNA_TextureNodeImage;
extern StructRNA RNA_TextureNodeCurveRGB;
extern StructRNA RNA_TextureNodeInvert;
extern StructRNA RNA_TextureNodeHueSaturation;
extern StructRNA RNA_TextureNodeCurveTime;
extern StructRNA RNA_TextureNodeRotate;
extern StructRNA RNA_TextureNodeViewer;
extern StructRNA RNA_TextureNodeTranslate;
extern StructRNA RNA_TextureNodeCoordinates;
extern StructRNA RNA_TextureNodeDistance;
extern StructRNA RNA_TextureNodeCompose;
extern StructRNA RNA_TextureNodeDecompose;
extern StructRNA RNA_TextureNodeValToNor;
extern StructRNA RNA_TextureNodeScale;
extern StructRNA RNA_TextureNodeAt;
extern StructRNA RNA_TextureNodeTexVoronoi;
extern StructRNA RNA_TextureNodeTexBlend;
extern StructRNA RNA_TextureNodeTexMagic;
extern StructRNA RNA_TextureNodeTexMarble;
extern StructRNA RNA_TextureNodeTexClouds;
extern StructRNA RNA_TextureNodeTexWood;
extern StructRNA RNA_TextureNodeTexMusgrave;
extern StructRNA RNA_TextureNodeTexNoise;
extern StructRNA RNA_TextureNodeTexStucci;
extern StructRNA RNA_TextureNodeTexDistNoise;
extern StructRNA RNA_ShaderNodeGroup;
extern StructRNA RNA_CompositorNodeGroup;
extern StructRNA RNA_TextureNodeGroup;
extern StructRNA RNA_NodeCustomGroup;
extern StructRNA RNA_NodeOutputFileSlotFile;
extern StructRNA RNA_NodeOutputFileSlotLayer;
extern StructRNA RNA_NodeInstanceHash;
extern StructRNA RNA_Object;
extern StructRNA RNA_ObjectModifiers;
extern StructRNA RNA_ObjectConstraints;
extern StructRNA RNA_VertexGroups;
extern StructRNA RNA_ParticleSystems;
extern StructRNA RNA_GameObjectSettings;
extern StructRNA RNA_ObjectBase;
extern StructRNA RNA_VertexGroup;
extern StructRNA RNA_MaterialSlot;
extern StructRNA RNA_DupliObject;
extern StructRNA RNA_LodLevel;
extern StructRNA RNA_PointCache;
extern StructRNA RNA_PointCaches;
extern StructRNA RNA_CollisionSettings;
extern StructRNA RNA_EffectorWeights;
extern StructRNA RNA_FieldSettings;
extern StructRNA RNA_GameSoftBodySettings;
extern StructRNA RNA_SoftBodySettings;
extern StructRNA RNA_PackedFile;
extern StructRNA RNA_ParticleTarget;
extern StructRNA RNA_SPHFluidSettings;
extern StructRNA RNA_ParticleHairKey;
extern StructRNA RNA_ParticleKey;
extern StructRNA RNA_ChildParticle;
extern StructRNA RNA_Particle;
extern StructRNA RNA_ParticleDupliWeight;
extern StructRNA RNA_ParticleSystem;
extern StructRNA RNA_ParticleSettingsTextureSlot;
extern StructRNA RNA_ParticleSettings;
extern StructRNA RNA_ParticleSettingsTextureSlots;
extern StructRNA RNA_Pose;
extern StructRNA RNA_BoneGroups;
extern StructRNA RNA_PoseBone;
extern StructRNA RNA_PoseBoneConstraints;
extern StructRNA RNA_IKParam;
extern StructRNA RNA_Itasc;
extern StructRNA RNA_BoneGroup;
extern StructRNA RNA_GameProperty;
extern StructRNA RNA_GameBooleanProperty;
extern StructRNA RNA_GameIntProperty;
extern StructRNA RNA_GameFloatProperty;
extern StructRNA RNA_GameTimerProperty;
extern StructRNA RNA_GameStringProperty;
extern StructRNA RNA_RenderEngine;
extern StructRNA RNA_RenderResult;
extern StructRNA RNA_RenderLayer;
extern StructRNA RNA_RenderPass;
extern StructRNA RNA_BakePixel;
extern StructRNA RNA_RigidBodyWorld;
extern StructRNA RNA_RigidBodyObject;
extern StructRNA RNA_RigidBodyConstraint;
extern StructRNA RNA_Scene;
extern StructRNA RNA_SceneBases;
extern StructRNA RNA_SceneObjects;
extern StructRNA RNA_KeyingSets;
extern StructRNA RNA_KeyingSetsAll;
extern StructRNA RNA_TimelineMarkers;
extern StructRNA RNA_ToolSettings;
extern StructRNA RNA_UnifiedPaintSettings;
extern StructRNA RNA_MeshStatVis;
extern StructRNA RNA_UnitSettings;
extern StructRNA RNA_ImageFormatSettings;
extern StructRNA RNA_SceneGameData;
extern StructRNA RNA_SceneGameRecastData;
extern StructRNA RNA_TransformOrientation;
extern StructRNA RNA_SelectedUvElement;
extern StructRNA RNA_FFmpegSettings;
extern StructRNA RNA_RenderSettings;
extern StructRNA RNA_RenderLayers;
extern StructRNA RNA_BakeSettings;
extern StructRNA RNA_SceneRenderLayer;
extern StructRNA RNA_FreestyleLineSet;
extern StructRNA RNA_FreestyleModuleSettings;
extern StructRNA RNA_FreestyleSettings;
extern StructRNA RNA_FreestyleModules;
extern StructRNA RNA_Linesets;
extern StructRNA RNA_Screen;
extern StructRNA RNA_Area;
extern StructRNA RNA_AreaSpaces;
extern StructRNA RNA_Region;
extern StructRNA RNA_View2D;
extern StructRNA RNA_PaletteColor;
extern StructRNA RNA_Palette;
extern StructRNA RNA_PaintCurve;
extern StructRNA RNA_Paint;
extern StructRNA RNA_Sculpt;
extern StructRNA RNA_UvSculpt;
extern StructRNA RNA_VertexPaint;
extern StructRNA RNA_ImagePaint;
extern StructRNA RNA_ParticleEdit;
extern StructRNA RNA_ParticleBrush;
extern StructRNA RNA_Sensor;
extern StructRNA RNA_AlwaysSensor;
extern StructRNA RNA_NearSensor;
extern StructRNA RNA_MouseSensor;
extern StructRNA RNA_KeyboardSensor;
extern StructRNA RNA_PropertySensor;
extern StructRNA RNA_ArmatureSensor;
extern StructRNA RNA_ActuatorSensor;
extern StructRNA RNA_DelaySensor;
extern StructRNA RNA_CollisionSensor;
extern StructRNA RNA_RadarSensor;
extern StructRNA RNA_RandomSensor;
extern StructRNA RNA_RaySensor;
extern StructRNA RNA_MessageSensor;
extern StructRNA RNA_JoystickSensor;
extern StructRNA RNA_SequenceColorBalanceData;
extern StructRNA RNA_SequenceElement;
extern StructRNA RNA_SequenceProxy;
extern StructRNA RNA_SequenceColorBalance;
extern StructRNA RNA_SequenceCrop;
extern StructRNA RNA_SequenceTransform;
extern StructRNA RNA_Sequence;
extern StructRNA RNA_SequenceModifiers;
extern StructRNA RNA_SequenceEditor;
extern StructRNA RNA_Sequences;
extern StructRNA RNA_ImageSequence;
extern StructRNA RNA_SequenceElements;
extern StructRNA RNA_MetaSequence;
extern StructRNA RNA_SceneSequence;
extern StructRNA RNA_MovieSequence;
extern StructRNA RNA_MovieClipSequence;
extern StructRNA RNA_MaskSequence;
extern StructRNA RNA_SoundSequence;
extern StructRNA RNA_EffectSequence;
extern StructRNA RNA_AddSequence;
extern StructRNA RNA_AdjustmentSequence;
extern StructRNA RNA_AlphaOverSequence;
extern StructRNA RNA_AlphaUnderSequence;
extern StructRNA RNA_ColorSequence;
extern StructRNA RNA_CrossSequence;
extern StructRNA RNA_GammaCrossSequence;
extern StructRNA RNA_GlowSequence;
extern StructRNA RNA_MulticamSequence;
extern StructRNA RNA_MultiplySequence;
extern StructRNA RNA_OverDropSequence;
extern StructRNA RNA_SpeedControlSequence;
extern StructRNA RNA_SubtractSequence;
extern StructRNA RNA_TransformSequence;
extern StructRNA RNA_WipeSequence;
extern StructRNA RNA_GaussianBlurSequence;
extern StructRNA RNA_SequenceModifier;
extern StructRNA RNA_ColorBalanceModifier;
extern StructRNA RNA_CurvesModifier;
extern StructRNA RNA_HueCorrectModifier;
extern StructRNA RNA_BrightContrastModifier;
extern StructRNA RNA_SmokeDomainSettings;
extern StructRNA RNA_SmokeFlowSettings;
extern StructRNA RNA_SmokeCollSettings;
extern StructRNA RNA_Space;
extern StructRNA RNA_SpaceImageEditor;
extern StructRNA RNA_SpaceUVEditor;
extern StructRNA RNA_SpaceSequenceEditor;
extern StructRNA RNA_SpaceTextEditor;
extern StructRNA RNA_FileSelectParams;
extern StructRNA RNA_SpaceFileBrowser;
extern StructRNA RNA_SpaceOutliner;
extern StructRNA RNA_BackgroundImage;
extern StructRNA RNA_SpaceView3D;
extern StructRNA RNA_BackgroundImages;
extern StructRNA RNA_RegionView3D;
extern StructRNA RNA_SpaceProperties;
extern StructRNA RNA_SpaceDopeSheetEditor;
extern StructRNA RNA_SpaceGraphEditor;
extern StructRNA RNA_SpaceNLA;
extern StructRNA RNA_SpaceTimeline;
extern StructRNA RNA_SpaceConsole;
extern StructRNA RNA_ConsoleLine;
extern StructRNA RNA_SpaceInfo;
extern StructRNA RNA_SpaceUserPreferences;
extern StructRNA RNA_NodeTreePath;
extern StructRNA RNA_SpaceNodeEditor;
extern StructRNA RNA_SpaceNodeEditorPath;
extern StructRNA RNA_SpaceLogicEditor;
extern StructRNA RNA_SpaceClipEditor;
extern StructRNA RNA_Speaker;
extern StructRNA RNA_TextLine;
extern StructRNA RNA_Text;
extern StructRNA RNA_TimelineMarker;
extern StructRNA RNA_Sound;
extern StructRNA RNA_UILayout;
extern StructRNA RNA_Panel;
extern StructRNA RNA_UIList;
extern StructRNA RNA_Header;
extern StructRNA RNA_Menu;
extern StructRNA RNA_ThemeFontStyle;
extern StructRNA RNA_ThemeStyle;
extern StructRNA RNA_ThemeWidgetColors;
extern StructRNA RNA_ThemeWidgetStateColors;
extern StructRNA RNA_ThemePanelColors;
extern StructRNA RNA_ThemeGradientColors;
extern StructRNA RNA_ThemeUserInterface;
extern StructRNA RNA_ThemeSpaceGeneric;
extern StructRNA RNA_ThemeSpaceGradient;
extern StructRNA RNA_ThemeSpaceListGeneric;
extern StructRNA RNA_ThemeView3D;
extern StructRNA RNA_ThemeGraphEditor;
extern StructRNA RNA_ThemeFileBrowser;
extern StructRNA RNA_ThemeNLAEditor;
extern StructRNA RNA_ThemeDopeSheet;
extern StructRNA RNA_ThemeImageEditor;
extern StructRNA RNA_ThemeSequenceEditor;
extern StructRNA RNA_ThemeProperties;
extern StructRNA RNA_ThemeTextEditor;
extern StructRNA RNA_ThemeTimeline;
extern StructRNA RNA_ThemeNodeEditor;
extern StructRNA RNA_ThemeOutliner;
extern StructRNA RNA_ThemeInfo;
extern StructRNA RNA_ThemeUserPreferences;
extern StructRNA RNA_ThemeConsole;
extern StructRNA RNA_ThemeLogicEditor;
extern StructRNA RNA_ThemeClipEditor;
extern StructRNA RNA_ThemeBoneColorSet;
extern StructRNA RNA_Theme;
extern StructRNA RNA_UserSolidLight;
extern StructRNA RNA_WalkNavigation;
extern StructRNA RNA_UserPreferences;
extern StructRNA RNA_Addons;
extern StructRNA RNA_PathCompareCollection;
extern StructRNA RNA_UserPreferencesView;
extern StructRNA RNA_UserPreferencesEdit;
extern StructRNA RNA_UserPreferencesInput;
extern StructRNA RNA_UserPreferencesFilePaths;
extern StructRNA RNA_UserPreferencesSystem;
extern StructRNA RNA_Addon;
extern StructRNA RNA_AddonPreferences;
extern StructRNA RNA_PathCompare;
extern StructRNA RNA_VectorFont;
extern StructRNA RNA_Operator;
extern StructRNA RNA_OperatorProperties;
extern StructRNA RNA_OperatorMousePath;
extern StructRNA RNA_OperatorFileListElement;
extern StructRNA RNA_Macro;
extern StructRNA RNA_OperatorMacro;
extern StructRNA RNA_Event;
extern StructRNA RNA_Timer;
extern StructRNA RNA_UIPopupMenu;
extern StructRNA RNA_UIPieMenu;
extern StructRNA RNA_Window;
extern StructRNA RNA_WindowManager;
extern StructRNA RNA_KeyConfigurations;
extern StructRNA RNA_KeyConfig;
extern StructRNA RNA_KeyMaps;
extern StructRNA RNA_KeyMap;
extern StructRNA RNA_KeyMapItems;
extern StructRNA RNA_KeyMapItem;
extern StructRNA RNA_World;
extern StructRNA RNA_WorldTextureSlots;
extern StructRNA RNA_WorldLighting;
extern StructRNA RNA_WorldMistSettings;
extern StructRNA RNA_WorldTextureSlot;
extern StructRNA RNA_MovieClip;
extern StructRNA RNA_MovieClipProxy;
extern StructRNA RNA_MovieClipUser;
extern StructRNA RNA_MovieClipScopes;
extern StructRNA RNA_MovieTrackingSettings;
extern StructRNA RNA_MovieTrackingCamera;
extern StructRNA RNA_MovieTrackingMarker;
extern StructRNA RNA_MovieTrackingTrack;
extern StructRNA RNA_MovieTrackingMarkers;
extern StructRNA RNA_MovieTrackingPlaneMarker;
extern StructRNA RNA_MovieTrackingPlaneTrack;
extern StructRNA RNA_MovieTrackingPlaneMarkers;
extern StructRNA RNA_MovieTrackingTracks;
extern StructRNA RNA_MovieTrackingPlaneTracks;
extern StructRNA RNA_MovieTrackingObjectTracks;
extern StructRNA RNA_MovieTrackingObjectPlaneTracks;
extern StructRNA RNA_MovieTrackingStabilization;
extern StructRNA RNA_MovieTrackingReconstructedCameras;
extern StructRNA RNA_MovieReconstructedCamera;
extern StructRNA RNA_MovieTrackingReconstruction;
extern StructRNA RNA_MovieTrackingObject;
extern StructRNA RNA_MovieTrackingDopesheet;
extern StructRNA RNA_MovieTracking;
extern StructRNA RNA_MovieTrackingObjects;
extern StructRNA RNA_MaskParent;
extern StructRNA RNA_MaskSplinePointUW;
extern StructRNA RNA_MaskSplinePoint;
extern StructRNA RNA_MaskSpline;
extern StructRNA RNA_MaskSplines;
extern StructRNA RNA_MaskSplinePoints;
extern StructRNA RNA_MaskLayer;
extern StructRNA RNA_Mask;
extern StructRNA RNA_MaskLayers;

#include "rna_userdef.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_ThemeFontStyle_rna_properties;
PointerPropertyRNA rna_ThemeFontStyle_rna_type;
IntPropertyRNA rna_ThemeFontStyle_points;
EnumPropertyRNA rna_ThemeFontStyle_font_kerning_style;
IntPropertyRNA rna_ThemeFontStyle_shadow;
IntPropertyRNA rna_ThemeFontStyle_shadow_offset_x;
IntPropertyRNA rna_ThemeFontStyle_shadow_offset_y;
FloatPropertyRNA rna_ThemeFontStyle_shadow_alpha;
FloatPropertyRNA rna_ThemeFontStyle_shadow_value;


CollectionPropertyRNA rna_ThemeStyle_rna_properties;
PointerPropertyRNA rna_ThemeStyle_rna_type;
PointerPropertyRNA rna_ThemeStyle_panel_title;
PointerPropertyRNA rna_ThemeStyle_widget_label;
PointerPropertyRNA rna_ThemeStyle_widget;


CollectionPropertyRNA rna_ThemeWidgetColors_rna_properties;
PointerPropertyRNA rna_ThemeWidgetColors_rna_type;
FloatPropertyRNA rna_ThemeWidgetColors_outline;
FloatPropertyRNA rna_ThemeWidgetColors_inner;
FloatPropertyRNA rna_ThemeWidgetColors_inner_sel;
FloatPropertyRNA rna_ThemeWidgetColors_item;
FloatPropertyRNA rna_ThemeWidgetColors_text;
FloatPropertyRNA rna_ThemeWidgetColors_text_sel;
BoolPropertyRNA rna_ThemeWidgetColors_show_shaded;
IntPropertyRNA rna_ThemeWidgetColors_shadetop;
IntPropertyRNA rna_ThemeWidgetColors_shadedown;


CollectionPropertyRNA rna_ThemeWidgetStateColors_rna_properties;
PointerPropertyRNA rna_ThemeWidgetStateColors_rna_type;
FloatPropertyRNA rna_ThemeWidgetStateColors_inner_anim;
FloatPropertyRNA rna_ThemeWidgetStateColors_inner_anim_sel;
FloatPropertyRNA rna_ThemeWidgetStateColors_inner_key;
FloatPropertyRNA rna_ThemeWidgetStateColors_inner_key_sel;
FloatPropertyRNA rna_ThemeWidgetStateColors_inner_driven;
FloatPropertyRNA rna_ThemeWidgetStateColors_inner_driven_sel;
FloatPropertyRNA rna_ThemeWidgetStateColors_blend;


CollectionPropertyRNA rna_ThemePanelColors_rna_properties;
PointerPropertyRNA rna_ThemePanelColors_rna_type;
FloatPropertyRNA rna_ThemePanelColors_header;
FloatPropertyRNA rna_ThemePanelColors_back;
BoolPropertyRNA rna_ThemePanelColors_show_header;
BoolPropertyRNA rna_ThemePanelColors_show_back;


CollectionPropertyRNA rna_ThemeGradientColors_rna_properties;
PointerPropertyRNA rna_ThemeGradientColors_rna_type;
BoolPropertyRNA rna_ThemeGradientColors_show_grad;
FloatPropertyRNA rna_ThemeGradientColors_gradient;
FloatPropertyRNA rna_ThemeGradientColors_high_gradient;


CollectionPropertyRNA rna_ThemeUserInterface_rna_properties;
PointerPropertyRNA rna_ThemeUserInterface_rna_type;
PointerPropertyRNA rna_ThemeUserInterface_wcol_regular;
PointerPropertyRNA rna_ThemeUserInterface_wcol_tool;
PointerPropertyRNA rna_ThemeUserInterface_wcol_radio;
PointerPropertyRNA rna_ThemeUserInterface_wcol_text;
PointerPropertyRNA rna_ThemeUserInterface_wcol_option;
PointerPropertyRNA rna_ThemeUserInterface_wcol_toggle;
PointerPropertyRNA rna_ThemeUserInterface_wcol_num;
PointerPropertyRNA rna_ThemeUserInterface_wcol_numslider;
PointerPropertyRNA rna_ThemeUserInterface_wcol_box;
PointerPropertyRNA rna_ThemeUserInterface_wcol_menu;
PointerPropertyRNA rna_ThemeUserInterface_wcol_pulldown;
PointerPropertyRNA rna_ThemeUserInterface_wcol_menu_back;
PointerPropertyRNA rna_ThemeUserInterface_wcol_pie_menu;
PointerPropertyRNA rna_ThemeUserInterface_wcol_tooltip;
PointerPropertyRNA rna_ThemeUserInterface_wcol_menu_item;
PointerPropertyRNA rna_ThemeUserInterface_wcol_scroll;
PointerPropertyRNA rna_ThemeUserInterface_wcol_progress;
PointerPropertyRNA rna_ThemeUserInterface_wcol_list_item;
PointerPropertyRNA rna_ThemeUserInterface_wcol_state;
FloatPropertyRNA rna_ThemeUserInterface_menu_shadow_fac;
IntPropertyRNA rna_ThemeUserInterface_menu_shadow_width;
StringPropertyRNA rna_ThemeUserInterface_icon_file;
FloatPropertyRNA rna_ThemeUserInterface_icon_alpha;
FloatPropertyRNA rna_ThemeUserInterface_emboss;
FloatPropertyRNA rna_ThemeUserInterface_axis_x;
FloatPropertyRNA rna_ThemeUserInterface_axis_y;
FloatPropertyRNA rna_ThemeUserInterface_axis_z;


CollectionPropertyRNA rna_ThemeSpaceGeneric_rna_properties;
PointerPropertyRNA rna_ThemeSpaceGeneric_rna_type;
FloatPropertyRNA rna_ThemeSpaceGeneric_back;
FloatPropertyRNA rna_ThemeSpaceGeneric_title;
FloatPropertyRNA rna_ThemeSpaceGeneric_text;
FloatPropertyRNA rna_ThemeSpaceGeneric_text_hi;
FloatPropertyRNA rna_ThemeSpaceGeneric_header;
FloatPropertyRNA rna_ThemeSpaceGeneric_header_text;
FloatPropertyRNA rna_ThemeSpaceGeneric_header_text_hi;
PointerPropertyRNA rna_ThemeSpaceGeneric_panelcolors;
FloatPropertyRNA rna_ThemeSpaceGeneric_button;
FloatPropertyRNA rna_ThemeSpaceGeneric_button_title;
FloatPropertyRNA rna_ThemeSpaceGeneric_button_text;
FloatPropertyRNA rna_ThemeSpaceGeneric_button_text_hi;
FloatPropertyRNA rna_ThemeSpaceGeneric_tab_active;
FloatPropertyRNA rna_ThemeSpaceGeneric_tab_inactive;
FloatPropertyRNA rna_ThemeSpaceGeneric_tab_back;
FloatPropertyRNA rna_ThemeSpaceGeneric_tab_outline;


CollectionPropertyRNA rna_ThemeSpaceGradient_rna_properties;
PointerPropertyRNA rna_ThemeSpaceGradient_rna_type;
PointerPropertyRNA rna_ThemeSpaceGradient_gradients;
FloatPropertyRNA rna_ThemeSpaceGradient_title;
FloatPropertyRNA rna_ThemeSpaceGradient_text;
FloatPropertyRNA rna_ThemeSpaceGradient_text_hi;
FloatPropertyRNA rna_ThemeSpaceGradient_header;
FloatPropertyRNA rna_ThemeSpaceGradient_header_text;
FloatPropertyRNA rna_ThemeSpaceGradient_header_text_hi;
PointerPropertyRNA rna_ThemeSpaceGradient_panelcolors;
FloatPropertyRNA rna_ThemeSpaceGradient_button;
FloatPropertyRNA rna_ThemeSpaceGradient_button_title;
FloatPropertyRNA rna_ThemeSpaceGradient_button_text;
FloatPropertyRNA rna_ThemeSpaceGradient_button_text_hi;
FloatPropertyRNA rna_ThemeSpaceGradient_tab_active;
FloatPropertyRNA rna_ThemeSpaceGradient_tab_inactive;
FloatPropertyRNA rna_ThemeSpaceGradient_tab_back;
FloatPropertyRNA rna_ThemeSpaceGradient_tab_outline;


CollectionPropertyRNA rna_ThemeSpaceListGeneric_rna_properties;
PointerPropertyRNA rna_ThemeSpaceListGeneric_rna_type;
FloatPropertyRNA rna_ThemeSpaceListGeneric_list;
FloatPropertyRNA rna_ThemeSpaceListGeneric_list_title;
FloatPropertyRNA rna_ThemeSpaceListGeneric_list_text;
FloatPropertyRNA rna_ThemeSpaceListGeneric_list_text_hi;


CollectionPropertyRNA rna_ThemeView3D_rna_properties;
PointerPropertyRNA rna_ThemeView3D_rna_type;
PointerPropertyRNA rna_ThemeView3D_space;
FloatPropertyRNA rna_ThemeView3D_grid;
FloatPropertyRNA rna_ThemeView3D_wire;
FloatPropertyRNA rna_ThemeView3D_wire_edit;
FloatPropertyRNA rna_ThemeView3D_lamp;
FloatPropertyRNA rna_ThemeView3D_speaker;
FloatPropertyRNA rna_ThemeView3D_camera;
FloatPropertyRNA rna_ThemeView3D_view_overlay;
FloatPropertyRNA rna_ThemeView3D_empty;
FloatPropertyRNA rna_ThemeView3D_object_selected;
FloatPropertyRNA rna_ThemeView3D_object_active;
FloatPropertyRNA rna_ThemeView3D_object_grouped;
FloatPropertyRNA rna_ThemeView3D_object_grouped_active;
FloatPropertyRNA rna_ThemeView3D_transform;
FloatPropertyRNA rna_ThemeView3D_vertex;
FloatPropertyRNA rna_ThemeView3D_vertex_select;
IntPropertyRNA rna_ThemeView3D_vertex_size;
FloatPropertyRNA rna_ThemeView3D_vertex_unreferenced;
FloatPropertyRNA rna_ThemeView3D_edge_select;
FloatPropertyRNA rna_ThemeView3D_edge_seam;
FloatPropertyRNA rna_ThemeView3D_edge_sharp;
FloatPropertyRNA rna_ThemeView3D_edge_crease;
FloatPropertyRNA rna_ThemeView3D_edge_facesel;
FloatPropertyRNA rna_ThemeView3D_freestyle_edge_mark;
FloatPropertyRNA rna_ThemeView3D_face;
FloatPropertyRNA rna_ThemeView3D_face_select;
FloatPropertyRNA rna_ThemeView3D_face_dot;
IntPropertyRNA rna_ThemeView3D_facedot_size;
FloatPropertyRNA rna_ThemeView3D_freestyle_face_mark;
FloatPropertyRNA rna_ThemeView3D_nurb_uline;
FloatPropertyRNA rna_ThemeView3D_nurb_vline;
FloatPropertyRNA rna_ThemeView3D_nurb_sel_uline;
FloatPropertyRNA rna_ThemeView3D_nurb_sel_vline;
FloatPropertyRNA rna_ThemeView3D_act_spline;
FloatPropertyRNA rna_ThemeView3D_handle_free;
FloatPropertyRNA rna_ThemeView3D_handle_auto;
FloatPropertyRNA rna_ThemeView3D_handle_vect;
FloatPropertyRNA rna_ThemeView3D_handle_sel_vect;
FloatPropertyRNA rna_ThemeView3D_handle_align;
FloatPropertyRNA rna_ThemeView3D_handle_sel_free;
FloatPropertyRNA rna_ThemeView3D_handle_sel_auto;
FloatPropertyRNA rna_ThemeView3D_handle_sel_align;
FloatPropertyRNA rna_ThemeView3D_lastsel_point;
FloatPropertyRNA rna_ThemeView3D_extra_edge_len;
FloatPropertyRNA rna_ThemeView3D_extra_edge_angle;
FloatPropertyRNA rna_ThemeView3D_extra_face_angle;
FloatPropertyRNA rna_ThemeView3D_extra_face_area;
FloatPropertyRNA rna_ThemeView3D_editmesh_active;
FloatPropertyRNA rna_ThemeView3D_normal;
FloatPropertyRNA rna_ThemeView3D_vertex_normal;
FloatPropertyRNA rna_ThemeView3D_split_normal;
FloatPropertyRNA rna_ThemeView3D_bone_solid;
FloatPropertyRNA rna_ThemeView3D_bone_pose;
FloatPropertyRNA rna_ThemeView3D_bone_pose_active;
FloatPropertyRNA rna_ThemeView3D_frame_current;
IntPropertyRNA rna_ThemeView3D_outline_width;
FloatPropertyRNA rna_ThemeView3D_bundle_solid;
FloatPropertyRNA rna_ThemeView3D_camera_path;
FloatPropertyRNA rna_ThemeView3D_skin_root;
FloatPropertyRNA rna_ThemeView3D_paint_curve_handle;
FloatPropertyRNA rna_ThemeView3D_paint_curve_pivot;


CollectionPropertyRNA rna_ThemeGraphEditor_rna_properties;
PointerPropertyRNA rna_ThemeGraphEditor_rna_type;
PointerPropertyRNA rna_ThemeGraphEditor_space;
PointerPropertyRNA rna_ThemeGraphEditor_space_list;
FloatPropertyRNA rna_ThemeGraphEditor_grid;
FloatPropertyRNA rna_ThemeGraphEditor_frame_current;
FloatPropertyRNA rna_ThemeGraphEditor_window_sliders;
FloatPropertyRNA rna_ThemeGraphEditor_channels_region;
FloatPropertyRNA rna_ThemeGraphEditor_dopesheet_channel;
FloatPropertyRNA rna_ThemeGraphEditor_dopesheet_subchannel;
FloatPropertyRNA rna_ThemeGraphEditor_channel_group;
FloatPropertyRNA rna_ThemeGraphEditor_active_channels_group;
FloatPropertyRNA rna_ThemeGraphEditor_vertex;
FloatPropertyRNA rna_ThemeGraphEditor_vertex_select;
IntPropertyRNA rna_ThemeGraphEditor_vertex_size;
FloatPropertyRNA rna_ThemeGraphEditor_vertex_unreferenced;
FloatPropertyRNA rna_ThemeGraphEditor_handle_free;
FloatPropertyRNA rna_ThemeGraphEditor_handle_auto;
FloatPropertyRNA rna_ThemeGraphEditor_handle_vect;
FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_vect;
FloatPropertyRNA rna_ThemeGraphEditor_handle_align;
FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_free;
FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_auto;
FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_align;
FloatPropertyRNA rna_ThemeGraphEditor_handle_auto_clamped;
FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_auto_clamped;
FloatPropertyRNA rna_ThemeGraphEditor_lastsel_point;
FloatPropertyRNA rna_ThemeGraphEditor_handle_vertex;
FloatPropertyRNA rna_ThemeGraphEditor_handle_vertex_select;
IntPropertyRNA rna_ThemeGraphEditor_handle_vertex_size;


CollectionPropertyRNA rna_ThemeFileBrowser_rna_properties;
PointerPropertyRNA rna_ThemeFileBrowser_rna_type;
PointerPropertyRNA rna_ThemeFileBrowser_space;
PointerPropertyRNA rna_ThemeFileBrowser_space_list;
FloatPropertyRNA rna_ThemeFileBrowser_selected_file;
FloatPropertyRNA rna_ThemeFileBrowser_scrollbar;
FloatPropertyRNA rna_ThemeFileBrowser_scroll_handle;
FloatPropertyRNA rna_ThemeFileBrowser_active_file;
FloatPropertyRNA rna_ThemeFileBrowser_active_file_text;


CollectionPropertyRNA rna_ThemeNLAEditor_rna_properties;
PointerPropertyRNA rna_ThemeNLAEditor_rna_type;
PointerPropertyRNA rna_ThemeNLAEditor_space;
PointerPropertyRNA rna_ThemeNLAEditor_space_list;
FloatPropertyRNA rna_ThemeNLAEditor_grid;
FloatPropertyRNA rna_ThemeNLAEditor_view_sliders;
FloatPropertyRNA rna_ThemeNLAEditor_active_action;
FloatPropertyRNA rna_ThemeNLAEditor_active_action_unset;
FloatPropertyRNA rna_ThemeNLAEditor_strips;
FloatPropertyRNA rna_ThemeNLAEditor_strips_selected;
FloatPropertyRNA rna_ThemeNLAEditor_transition_strips;
FloatPropertyRNA rna_ThemeNLAEditor_transition_strips_selected;
FloatPropertyRNA rna_ThemeNLAEditor_meta_strips;
FloatPropertyRNA rna_ThemeNLAEditor_meta_strips_selected;
FloatPropertyRNA rna_ThemeNLAEditor_sound_strips;
FloatPropertyRNA rna_ThemeNLAEditor_sound_strips_selected;
FloatPropertyRNA rna_ThemeNLAEditor_tweak;
FloatPropertyRNA rna_ThemeNLAEditor_tweak_duplicate;
FloatPropertyRNA rna_ThemeNLAEditor_keyframe_border;
FloatPropertyRNA rna_ThemeNLAEditor_keyframe_border_selected;
FloatPropertyRNA rna_ThemeNLAEditor_frame_current;


CollectionPropertyRNA rna_ThemeDopeSheet_rna_properties;
PointerPropertyRNA rna_ThemeDopeSheet_rna_type;
PointerPropertyRNA rna_ThemeDopeSheet_space;
PointerPropertyRNA rna_ThemeDopeSheet_space_list;
FloatPropertyRNA rna_ThemeDopeSheet_grid;
FloatPropertyRNA rna_ThemeDopeSheet_frame_current;
FloatPropertyRNA rna_ThemeDopeSheet_value_sliders;
FloatPropertyRNA rna_ThemeDopeSheet_view_sliders;
FloatPropertyRNA rna_ThemeDopeSheet_dopesheet_channel;
FloatPropertyRNA rna_ThemeDopeSheet_dopesheet_subchannel;
FloatPropertyRNA rna_ThemeDopeSheet_channels;
FloatPropertyRNA rna_ThemeDopeSheet_channels_selected;
FloatPropertyRNA rna_ThemeDopeSheet_channel_group;
FloatPropertyRNA rna_ThemeDopeSheet_active_channels_group;
FloatPropertyRNA rna_ThemeDopeSheet_long_key;
FloatPropertyRNA rna_ThemeDopeSheet_long_key_selected;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_selected;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_extreme;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_extreme_selected;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_breakdown;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_breakdown_selected;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_jitter;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_jitter_selected;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_border;
FloatPropertyRNA rna_ThemeDopeSheet_keyframe_border_selected;
FloatPropertyRNA rna_ThemeDopeSheet_summary;


CollectionPropertyRNA rna_ThemeImageEditor_rna_properties;
PointerPropertyRNA rna_ThemeImageEditor_rna_type;
PointerPropertyRNA rna_ThemeImageEditor_space;
FloatPropertyRNA rna_ThemeImageEditor_vertex;
FloatPropertyRNA rna_ThemeImageEditor_vertex_select;
IntPropertyRNA rna_ThemeImageEditor_vertex_size;
FloatPropertyRNA rna_ThemeImageEditor_vertex_unreferenced;
FloatPropertyRNA rna_ThemeImageEditor_face;
FloatPropertyRNA rna_ThemeImageEditor_face_select;
FloatPropertyRNA rna_ThemeImageEditor_face_dot;
IntPropertyRNA rna_ThemeImageEditor_facedot_size;
FloatPropertyRNA rna_ThemeImageEditor_freestyle_face_mark;
FloatPropertyRNA rna_ThemeImageEditor_editmesh_active;
FloatPropertyRNA rna_ThemeImageEditor_wire_edit;
FloatPropertyRNA rna_ThemeImageEditor_edge_select;
FloatPropertyRNA rna_ThemeImageEditor_scope_back;
FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_face;
FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_edge;
FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_vert;
FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_stitchable;
FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_unstitchable;
FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_active;
FloatPropertyRNA rna_ThemeImageEditor_uv_shadow;
FloatPropertyRNA rna_ThemeImageEditor_uv_others;
FloatPropertyRNA rna_ThemeImageEditor_frame_current;
FloatPropertyRNA rna_ThemeImageEditor_handle_free;
FloatPropertyRNA rna_ThemeImageEditor_handle_auto;
FloatPropertyRNA rna_ThemeImageEditor_handle_align;
FloatPropertyRNA rna_ThemeImageEditor_handle_sel_free;
FloatPropertyRNA rna_ThemeImageEditor_handle_sel_auto;
FloatPropertyRNA rna_ThemeImageEditor_handle_sel_align;
FloatPropertyRNA rna_ThemeImageEditor_handle_auto_clamped;
FloatPropertyRNA rna_ThemeImageEditor_handle_sel_auto_clamped;
FloatPropertyRNA rna_ThemeImageEditor_handle_vertex;
FloatPropertyRNA rna_ThemeImageEditor_handle_vertex_select;
IntPropertyRNA rna_ThemeImageEditor_handle_vertex_size;
FloatPropertyRNA rna_ThemeImageEditor_paint_curve_handle;
FloatPropertyRNA rna_ThemeImageEditor_paint_curve_pivot;


CollectionPropertyRNA rna_ThemeSequenceEditor_rna_properties;
PointerPropertyRNA rna_ThemeSequenceEditor_rna_type;
PointerPropertyRNA rna_ThemeSequenceEditor_space;
FloatPropertyRNA rna_ThemeSequenceEditor_grid;
FloatPropertyRNA rna_ThemeSequenceEditor_window_sliders;
FloatPropertyRNA rna_ThemeSequenceEditor_movie_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_movieclip_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_image_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_scene_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_audio_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_effect_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_transition_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_meta_strip;
FloatPropertyRNA rna_ThemeSequenceEditor_frame_current;
FloatPropertyRNA rna_ThemeSequenceEditor_keyframe;
FloatPropertyRNA rna_ThemeSequenceEditor_draw_action;
FloatPropertyRNA rna_ThemeSequenceEditor_preview_back;


CollectionPropertyRNA rna_ThemeProperties_rna_properties;
PointerPropertyRNA rna_ThemeProperties_rna_type;
PointerPropertyRNA rna_ThemeProperties_space;


CollectionPropertyRNA rna_ThemeTextEditor_rna_properties;
PointerPropertyRNA rna_ThemeTextEditor_rna_type;
PointerPropertyRNA rna_ThemeTextEditor_space;
FloatPropertyRNA rna_ThemeTextEditor_line_numbers_background;
FloatPropertyRNA rna_ThemeTextEditor_selected_text;
FloatPropertyRNA rna_ThemeTextEditor_cursor;
FloatPropertyRNA rna_ThemeTextEditor_syntax_builtin;
FloatPropertyRNA rna_ThemeTextEditor_syntax_symbols;
FloatPropertyRNA rna_ThemeTextEditor_syntax_special;
FloatPropertyRNA rna_ThemeTextEditor_syntax_preprocessor;
FloatPropertyRNA rna_ThemeTextEditor_syntax_reserved;
FloatPropertyRNA rna_ThemeTextEditor_syntax_comment;
FloatPropertyRNA rna_ThemeTextEditor_syntax_string;
FloatPropertyRNA rna_ThemeTextEditor_syntax_numbers;


CollectionPropertyRNA rna_ThemeTimeline_rna_properties;
PointerPropertyRNA rna_ThemeTimeline_rna_type;
PointerPropertyRNA rna_ThemeTimeline_space;
FloatPropertyRNA rna_ThemeTimeline_grid;
FloatPropertyRNA rna_ThemeTimeline_frame_current;


CollectionPropertyRNA rna_ThemeNodeEditor_rna_properties;
PointerPropertyRNA rna_ThemeNodeEditor_rna_type;
PointerPropertyRNA rna_ThemeNodeEditor_space;
PointerPropertyRNA rna_ThemeNodeEditor_space_list;
FloatPropertyRNA rna_ThemeNodeEditor_node_selected;
FloatPropertyRNA rna_ThemeNodeEditor_node_active;
FloatPropertyRNA rna_ThemeNodeEditor_wire;
FloatPropertyRNA rna_ThemeNodeEditor_wire_inner;
FloatPropertyRNA rna_ThemeNodeEditor_wire_select;
FloatPropertyRNA rna_ThemeNodeEditor_selected_text;
FloatPropertyRNA rna_ThemeNodeEditor_node_backdrop;
FloatPropertyRNA rna_ThemeNodeEditor_converter_node;
FloatPropertyRNA rna_ThemeNodeEditor_color_node;
FloatPropertyRNA rna_ThemeNodeEditor_group_node;
FloatPropertyRNA rna_ThemeNodeEditor_group_socket_node;
FloatPropertyRNA rna_ThemeNodeEditor_frame_node;
FloatPropertyRNA rna_ThemeNodeEditor_matte_node;
FloatPropertyRNA rna_ThemeNodeEditor_distor_node;
IntPropertyRNA rna_ThemeNodeEditor_noodle_curving;
FloatPropertyRNA rna_ThemeNodeEditor_input_node;
FloatPropertyRNA rna_ThemeNodeEditor_output_node;
FloatPropertyRNA rna_ThemeNodeEditor_filter_node;
FloatPropertyRNA rna_ThemeNodeEditor_vector_node;
FloatPropertyRNA rna_ThemeNodeEditor_texture_node;
FloatPropertyRNA rna_ThemeNodeEditor_shader_node;
FloatPropertyRNA rna_ThemeNodeEditor_script_node;
FloatPropertyRNA rna_ThemeNodeEditor_pattern_node;
FloatPropertyRNA rna_ThemeNodeEditor_layout_node;


CollectionPropertyRNA rna_ThemeOutliner_rna_properties;
PointerPropertyRNA rna_ThemeOutliner_rna_type;
PointerPropertyRNA rna_ThemeOutliner_space;
FloatPropertyRNA rna_ThemeOutliner_match;
FloatPropertyRNA rna_ThemeOutliner_selected_highlight;


CollectionPropertyRNA rna_ThemeInfo_rna_properties;
PointerPropertyRNA rna_ThemeInfo_rna_type;
PointerPropertyRNA rna_ThemeInfo_space;
FloatPropertyRNA rna_ThemeInfo_info_selected;
FloatPropertyRNA rna_ThemeInfo_info_selected_text;
FloatPropertyRNA rna_ThemeInfo_info_error;
FloatPropertyRNA rna_ThemeInfo_info_error_text;
FloatPropertyRNA rna_ThemeInfo_info_warning;
FloatPropertyRNA rna_ThemeInfo_info_warning_text;
FloatPropertyRNA rna_ThemeInfo_info_info;
FloatPropertyRNA rna_ThemeInfo_info_info_text;
FloatPropertyRNA rna_ThemeInfo_info_debug;
FloatPropertyRNA rna_ThemeInfo_info_debug_text;


CollectionPropertyRNA rna_ThemeUserPreferences_rna_properties;
PointerPropertyRNA rna_ThemeUserPreferences_rna_type;
PointerPropertyRNA rna_ThemeUserPreferences_space;


CollectionPropertyRNA rna_ThemeConsole_rna_properties;
PointerPropertyRNA rna_ThemeConsole_rna_type;
PointerPropertyRNA rna_ThemeConsole_space;
FloatPropertyRNA rna_ThemeConsole_line_output;
FloatPropertyRNA rna_ThemeConsole_line_input;
FloatPropertyRNA rna_ThemeConsole_line_info;
FloatPropertyRNA rna_ThemeConsole_line_error;
FloatPropertyRNA rna_ThemeConsole_cursor;
FloatPropertyRNA rna_ThemeConsole_select;


CollectionPropertyRNA rna_ThemeLogicEditor_rna_properties;
PointerPropertyRNA rna_ThemeLogicEditor_rna_type;
PointerPropertyRNA rna_ThemeLogicEditor_space;


CollectionPropertyRNA rna_ThemeClipEditor_rna_properties;
PointerPropertyRNA rna_ThemeClipEditor_rna_type;
PointerPropertyRNA rna_ThemeClipEditor_space;
PointerPropertyRNA rna_ThemeClipEditor_space_list;
FloatPropertyRNA rna_ThemeClipEditor_marker_outline;
FloatPropertyRNA rna_ThemeClipEditor_marker;
FloatPropertyRNA rna_ThemeClipEditor_active_marker;
FloatPropertyRNA rna_ThemeClipEditor_selected_marker;
FloatPropertyRNA rna_ThemeClipEditor_disabled_marker;
FloatPropertyRNA rna_ThemeClipEditor_locked_marker;
FloatPropertyRNA rna_ThemeClipEditor_path_before;
FloatPropertyRNA rna_ThemeClipEditor_path_after;
FloatPropertyRNA rna_ThemeClipEditor_frame_current;
FloatPropertyRNA rna_ThemeClipEditor_strips;
FloatPropertyRNA rna_ThemeClipEditor_strips_selected;
FloatPropertyRNA rna_ThemeClipEditor_handle_free;
FloatPropertyRNA rna_ThemeClipEditor_handle_auto;
FloatPropertyRNA rna_ThemeClipEditor_handle_align;
FloatPropertyRNA rna_ThemeClipEditor_handle_sel_free;
FloatPropertyRNA rna_ThemeClipEditor_handle_sel_auto;
FloatPropertyRNA rna_ThemeClipEditor_handle_sel_align;
FloatPropertyRNA rna_ThemeClipEditor_handle_auto_clamped;
FloatPropertyRNA rna_ThemeClipEditor_handle_sel_auto_clamped;
FloatPropertyRNA rna_ThemeClipEditor_handle_vertex;
FloatPropertyRNA rna_ThemeClipEditor_handle_vertex_select;
IntPropertyRNA rna_ThemeClipEditor_handle_vertex_size;


CollectionPropertyRNA rna_ThemeBoneColorSet_rna_properties;
PointerPropertyRNA rna_ThemeBoneColorSet_rna_type;
FloatPropertyRNA rna_ThemeBoneColorSet_normal;
FloatPropertyRNA rna_ThemeBoneColorSet_select;
FloatPropertyRNA rna_ThemeBoneColorSet_active;
BoolPropertyRNA rna_ThemeBoneColorSet_show_colored_constraints;


CollectionPropertyRNA rna_Theme_rna_properties;
PointerPropertyRNA rna_Theme_rna_type;
StringPropertyRNA rna_Theme_name;
EnumPropertyRNA rna_Theme_theme_area;
PointerPropertyRNA rna_Theme_user_interface;
PointerPropertyRNA rna_Theme_view_3d;
PointerPropertyRNA rna_Theme_graph_editor;
PointerPropertyRNA rna_Theme_file_browser;
PointerPropertyRNA rna_Theme_nla_editor;
PointerPropertyRNA rna_Theme_dopesheet_editor;
PointerPropertyRNA rna_Theme_image_editor;
PointerPropertyRNA rna_Theme_sequence_editor;
PointerPropertyRNA rna_Theme_properties;
PointerPropertyRNA rna_Theme_text_editor;
PointerPropertyRNA rna_Theme_timeline;
PointerPropertyRNA rna_Theme_node_editor;
PointerPropertyRNA rna_Theme_logic_editor;
PointerPropertyRNA rna_Theme_outliner;
PointerPropertyRNA rna_Theme_info;
PointerPropertyRNA rna_Theme_user_preferences;
PointerPropertyRNA rna_Theme_console;
CollectionPropertyRNA rna_Theme_bone_color_sets;
PointerPropertyRNA rna_Theme_clip_editor;


CollectionPropertyRNA rna_UserSolidLight_rna_properties;
PointerPropertyRNA rna_UserSolidLight_rna_type;
BoolPropertyRNA rna_UserSolidLight_use;
FloatPropertyRNA rna_UserSolidLight_direction;
FloatPropertyRNA rna_UserSolidLight_diffuse_color;
FloatPropertyRNA rna_UserSolidLight_specular_color;


CollectionPropertyRNA rna_WalkNavigation_rna_properties;
PointerPropertyRNA rna_WalkNavigation_rna_type;
FloatPropertyRNA rna_WalkNavigation_mouse_speed;
FloatPropertyRNA rna_WalkNavigation_walk_speed;
FloatPropertyRNA rna_WalkNavigation_walk_speed_factor;
FloatPropertyRNA rna_WalkNavigation_view_height;
FloatPropertyRNA rna_WalkNavigation_jump_height;
FloatPropertyRNA rna_WalkNavigation_teleport_time;
BoolPropertyRNA rna_WalkNavigation_use_gravity;
BoolPropertyRNA rna_WalkNavigation_use_mouse_reverse;


CollectionPropertyRNA rna_UserPreferences_rna_properties;
PointerPropertyRNA rna_UserPreferences_rna_type;
EnumPropertyRNA rna_UserPreferences_active_section;
CollectionPropertyRNA rna_UserPreferences_themes;
CollectionPropertyRNA rna_UserPreferences_ui_styles;
CollectionPropertyRNA rna_UserPreferences_addons;
CollectionPropertyRNA rna_UserPreferences_autoexec_paths;
PointerPropertyRNA rna_UserPreferences_view;
PointerPropertyRNA rna_UserPreferences_edit;
PointerPropertyRNA rna_UserPreferences_inputs;
PointerPropertyRNA rna_UserPreferences_filepaths;
PointerPropertyRNA rna_UserPreferences_system;


CollectionPropertyRNA rna_Addons_rna_properties;
PointerPropertyRNA rna_Addons_rna_type;

extern FunctionRNA rna_Addons_new_func;
extern PointerPropertyRNA rna_Addons_new_addon;

extern FunctionRNA rna_Addons_remove_func;
extern PointerPropertyRNA rna_Addons_remove_addon;



CollectionPropertyRNA rna_PathCompareCollection_rna_properties;
PointerPropertyRNA rna_PathCompareCollection_rna_type;

extern FunctionRNA rna_PathCompareCollection_new_func;
extern PointerPropertyRNA rna_PathCompareCollection_new_pathcmp;

extern FunctionRNA rna_PathCompareCollection_remove_func;
extern PointerPropertyRNA rna_PathCompareCollection_remove_pathcmp;



CollectionPropertyRNA rna_UserPreferencesView_rna_properties;
PointerPropertyRNA rna_UserPreferencesView_rna_type;
BoolPropertyRNA rna_UserPreferencesView_show_tooltips;
BoolPropertyRNA rna_UserPreferencesView_show_tooltips_python;
BoolPropertyRNA rna_UserPreferencesView_show_object_info;
BoolPropertyRNA rna_UserPreferencesView_use_global_scene;
BoolPropertyRNA rna_UserPreferencesView_show_large_cursors;
BoolPropertyRNA rna_UserPreferencesView_show_view_name;
BoolPropertyRNA rna_UserPreferencesView_show_splash;
BoolPropertyRNA rna_UserPreferencesView_show_playback_fps;
BoolPropertyRNA rna_UserPreferencesView_use_mouse_over_open;
IntPropertyRNA rna_UserPreferencesView_open_toplevel_delay;
IntPropertyRNA rna_UserPreferencesView_open_sublevel_delay;
IntPropertyRNA rna_UserPreferencesView_pie_initial_timeout;
IntPropertyRNA rna_UserPreferencesView_pie_animation_timeout;
IntPropertyRNA rna_UserPreferencesView_pie_menu_radius;
IntPropertyRNA rna_UserPreferencesView_pie_menu_threshold;
IntPropertyRNA rna_UserPreferencesView_pie_menu_confirm;
BoolPropertyRNA rna_UserPreferencesView_use_quit_dialog;
IntPropertyRNA rna_UserPreferencesView_open_left_mouse_delay;
IntPropertyRNA rna_UserPreferencesView_open_right_mouse_delay;
BoolPropertyRNA rna_UserPreferencesView_show_column_layout;
BoolPropertyRNA rna_UserPreferencesView_use_directional_menus;
BoolPropertyRNA rna_UserPreferencesView_use_global_pivot;
BoolPropertyRNA rna_UserPreferencesView_use_mouse_depth_navigate;
BoolPropertyRNA rna_UserPreferencesView_use_mouse_depth_cursor;
BoolPropertyRNA rna_UserPreferencesView_use_camera_lock_parent;
BoolPropertyRNA rna_UserPreferencesView_use_zoom_to_mouse;
BoolPropertyRNA rna_UserPreferencesView_use_auto_perspective;
BoolPropertyRNA rna_UserPreferencesView_use_rotate_around_active;
BoolPropertyRNA rna_UserPreferencesView_show_mini_axis;
IntPropertyRNA rna_UserPreferencesView_mini_axis_size;
IntPropertyRNA rna_UserPreferencesView_mini_axis_brightness;
IntPropertyRNA rna_UserPreferencesView_smooth_view;
IntPropertyRNA rna_UserPreferencesView_rotation_angle;
BoolPropertyRNA rna_UserPreferencesView_show_manipulator;
IntPropertyRNA rna_UserPreferencesView_manipulator_size;
IntPropertyRNA rna_UserPreferencesView_manipulator_handle_size;
IntPropertyRNA rna_UserPreferencesView_manipulator_hotspot;
IntPropertyRNA rna_UserPreferencesView_object_origin_size;
IntPropertyRNA rna_UserPreferencesView_view2d_grid_spacing_min;
EnumPropertyRNA rna_UserPreferencesView_timecode_style;


CollectionPropertyRNA rna_UserPreferencesEdit_rna_properties;
PointerPropertyRNA rna_UserPreferencesEdit_rna_type;
EnumPropertyRNA rna_UserPreferencesEdit_material_link;
EnumPropertyRNA rna_UserPreferencesEdit_object_align;
BoolPropertyRNA rna_UserPreferencesEdit_use_enter_edit_mode;
BoolPropertyRNA rna_UserPreferencesEdit_use_drag_immediately;
IntPropertyRNA rna_UserPreferencesEdit_undo_steps;
IntPropertyRNA rna_UserPreferencesEdit_undo_memory_limit;
BoolPropertyRNA rna_UserPreferencesEdit_use_global_undo;
BoolPropertyRNA rna_UserPreferencesEdit_use_auto_keying;
EnumPropertyRNA rna_UserPreferencesEdit_auto_keying_mode;
BoolPropertyRNA rna_UserPreferencesEdit_use_keyframe_insert_available;
BoolPropertyRNA rna_UserPreferencesEdit_use_auto_keying_warning;
BoolPropertyRNA rna_UserPreferencesEdit_use_keyframe_insert_needed;
BoolPropertyRNA rna_UserPreferencesEdit_use_visual_keying;
BoolPropertyRNA rna_UserPreferencesEdit_use_insertkey_xyz_to_rgb;
EnumPropertyRNA rna_UserPreferencesEdit_keyframe_new_interpolation_type;
EnumPropertyRNA rna_UserPreferencesEdit_keyframe_new_handle_type;
BoolPropertyRNA rna_UserPreferencesEdit_use_negative_frames;
FloatPropertyRNA rna_UserPreferencesEdit_fcurve_unselected_alpha;
IntPropertyRNA rna_UserPreferencesEdit_grease_pencil_manhattan_distance;
IntPropertyRNA rna_UserPreferencesEdit_grease_pencil_euclidean_distance;
BoolPropertyRNA rna_UserPreferencesEdit_use_grease_pencil_smooth_stroke;
BoolPropertyRNA rna_UserPreferencesEdit_use_grease_pencil_simplify_stroke;
IntPropertyRNA rna_UserPreferencesEdit_grease_pencil_eraser_radius;
FloatPropertyRNA rna_UserPreferencesEdit_grease_pencil_default_color;
FloatPropertyRNA rna_UserPreferencesEdit_sculpt_paint_overlay_color;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_mesh;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_surface;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_curve;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_text;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_metaball;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_armature;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_lamp;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_material;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_texture;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_fcurve;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_action;
BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_particle;


CollectionPropertyRNA rna_UserPreferencesInput_rna_properties;
PointerPropertyRNA rna_UserPreferencesInput_rna_type;
EnumPropertyRNA rna_UserPreferencesInput_select_mouse;
EnumPropertyRNA rna_UserPreferencesInput_view_zoom_method;
EnumPropertyRNA rna_UserPreferencesInput_view_zoom_axis;
BoolPropertyRNA rna_UserPreferencesInput_invert_mouse_zoom;
EnumPropertyRNA rna_UserPreferencesInput_view_rotate_method;
BoolPropertyRNA rna_UserPreferencesInput_use_mouse_continuous;
EnumPropertyRNA rna_UserPreferencesInput_navigation_mode;
PointerPropertyRNA rna_UserPreferencesInput_walk_navigation;
IntPropertyRNA rna_UserPreferencesInput_drag_threshold;
IntPropertyRNA rna_UserPreferencesInput_tweak_threshold;
FloatPropertyRNA rna_UserPreferencesInput_ndof_sensitivity;
FloatPropertyRNA rna_UserPreferencesInput_ndof_orbit_sensitivity;
BoolPropertyRNA rna_UserPreferencesInput_ndof_pan_yz_swap_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_zoom_invert;
BoolPropertyRNA rna_UserPreferencesInput_ndof_show_guide;
EnumPropertyRNA rna_UserPreferencesInput_ndof_view_navigate_method;
EnumPropertyRNA rna_UserPreferencesInput_ndof_view_rotate_method;
BoolPropertyRNA rna_UserPreferencesInput_ndof_rotx_invert_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_roty_invert_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_rotz_invert_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_panx_invert_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_pany_invert_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_panz_invert_axis;
BoolPropertyRNA rna_UserPreferencesInput_ndof_lock_horizon;
BoolPropertyRNA rna_UserPreferencesInput_ndof_fly_helicopter;
IntPropertyRNA rna_UserPreferencesInput_mouse_double_click_time;
BoolPropertyRNA rna_UserPreferencesInput_use_mouse_emulate_3_button;
BoolPropertyRNA rna_UserPreferencesInput_use_emulate_numpad;
BoolPropertyRNA rna_UserPreferencesInput_use_mouse_mmb_paste;
BoolPropertyRNA rna_UserPreferencesInput_invert_zoom_wheel;
IntPropertyRNA rna_UserPreferencesInput_wheel_scroll_lines;
BoolPropertyRNA rna_UserPreferencesInput_use_trackpad_natural;
StringPropertyRNA rna_UserPreferencesInput_active_keyconfig;


CollectionPropertyRNA rna_UserPreferencesFilePaths_rna_properties;
PointerPropertyRNA rna_UserPreferencesFilePaths_rna_type;
BoolPropertyRNA rna_UserPreferencesFilePaths_show_hidden_files_datablocks;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_filter_files;
BoolPropertyRNA rna_UserPreferencesFilePaths_hide_recent_locations;
BoolPropertyRNA rna_UserPreferencesFilePaths_hide_system_bookmarks;
BoolPropertyRNA rna_UserPreferencesFilePaths_show_thumbnails;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_relative_paths;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_file_compression;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_load_ui;
StringPropertyRNA rna_UserPreferencesFilePaths_font_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_texture_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_render_output_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_script_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_i18n_branches_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_sound_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_temporary_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_render_cache_directory;
StringPropertyRNA rna_UserPreferencesFilePaths_image_editor;
StringPropertyRNA rna_UserPreferencesFilePaths_animation_player;
EnumPropertyRNA rna_UserPreferencesFilePaths_animation_player_preset;
IntPropertyRNA rna_UserPreferencesFilePaths_save_version;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_auto_save_temporary_files;
IntPropertyRNA rna_UserPreferencesFilePaths_auto_save_time;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_keep_session;
IntPropertyRNA rna_UserPreferencesFilePaths_recent_files;
BoolPropertyRNA rna_UserPreferencesFilePaths_use_save_preview_images;


CollectionPropertyRNA rna_UserPreferencesSystem_rna_properties;
PointerPropertyRNA rna_UserPreferencesSystem_rna_type;
BoolPropertyRNA rna_UserPreferencesSystem_use_international_fonts;
IntPropertyRNA rna_UserPreferencesSystem_dpi;
EnumPropertyRNA rna_UserPreferencesSystem_virtual_pixel_mode;
StringPropertyRNA rna_UserPreferencesSystem_font_path_ui;
IntPropertyRNA rna_UserPreferencesSystem_scrollback;
StringPropertyRNA rna_UserPreferencesSystem_author;
EnumPropertyRNA rna_UserPreferencesSystem_language;
BoolPropertyRNA rna_UserPreferencesSystem_use_translate_tooltips;
BoolPropertyRNA rna_UserPreferencesSystem_use_translate_interface;
BoolPropertyRNA rna_UserPreferencesSystem_use_translate_new_dataname;
BoolPropertyRNA rna_UserPreferencesSystem_use_textured_fonts;
CollectionPropertyRNA rna_UserPreferencesSystem_solid_lights;
BoolPropertyRNA rna_UserPreferencesSystem_use_weight_color_range;
PointerPropertyRNA rna_UserPreferencesSystem_weight_color_range;
EnumPropertyRNA rna_UserPreferencesSystem_color_picker_type;
BoolPropertyRNA rna_UserPreferencesSystem_use_preview_images;
BoolPropertyRNA rna_UserPreferencesSystem_use_scripts_auto_execute;
BoolPropertyRNA rna_UserPreferencesSystem_use_tabs_as_spaces;
IntPropertyRNA rna_UserPreferencesSystem_prefetch_frames;
IntPropertyRNA rna_UserPreferencesSystem_memory_cache_limit;
IntPropertyRNA rna_UserPreferencesSystem_frame_server_port;
FloatPropertyRNA rna_UserPreferencesSystem_gl_clip_alpha;
BoolPropertyRNA rna_UserPreferencesSystem_use_mipmaps;
BoolPropertyRNA rna_UserPreferencesSystem_use_16bit_textures;
BoolPropertyRNA rna_UserPreferencesSystem_use_gpu_mipmap;
EnumPropertyRNA rna_UserPreferencesSystem_image_draw_method;
BoolPropertyRNA rna_UserPreferencesSystem_use_vertex_buffer_objects;
EnumPropertyRNA rna_UserPreferencesSystem_anisotropic_filter;
EnumPropertyRNA rna_UserPreferencesSystem_gl_texture_limit;
IntPropertyRNA rna_UserPreferencesSystem_texture_time_out;
IntPropertyRNA rna_UserPreferencesSystem_texture_collection_rate;
EnumPropertyRNA rna_UserPreferencesSystem_window_draw_method;
EnumPropertyRNA rna_UserPreferencesSystem_audio_mixing_buffer;
EnumPropertyRNA rna_UserPreferencesSystem_audio_device;
EnumPropertyRNA rna_UserPreferencesSystem_audio_sample_rate;
EnumPropertyRNA rna_UserPreferencesSystem_audio_sample_format;
EnumPropertyRNA rna_UserPreferencesSystem_audio_channels;
IntPropertyRNA rna_UserPreferencesSystem_screencast_fps;
IntPropertyRNA rna_UserPreferencesSystem_screencast_wait_time;
BoolPropertyRNA rna_UserPreferencesSystem_use_text_antialiasing;
EnumPropertyRNA rna_UserPreferencesSystem_select_method;
EnumPropertyRNA rna_UserPreferencesSystem_multi_sample;
BoolPropertyRNA rna_UserPreferencesSystem_use_region_overlap;

extern FunctionRNA rna_UserPreferencesSystem_is_occlusion_query_supported_func;
extern BoolPropertyRNA rna_UserPreferencesSystem_is_occlusion_query_supported_is_supported;



CollectionPropertyRNA rna_Addon_rna_properties;
PointerPropertyRNA rna_Addon_rna_type;
StringPropertyRNA rna_Addon_module;
PointerPropertyRNA rna_Addon_preferences;


CollectionPropertyRNA rna_AddonPreferences_rna_properties;
PointerPropertyRNA rna_AddonPreferences_rna_type;
StringPropertyRNA rna_AddonPreferences_bl_idname;


CollectionPropertyRNA rna_PathCompare_rna_properties;
PointerPropertyRNA rna_PathCompare_rna_type;
StringPropertyRNA rna_PathCompare_path;
BoolPropertyRNA rna_PathCompare_use_glob;

static PointerRNA ThemeFontStyle_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeFontStyle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeFontStyle_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeFontStyle_rna_properties_get(iter);
}

void ThemeFontStyle_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeFontStyle_rna_properties_get(iter);
}

void ThemeFontStyle_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeFontStyle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeFontStyle_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ThemeFontStyle_points_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (int)(data->points);
}

void ThemeFontStyle_points_set(PointerRNA *ptr, int value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->points = CLAMPIS(value, 6, 48);
}

int ThemeFontStyle_font_kerning_style_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (int)(data->kerning);
}

void ThemeFontStyle_font_kerning_style_set(PointerRNA *ptr, int value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->kerning = value;
}

int ThemeFontStyle_shadow_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (int)(data->shadow);
}

void ThemeFontStyle_shadow_set(PointerRNA *ptr, int value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->shadow = CLAMPIS(value, 0, 5);
}

int ThemeFontStyle_shadow_offset_x_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (int)(data->shadx);
}

void ThemeFontStyle_shadow_offset_x_set(PointerRNA *ptr, int value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->shadx = CLAMPIS(value, -10, 10);
}

int ThemeFontStyle_shadow_offset_y_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (int)(data->shady);
}

void ThemeFontStyle_shadow_offset_y_set(PointerRNA *ptr, int value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->shady = CLAMPIS(value, -10, 10);
}

float ThemeFontStyle_shadow_alpha_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (float)(data->shadowalpha);
}

void ThemeFontStyle_shadow_alpha_set(PointerRNA *ptr, float value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->shadowalpha = CLAMPIS(value, 0.0f, 1.0f);
}

float ThemeFontStyle_shadow_value_get(PointerRNA *ptr)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	return (float)(data->shadowcolor);
}

void ThemeFontStyle_shadow_value_set(PointerRNA *ptr, float value)
{
	uiFontStyle *data = (uiFontStyle *)(ptr->data);
	data->shadowcolor = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA ThemeStyle_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeStyle_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeStyle_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeStyle_rna_properties_get(iter);
}

void ThemeStyle_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeStyle_rna_properties_get(iter);
}

void ThemeStyle_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeStyle_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeStyle_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeStyle_panel_title_get(PointerRNA *ptr)
{
	uiStyle *data = (uiStyle *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeFontStyle, &data->paneltitle);
}

PointerRNA ThemeStyle_widget_label_get(PointerRNA *ptr)
{
	uiStyle *data = (uiStyle *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeFontStyle, &data->widgetlabel);
}

PointerRNA ThemeStyle_widget_get(PointerRNA *ptr)
{
	uiStyle *data = (uiStyle *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeFontStyle, &data->widget);
}

static PointerRNA ThemeWidgetColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeWidgetColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeWidgetColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeWidgetColors_rna_properties_get(iter);
}

void ThemeWidgetColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeWidgetColors_rna_properties_get(iter);
}

void ThemeWidgetColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeWidgetColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeWidgetColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ThemeWidgetColors_outline_get(PointerRNA *ptr, float values[3])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->outline[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetColors_outline_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->outline[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetColors_inner_get(PointerRNA *ptr, float values[4])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->inner[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetColors_inner_set(PointerRNA *ptr, const float values[4])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->inner[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetColors_inner_sel_get(PointerRNA *ptr, float values[4])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->inner_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetColors_inner_sel_set(PointerRNA *ptr, const float values[4])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->inner_sel[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetColors_item_get(PointerRNA *ptr, float values[4])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->item[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetColors_item_set(PointerRNA *ptr, const float values[4])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->item[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetColors_text_get(PointerRNA *ptr, float values[3])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->text[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetColors_text_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->text[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetColors_text_sel_get(PointerRNA *ptr, float values[3])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->text_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetColors_text_sel_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->text_sel[i] = FTOCHAR(values[i]);
	}
}

int ThemeWidgetColors_show_shaded_get(PointerRNA *ptr)
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	return (((data->shaded) & 1) != 0);
}

void ThemeWidgetColors_show_shaded_set(PointerRNA *ptr, int value)
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	if (value) data->shaded |= 1;
	else data->shaded &= ~1;
}

int ThemeWidgetColors_shadetop_get(PointerRNA *ptr)
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	return (int)(data->shadetop);
}

void ThemeWidgetColors_shadetop_set(PointerRNA *ptr, int value)
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	data->shadetop = CLAMPIS(value, -100, 100);
}

int ThemeWidgetColors_shadedown_get(PointerRNA *ptr)
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	return (int)(data->shadedown);
}

void ThemeWidgetColors_shadedown_set(PointerRNA *ptr, int value)
{
	uiWidgetColors *data = (uiWidgetColors *)(ptr->data);
	data->shadedown = CLAMPIS(value, -100, 100);
}

static PointerRNA ThemeWidgetStateColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeWidgetStateColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeWidgetStateColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeWidgetStateColors_rna_properties_get(iter);
}

void ThemeWidgetStateColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeWidgetStateColors_rna_properties_get(iter);
}

void ThemeWidgetStateColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeWidgetStateColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeWidgetStateColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ThemeWidgetStateColors_inner_anim_get(PointerRNA *ptr, float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->inner_anim[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetStateColors_inner_anim_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->inner_anim[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetStateColors_inner_anim_sel_get(PointerRNA *ptr, float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->inner_anim_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetStateColors_inner_anim_sel_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->inner_anim_sel[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetStateColors_inner_key_get(PointerRNA *ptr, float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->inner_key[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetStateColors_inner_key_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->inner_key[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetStateColors_inner_key_sel_get(PointerRNA *ptr, float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->inner_key_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetStateColors_inner_key_sel_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->inner_key_sel[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetStateColors_inner_driven_get(PointerRNA *ptr, float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->inner_driven[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetStateColors_inner_driven_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->inner_driven[i] = FTOCHAR(values[i]);
	}
}

void ThemeWidgetStateColors_inner_driven_sel_get(PointerRNA *ptr, float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->inner_driven_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeWidgetStateColors_inner_driven_sel_set(PointerRNA *ptr, const float values[3])
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->inner_driven_sel[i] = FTOCHAR(values[i]);
	}
}

float ThemeWidgetStateColors_blend_get(PointerRNA *ptr)
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	return (float)(data->blend);
}

void ThemeWidgetStateColors_blend_set(PointerRNA *ptr, float value)
{
	uiWidgetStateColors *data = (uiWidgetStateColors *)(ptr->data);
	data->blend = CLAMPIS(value, 0.0f, 1.0f);
}

static PointerRNA ThemePanelColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemePanelColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemePanelColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemePanelColors_rna_properties_get(iter);
}

void ThemePanelColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemePanelColors_rna_properties_get(iter);
}

void ThemePanelColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemePanelColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemePanelColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ThemePanelColors_header_get(PointerRNA *ptr, float values[4])
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->header[i] * (1.0f / 255.0f));
	}
}

void ThemePanelColors_header_set(PointerRNA *ptr, const float values[4])
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->header[i] = FTOCHAR(values[i]);
	}
}

void ThemePanelColors_back_get(PointerRNA *ptr, float values[4])
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->back[i] * (1.0f / 255.0f));
	}
}

void ThemePanelColors_back_set(PointerRNA *ptr, const float values[4])
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->back[i] = FTOCHAR(values[i]);
	}
}

int ThemePanelColors_show_header_get(PointerRNA *ptr)
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	return (int)(data->show_header);
}

void ThemePanelColors_show_header_set(PointerRNA *ptr, int value)
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	data->show_header = value;
}

int ThemePanelColors_show_back_get(PointerRNA *ptr)
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	return (int)(data->show_back);
}

void ThemePanelColors_show_back_set(PointerRNA *ptr, int value)
{
	uiPanelColors *data = (uiPanelColors *)(ptr->data);
	data->show_back = value;
}

static PointerRNA ThemeGradientColors_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeGradientColors_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeGradientColors_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeGradientColors_rna_properties_get(iter);
}

void ThemeGradientColors_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeGradientColors_rna_properties_get(iter);
}

void ThemeGradientColors_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeGradientColors_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeGradientColors_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int ThemeGradientColors_show_grad_get(PointerRNA *ptr)
{
	uiGradientColors *data = (uiGradientColors *)(ptr->data);
	return (int)(data->show_grad);
}

void ThemeGradientColors_show_grad_set(PointerRNA *ptr, int value)
{
	uiGradientColors *data = (uiGradientColors *)(ptr->data);
	data->show_grad = value;
}

void ThemeGradientColors_gradient_get(PointerRNA *ptr, float values[3])
{
	uiGradientColors *data = (uiGradientColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->gradient[i] * (1.0f / 255.0f));
	}
}

void ThemeGradientColors_gradient_set(PointerRNA *ptr, const float values[3])
{
	uiGradientColors *data = (uiGradientColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->gradient[i] = FTOCHAR(values[i]);
	}
}

void ThemeGradientColors_high_gradient_get(PointerRNA *ptr, float values[3])
{
	uiGradientColors *data = (uiGradientColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->high_gradient[i] * (1.0f / 255.0f));
	}
}

void ThemeGradientColors_high_gradient_set(PointerRNA *ptr, const float values[3])
{
	uiGradientColors *data = (uiGradientColors *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->high_gradient[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeUserInterface_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeUserInterface_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeUserInterface_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeUserInterface_rna_properties_get(iter);
}

void ThemeUserInterface_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeUserInterface_rna_properties_get(iter);
}

void ThemeUserInterface_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeUserInterface_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeUserInterface_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeUserInterface_wcol_regular_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_regular);
}

PointerRNA ThemeUserInterface_wcol_tool_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_tool);
}

PointerRNA ThemeUserInterface_wcol_radio_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_radio);
}

PointerRNA ThemeUserInterface_wcol_text_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_text);
}

PointerRNA ThemeUserInterface_wcol_option_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_option);
}

PointerRNA ThemeUserInterface_wcol_toggle_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_toggle);
}

PointerRNA ThemeUserInterface_wcol_num_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_num);
}

PointerRNA ThemeUserInterface_wcol_numslider_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_numslider);
}

PointerRNA ThemeUserInterface_wcol_box_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_box);
}

PointerRNA ThemeUserInterface_wcol_menu_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_menu);
}

PointerRNA ThemeUserInterface_wcol_pulldown_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_pulldown);
}

PointerRNA ThemeUserInterface_wcol_menu_back_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_menu_back);
}

PointerRNA ThemeUserInterface_wcol_pie_menu_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_pie_menu);
}

PointerRNA ThemeUserInterface_wcol_tooltip_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_tooltip);
}

PointerRNA ThemeUserInterface_wcol_menu_item_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_menu_item);
}

PointerRNA ThemeUserInterface_wcol_scroll_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_scroll);
}

PointerRNA ThemeUserInterface_wcol_progress_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_progress);
}

PointerRNA ThemeUserInterface_wcol_list_item_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetColors, &data->wcol_list_item);
}

PointerRNA ThemeUserInterface_wcol_state_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeWidgetStateColors, &data->wcol_state);
}

float ThemeUserInterface_menu_shadow_fac_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return (float)(data->menu_shadow_fac);
}

void ThemeUserInterface_menu_shadow_fac_set(PointerRNA *ptr, float value)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	data->menu_shadow_fac = CLAMPIS(value, 0.0099999998f, 1.0f);
}

int ThemeUserInterface_menu_shadow_width_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return (int)(data->menu_shadow_width);
}

void ThemeUserInterface_menu_shadow_width_set(PointerRNA *ptr, int value)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	data->menu_shadow_width = CLAMPIS(value, 0, 24);
}

void ThemeUserInterface_icon_file_get(PointerRNA *ptr, char *value)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	BLI_strncpy(value, data->iconfile, 256);
}

int ThemeUserInterface_icon_file_length(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return strlen(data->iconfile);
}

void ThemeUserInterface_icon_file_set(PointerRNA *ptr, const char *value)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	BLI_strncpy(data->iconfile, value, 256);
}

float ThemeUserInterface_icon_alpha_get(PointerRNA *ptr)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	return (float)(data->icon_alpha);
}

void ThemeUserInterface_icon_alpha_set(PointerRNA *ptr, float value)
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	data->icon_alpha = CLAMPIS(value, 0.0f, 1.0f);
}

void ThemeUserInterface_emboss_get(PointerRNA *ptr, float values[4])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->emboss[i] * (1.0f / 255.0f));
	}
}

void ThemeUserInterface_emboss_set(PointerRNA *ptr, const float values[4])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->emboss[i] = FTOCHAR(values[i]);
	}
}

void ThemeUserInterface_axis_x_get(PointerRNA *ptr, float values[3])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->xaxis[i] * (1.0f / 255.0f));
	}
}

void ThemeUserInterface_axis_x_set(PointerRNA *ptr, const float values[3])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->xaxis[i] = FTOCHAR(values[i]);
	}
}

void ThemeUserInterface_axis_y_get(PointerRNA *ptr, float values[3])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->yaxis[i] * (1.0f / 255.0f));
	}
}

void ThemeUserInterface_axis_y_set(PointerRNA *ptr, const float values[3])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->yaxis[i] = FTOCHAR(values[i]);
	}
}

void ThemeUserInterface_axis_z_get(PointerRNA *ptr, float values[3])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->zaxis[i] * (1.0f / 255.0f));
	}
}

void ThemeUserInterface_axis_z_set(PointerRNA *ptr, const float values[3])
{
	ThemeUI *data = (ThemeUI *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->zaxis[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeSpaceGeneric_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeSpaceGeneric_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeSpaceGeneric_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeSpaceGeneric_rna_properties_get(iter);
}

void ThemeSpaceGeneric_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeSpaceGeneric_rna_properties_get(iter);
}

void ThemeSpaceGeneric_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeSpaceGeneric_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeSpaceGeneric_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ThemeSpaceGeneric_back_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->back[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_back_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->back[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_title_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->title[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_title_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->title[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->text_hi[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_header_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->header[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_header_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->header[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_header_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->header_text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_header_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->header_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_header_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->header_text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_header_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->header_text_hi[i] = FTOCHAR(values[i]);
	}
}

PointerRNA ThemeSpaceGeneric_panelcolors_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemePanelColors, &data->panelcolors);
}

void ThemeSpaceGeneric_button_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->button[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_button_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->button[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_button_title_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->button_title[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_button_title_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->button_title[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_button_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->button_text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_button_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->button_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_button_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->button_text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_button_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->button_text_hi[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_tab_active_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->tab_active[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_tab_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->tab_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_tab_inactive_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->tab_inactive[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_tab_inactive_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->tab_inactive[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_tab_back_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->tab_back[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_tab_back_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->tab_back[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGeneric_tab_outline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->tab_outline[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGeneric_tab_outline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->tab_outline[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeSpaceGradient_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeSpaceGradient_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeSpaceGradient_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeSpaceGradient_rna_properties_get(iter);
}

void ThemeSpaceGradient_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeSpaceGradient_rna_properties_get(iter);
}

void ThemeSpaceGradient_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeSpaceGradient_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeSpaceGradient_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeSpaceGradient_gradients_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeGradientColors, &data->gradients);
}

void ThemeSpaceGradient_title_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->title[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_title_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->title[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->text_hi[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_header_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->header[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_header_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->header[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_header_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->header_text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_header_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->header_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_header_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->header_text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_header_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->header_text_hi[i] = FTOCHAR(values[i]);
	}
}

PointerRNA ThemeSpaceGradient_panelcolors_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemePanelColors, &data->panelcolors);
}

void ThemeSpaceGradient_button_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->button[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_button_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->button[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_button_title_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->button_title[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_button_title_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->button_title[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_button_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->button_text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_button_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->button_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_button_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->button_text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_button_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->button_text_hi[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_tab_active_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->tab_active[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_tab_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->tab_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_tab_inactive_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->tab_inactive[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_tab_inactive_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->tab_inactive[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_tab_back_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->tab_back[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_tab_back_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->tab_back[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceGradient_tab_outline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->tab_outline[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceGradient_tab_outline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->tab_outline[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeSpaceListGeneric_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeSpaceListGeneric_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeSpaceListGeneric_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeSpaceListGeneric_rna_properties_get(iter);
}

void ThemeSpaceListGeneric_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeSpaceListGeneric_rna_properties_get(iter);
}

void ThemeSpaceListGeneric_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeSpaceListGeneric_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeSpaceListGeneric_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ThemeSpaceListGeneric_list_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->list[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceListGeneric_list_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->list[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceListGeneric_list_title_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->list_title[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceListGeneric_list_title_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->list_title[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceListGeneric_list_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->list_text[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceListGeneric_list_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->list_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeSpaceListGeneric_list_text_hi_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->list_text_hi[i] * (1.0f / 255.0f));
	}
}

void ThemeSpaceListGeneric_list_text_hi_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->list_text_hi[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeView3D_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeView3D_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeView3D_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeView3D_rna_properties_get(iter);
}

void ThemeView3D_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeView3D_rna_properties_get(iter);
}

void ThemeView3D_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeView3D_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeView3D_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeView3D_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_gradient_get(ptr);
}

void ThemeView3D_grid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_grid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_wire_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->wire[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_wire_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->wire[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_wire_edit_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->wire_edit[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_wire_edit_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->wire_edit[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_lamp_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->lamp[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_lamp_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->lamp[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_speaker_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->speaker[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_speaker_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->speaker[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_camera_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->camera[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_camera_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->camera[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_view_overlay_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->view_overlay[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_view_overlay_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->view_overlay[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_empty_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->empty[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_empty_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->empty[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_object_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->select[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_object_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->select[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_object_active_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->active[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_object_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->active[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_object_grouped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->group[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_object_grouped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->group[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_object_grouped_active_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->group_active[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_object_grouped_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->group_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_transform_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->transform[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_transform_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->transform[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_vertex_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_vertex_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_vertex_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_vertex_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_select[i] = FTOCHAR(values[i]);
	}
}

int ThemeView3D_vertex_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->vertex_size);
}

void ThemeView3D_vertex_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->vertex_size = CLAMPIS(value, 1, 10);
}

void ThemeView3D_vertex_unreferenced_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_unreferenced[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_vertex_unreferenced_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_unreferenced[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_edge_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_select[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_edge_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_edge_seam_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_seam[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_edge_seam_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_seam[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_edge_sharp_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_sharp[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_edge_sharp_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_sharp[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_edge_crease_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_crease[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_edge_crease_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_crease[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_edge_facesel_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_facesel[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_edge_facesel_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_facesel[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_freestyle_edge_mark_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->freestyle_edge_mark[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_freestyle_edge_mark_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->freestyle_edge_mark[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_face_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->face[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_face_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->face[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_face_select_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->face_select[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_face_select_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->face_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_face_dot_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->face_dot[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_face_dot_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->face_dot[i] = FTOCHAR(values[i]);
	}
}

int ThemeView3D_facedot_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->facedot_size);
}

void ThemeView3D_facedot_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->facedot_size = CLAMPIS(value, 1, 10);
}

void ThemeView3D_freestyle_face_mark_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->freestyle_face_mark[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_freestyle_face_mark_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->freestyle_face_mark[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_nurb_uline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nurb_uline[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_nurb_uline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nurb_uline[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_nurb_vline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nurb_vline[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_nurb_vline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nurb_vline[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_nurb_sel_uline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nurb_sel_uline[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_nurb_sel_uline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nurb_sel_uline[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_nurb_sel_vline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nurb_sel_vline[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_nurb_sel_vline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nurb_sel_vline[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_act_spline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->act_spline[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_act_spline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->act_spline[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_free[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_vect_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vect[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_vect_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vect[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_sel_vect_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_vect[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_sel_vect_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_vect[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_align[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_sel_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_free[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_sel_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_sel_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_sel_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_handle_sel_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_align[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_handle_sel_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_lastsel_point_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->lastsel_point[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_lastsel_point_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->lastsel_point[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_extra_edge_len_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->extra_edge_len[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_extra_edge_len_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->extra_edge_len[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_extra_edge_angle_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->extra_edge_angle[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_extra_edge_angle_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->extra_edge_angle[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_extra_face_angle_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->extra_face_angle[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_extra_face_angle_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->extra_face_angle[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_extra_face_area_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->extra_face_area[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_extra_face_area_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->extra_face_area[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_editmesh_active_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->editmesh_active[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_editmesh_active_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->editmesh_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_normal_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->normal[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_normal_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->normal[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_vertex_normal_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_normal[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_vertex_normal_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_normal[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_split_normal_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->loop_normal[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_split_normal_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->loop_normal[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_bone_solid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->bone_solid[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_bone_solid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->bone_solid[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_bone_pose_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->bone_pose[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_bone_pose_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->bone_pose[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_bone_pose_active_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->bone_pose_active[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_bone_pose_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->bone_pose_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

int ThemeView3D_outline_width_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->outline_width);
}

void ThemeView3D_outline_width_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->outline_width = CLAMPIS(value, 1, 5);
}

void ThemeView3D_bundle_solid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->bundle_solid[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_bundle_solid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->bundle_solid[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_camera_path_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->camera_path[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_camera_path_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->camera_path[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_skin_root_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->skin_root[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_skin_root_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->skin_root[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_paint_curve_handle_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->paint_curve_handle[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_paint_curve_handle_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->paint_curve_handle[i] = FTOCHAR(values[i]);
	}
}

void ThemeView3D_paint_curve_pivot_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->paint_curve_pivot[i] * (1.0f / 255.0f));
	}
}

void ThemeView3D_paint_curve_pivot_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->paint_curve_pivot[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeGraphEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeGraphEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeGraphEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeGraphEditor_rna_properties_get(iter);
}

void ThemeGraphEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeGraphEditor_rna_properties_get(iter);
}

void ThemeGraphEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeGraphEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeGraphEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeGraphEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

PointerRNA ThemeGraphEditor_space_list_get(PointerRNA *ptr)
{
	return rna_Theme_space_list_generic_get(ptr);
}

void ThemeGraphEditor_grid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_grid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_window_sliders_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade1[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_window_sliders_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade1[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_channels_region_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade2[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_channels_region_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade2[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_dopesheet_channel_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->ds_channel[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_dopesheet_channel_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->ds_channel[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_dopesheet_subchannel_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->ds_subchannel[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_dopesheet_subchannel_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->ds_subchannel[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_channel_group_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->group[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_channel_group_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->group[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_active_channels_group_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->group_active[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_active_channels_group_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->group_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_vertex_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_vertex_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_vertex_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_vertex_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_select[i] = FTOCHAR(values[i]);
	}
}

int ThemeGraphEditor_vertex_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->vertex_size);
}

void ThemeGraphEditor_vertex_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->vertex_size = CLAMPIS(value, 1, 10);
}

void ThemeGraphEditor_vertex_unreferenced_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_unreferenced[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_vertex_unreferenced_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_unreferenced[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_free[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_vect_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vect[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_vect_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vect[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_sel_vect_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_vect[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_sel_vect_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_vect[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_align[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_sel_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_free[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_sel_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_sel_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_sel_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_sel_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_align[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_sel_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_auto_clamped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto_clamped[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_auto_clamped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto_clamped[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_sel_auto_clamped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto_clamped[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_sel_auto_clamped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto_clamped[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_lastsel_point_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->lastsel_point[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_lastsel_point_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->lastsel_point[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_vertex_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vertex[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_vertex_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vertex[i] = FTOCHAR(values[i]);
	}
}

void ThemeGraphEditor_handle_vertex_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeGraphEditor_handle_vertex_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vertex_select[i] = FTOCHAR(values[i]);
	}
}

int ThemeGraphEditor_handle_vertex_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->handle_vertex_size);
}

void ThemeGraphEditor_handle_vertex_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->handle_vertex_size = CLAMPIS(value, 0, 255);
}

static PointerRNA ThemeFileBrowser_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeFileBrowser_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeFileBrowser_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeFileBrowser_rna_properties_get(iter);
}

void ThemeFileBrowser_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeFileBrowser_rna_properties_get(iter);
}

void ThemeFileBrowser_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeFileBrowser_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeFileBrowser_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeFileBrowser_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

PointerRNA ThemeFileBrowser_space_list_get(PointerRNA *ptr)
{
	return rna_Theme_space_list_generic_get(ptr);
}

void ThemeFileBrowser_selected_file_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->hilite[i] * (1.0f / 255.0f));
	}
}

void ThemeFileBrowser_selected_file_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->hilite[i] = FTOCHAR(values[i]);
	}
}

void ThemeFileBrowser_scrollbar_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade1[i] * (1.0f / 255.0f));
	}
}

void ThemeFileBrowser_scrollbar_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade1[i] = FTOCHAR(values[i]);
	}
}

void ThemeFileBrowser_scroll_handle_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade2[i] * (1.0f / 255.0f));
	}
}

void ThemeFileBrowser_scroll_handle_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade2[i] = FTOCHAR(values[i]);
	}
}

void ThemeFileBrowser_active_file_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->active[i] * (1.0f / 255.0f));
	}
}

void ThemeFileBrowser_active_file_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->active[i] = FTOCHAR(values[i]);
	}
}

void ThemeFileBrowser_active_file_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeFileBrowser_active_file_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeNLAEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeNLAEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeNLAEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeNLAEditor_rna_properties_get(iter);
}

void ThemeNLAEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeNLAEditor_rna_properties_get(iter);
}

void ThemeNLAEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeNLAEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeNLAEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeNLAEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

PointerRNA ThemeNLAEditor_space_list_get(PointerRNA *ptr)
{
	return rna_Theme_space_list_generic_get(ptr);
}

void ThemeNLAEditor_grid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_grid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_view_sliders_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade1[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_view_sliders_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade1[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_active_action_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->anim_active[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_active_action_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->anim_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_active_action_unset_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->anim_non_active[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_active_action_unset_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->anim_non_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_strips_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->strip[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_strips_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->strip[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_strips_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->strip_select[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_strips_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->strip_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_transition_strips_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_transition[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_transition_strips_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_transition[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_transition_strips_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_transition_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_transition_strips_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_transition_sel[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_meta_strips_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_meta[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_meta_strips_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_meta[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_meta_strips_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_meta_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_meta_strips_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_meta_sel[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_sound_strips_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_sound[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_sound_strips_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_sound[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_sound_strips_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_sound_sel[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_sound_strips_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_sound_sel[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_tweak_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_tweaking[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_tweak_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_tweaking[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_tweak_duplicate_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nla_tweakdupli[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_tweak_duplicate_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nla_tweakdupli[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_keyframe_border_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->keyborder[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_keyframe_border_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->keyborder[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_keyframe_border_selected_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->keyborder_select[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_keyframe_border_selected_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->keyborder_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeNLAEditor_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeNLAEditor_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeDopeSheet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeDopeSheet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeDopeSheet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeDopeSheet_rna_properties_get(iter);
}

void ThemeDopeSheet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeDopeSheet_rna_properties_get(iter);
}

void ThemeDopeSheet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeDopeSheet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeDopeSheet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeDopeSheet_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

PointerRNA ThemeDopeSheet_space_list_get(PointerRNA *ptr)
{
	return rna_Theme_space_list_generic_get(ptr);
}

void ThemeDopeSheet_grid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_grid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_value_sliders_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->face[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_value_sliders_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->face[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_view_sliders_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade1[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_view_sliders_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade1[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_dopesheet_channel_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->ds_channel[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_dopesheet_channel_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->ds_channel[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_dopesheet_subchannel_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->ds_subchannel[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_dopesheet_subchannel_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->ds_subchannel[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_channels_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade2[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_channels_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade2[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_channels_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->hilite[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_channels_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->hilite[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_channel_group_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->group[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_channel_group_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->group[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_active_channels_group_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->group_active[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_active_channels_group_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->group_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_long_key_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->strip[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_long_key_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->strip[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_long_key_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->strip_select[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_long_key_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->strip_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_keyframe[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_keyframe[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_keyframe_select[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_keyframe_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_extreme_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_extreme[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_extreme_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_extreme[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_extreme_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_extreme_select[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_extreme_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_extreme_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_breakdown_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_breakdown[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_breakdown_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_breakdown[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_breakdown_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_breakdown_select[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_breakdown_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_breakdown_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_jitter_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_jitter[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_jitter_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_jitter[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_jitter_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->keytype_jitter_select[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_jitter_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->keytype_jitter_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_border_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->keyborder[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_border_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->keyborder[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_keyframe_border_selected_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->keyborder_select[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_keyframe_border_selected_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->keyborder_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeDopeSheet_summary_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->anim_active[i] * (1.0f / 255.0f));
	}
}

void ThemeDopeSheet_summary_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->anim_active[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeImageEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeImageEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeImageEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeImageEditor_rna_properties_get(iter);
}

void ThemeImageEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeImageEditor_rna_properties_get(iter);
}

void ThemeImageEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeImageEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeImageEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeImageEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeImageEditor_vertex_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_vertex_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_vertex_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_vertex_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_select[i] = FTOCHAR(values[i]);
	}
}

int ThemeImageEditor_vertex_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->vertex_size);
}

void ThemeImageEditor_vertex_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->vertex_size = CLAMPIS(value, 1, 10);
}

void ThemeImageEditor_vertex_unreferenced_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_unreferenced[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_vertex_unreferenced_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_unreferenced[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_face_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->face[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_face_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->face[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_face_select_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->face_select[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_face_select_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->face_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_face_dot_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->face_dot[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_face_dot_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->face_dot[i] = FTOCHAR(values[i]);
	}
}

int ThemeImageEditor_facedot_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->facedot_size);
}

void ThemeImageEditor_facedot_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->facedot_size = CLAMPIS(value, 1, 10);
}

void ThemeImageEditor_freestyle_face_mark_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->freestyle_face_mark[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_freestyle_face_mark_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->freestyle_face_mark[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_editmesh_active_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->editmesh_active[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_editmesh_active_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->editmesh_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_wire_edit_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->wire_edit[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_wire_edit_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->wire_edit[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_edge_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_select[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_edge_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_scope_back_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_back[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_scope_back_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_back[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_preview_stitch_face_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_stitch_face[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_preview_stitch_face_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_stitch_face[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_preview_stitch_edge_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_stitch_edge[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_preview_stitch_edge_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_stitch_edge[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_preview_stitch_vert_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_stitch_vert[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_preview_stitch_vert_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_stitch_vert[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_preview_stitch_stitchable_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_stitch_stitchable[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_preview_stitch_stitchable_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_stitch_stitchable[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_preview_stitch_unstitchable_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_stitch_unstitchable[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_preview_stitch_unstitchable_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_stitch_unstitchable[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_preview_stitch_active_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->preview_stitch_active[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_preview_stitch_active_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->preview_stitch_active[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_uv_shadow_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->uv_shadow[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_uv_shadow_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->uv_shadow[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_uv_others_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->uv_others[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_uv_others_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->uv_others[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_free[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_align[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_sel_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_free[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_sel_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_sel_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_sel_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_sel_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_align[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_sel_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_auto_clamped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto_clamped[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_auto_clamped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto_clamped[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_sel_auto_clamped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto_clamped[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_sel_auto_clamped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto_clamped[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_vertex_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vertex[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_vertex_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vertex[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_handle_vertex_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_handle_vertex_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vertex_select[i] = FTOCHAR(values[i]);
	}
}

int ThemeImageEditor_handle_vertex_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->handle_vertex_size);
}

void ThemeImageEditor_handle_vertex_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->handle_vertex_size = CLAMPIS(value, 0, 255);
}

void ThemeImageEditor_paint_curve_handle_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->paint_curve_handle[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_paint_curve_handle_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->paint_curve_handle[i] = FTOCHAR(values[i]);
	}
}

void ThemeImageEditor_paint_curve_pivot_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->paint_curve_pivot[i] * (1.0f / 255.0f));
	}
}

void ThemeImageEditor_paint_curve_pivot_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->paint_curve_pivot[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeSequenceEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeSequenceEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeSequenceEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeSequenceEditor_rna_properties_get(iter);
}

void ThemeSequenceEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeSequenceEditor_rna_properties_get(iter);
}

void ThemeSequenceEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeSequenceEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeSequenceEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeSequenceEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeSequenceEditor_grid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_grid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_window_sliders_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade1[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_window_sliders_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade1[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_movie_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->movie[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_movie_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->movie[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_movieclip_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->movieclip[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_movieclip_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->movieclip[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_image_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->image[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_image_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->image[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_scene_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->scene[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_scene_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->scene[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_audio_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->audio[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_audio_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->audio[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_effect_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->effect[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_effect_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->effect[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_transition_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->transition[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_transition_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->transition[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_meta_strip_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->meta[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_meta_strip_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->meta[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_keyframe_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_keyframe_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->vertex_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_draw_action_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->bone_pose[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_draw_action_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->bone_pose[i] = FTOCHAR(values[i]);
	}
}

void ThemeSequenceEditor_preview_back_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->preview_back[i] * (1.0f / 255.0f));
	}
}

void ThemeSequenceEditor_preview_back_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->preview_back[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeProperties_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeProperties_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeProperties_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeProperties_rna_properties_get(iter);
}

void ThemeProperties_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeProperties_rna_properties_get(iter);
}

void ThemeProperties_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeProperties_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeProperties_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeProperties_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

static PointerRNA ThemeTextEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeTextEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeTextEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeTextEditor_rna_properties_get(iter);
}

void ThemeTextEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeTextEditor_rna_properties_get(iter);
}

void ThemeTextEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeTextEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeTextEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeTextEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeTextEditor_line_numbers_background_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_line_numbers_background_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_selected_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade2[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_selected_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade2[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_cursor_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->hilite[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_cursor_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->hilite[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_builtin_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxb[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_builtin_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxb[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_symbols_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxs[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_symbols_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxs[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_special_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxv[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_special_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxv[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_preprocessor_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxd[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_preprocessor_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxd[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_reserved_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxr[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_reserved_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxr[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_comment_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxc[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_comment_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxc[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_string_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxl[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_string_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxl[i] = FTOCHAR(values[i]);
	}
}

void ThemeTextEditor_syntax_numbers_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxn[i] * (1.0f / 255.0f));
	}
}

void ThemeTextEditor_syntax_numbers_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxn[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeTimeline_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeTimeline_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeTimeline_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeTimeline_rna_properties_get(iter);
}

void ThemeTimeline_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeTimeline_rna_properties_get(iter);
}

void ThemeTimeline_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeTimeline_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeTimeline_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeTimeline_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeTimeline_grid_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->grid[i] * (1.0f / 255.0f));
	}
}

void ThemeTimeline_grid_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->grid[i] = FTOCHAR(values[i]);
	}
}

void ThemeTimeline_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeTimeline_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeNodeEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeNodeEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeNodeEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeNodeEditor_rna_properties_get(iter);
}

void ThemeNodeEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeNodeEditor_rna_properties_get(iter);
}

void ThemeNodeEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeNodeEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeNodeEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeNodeEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

PointerRNA ThemeNodeEditor_space_list_get(PointerRNA *ptr)
{
	return rna_Theme_space_list_generic_get(ptr);
}

void ThemeNodeEditor_node_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->select[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_node_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->select[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_node_active_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->active[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_node_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->active[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_wire_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->wire[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_wire_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->wire[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_wire_inner_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxr[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_wire_inner_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxr[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_wire_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->edge_select[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_wire_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->edge_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_selected_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->shade2[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_selected_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->shade2[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_node_backdrop_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->syntaxl[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_node_backdrop_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->syntaxl[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_converter_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxv[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_converter_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxv[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_color_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxb[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_color_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxb[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_group_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxc[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_group_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxc[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_group_socket_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->console_output[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_group_socket_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->console_output[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_frame_node_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->movie[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_frame_node_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->movie[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_matte_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxs[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_matte_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxs[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_distor_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxd[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_distor_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxd[i] = FTOCHAR(values[i]);
	}
}

int ThemeNodeEditor_noodle_curving_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->noodle_curving);
}

void ThemeNodeEditor_noodle_curving_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->noodle_curving = CLAMPIS(value, 0, 10);
}

void ThemeNodeEditor_input_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->syntaxn[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_input_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->syntaxn[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_output_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_output[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_output_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_output[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_filter_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_filter[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_filter_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_filter[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_vector_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_vector[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_vector_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_vector[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_texture_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_texture[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_texture_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_texture[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_shader_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_shader[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_shader_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_shader[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_script_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_script[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_script_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_script[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_pattern_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_pattern[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_pattern_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_pattern[i] = FTOCHAR(values[i]);
	}
}

void ThemeNodeEditor_layout_node_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->nodeclass_layout[i] * (1.0f / 255.0f));
	}
}

void ThemeNodeEditor_layout_node_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->nodeclass_layout[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeOutliner_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeOutliner_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeOutliner_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeOutliner_rna_properties_get(iter);
}

void ThemeOutliner_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeOutliner_rna_properties_get(iter);
}

void ThemeOutliner_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeOutliner_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeOutliner_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeOutliner_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeOutliner_match_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->match[i] * (1.0f / 255.0f));
	}
}

void ThemeOutliner_match_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->match[i] = FTOCHAR(values[i]);
	}
}

void ThemeOutliner_selected_highlight_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->selected_highlight[i] * (1.0f / 255.0f));
	}
}

void ThemeOutliner_selected_highlight_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->selected_highlight[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeInfo_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeInfo_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeInfo_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeInfo_rna_properties_get(iter);
}

void ThemeInfo_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeInfo_rna_properties_get(iter);
}

void ThemeInfo_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeInfo_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeInfo_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeInfo_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeInfo_info_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_selected[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_selected[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_selected_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_selected_text[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_selected_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_selected_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_error_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_error[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_error_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_error[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_error_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_error_text[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_error_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_error_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_warning_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_warning[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_warning_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_warning[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_warning_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_warning_text[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_warning_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_warning_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_info_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_info[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_info_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_info[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_info_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_info_text[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_info_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_info_text[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_debug_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_debug[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_debug_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_debug[i] = FTOCHAR(values[i]);
	}
}

void ThemeInfo_info_debug_text_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->info_debug_text[i] * (1.0f / 255.0f));
	}
}

void ThemeInfo_info_debug_text_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->info_debug_text[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeUserPreferences_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeUserPreferences_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeUserPreferences_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeUserPreferences_rna_properties_get(iter);
}

void ThemeUserPreferences_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeUserPreferences_rna_properties_get(iter);
}

void ThemeUserPreferences_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeUserPreferences_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeUserPreferences_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeUserPreferences_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

static PointerRNA ThemeConsole_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeConsole_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeConsole_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeConsole_rna_properties_get(iter);
}

void ThemeConsole_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeConsole_rna_properties_get(iter);
}

void ThemeConsole_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeConsole_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeConsole_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeConsole_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

void ThemeConsole_line_output_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->console_output[i] * (1.0f / 255.0f));
	}
}

void ThemeConsole_line_output_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->console_output[i] = FTOCHAR(values[i]);
	}
}

void ThemeConsole_line_input_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->console_input[i] * (1.0f / 255.0f));
	}
}

void ThemeConsole_line_input_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->console_input[i] = FTOCHAR(values[i]);
	}
}

void ThemeConsole_line_info_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->console_info[i] * (1.0f / 255.0f));
	}
}

void ThemeConsole_line_info_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->console_info[i] = FTOCHAR(values[i]);
	}
}

void ThemeConsole_line_error_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->console_error[i] * (1.0f / 255.0f));
	}
}

void ThemeConsole_line_error_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->console_error[i] = FTOCHAR(values[i]);
	}
}

void ThemeConsole_cursor_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->console_cursor[i] * (1.0f / 255.0f));
	}
}

void ThemeConsole_cursor_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->console_cursor[i] = FTOCHAR(values[i]);
	}
}

void ThemeConsole_select_get(PointerRNA *ptr, float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(data->console_select[i] * (1.0f / 255.0f));
	}
}

void ThemeConsole_select_set(PointerRNA *ptr, const float values[4])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		data->console_select[i] = FTOCHAR(values[i]);
	}
}

static PointerRNA ThemeLogicEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeLogicEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeLogicEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeLogicEditor_rna_properties_get(iter);
}

void ThemeLogicEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeLogicEditor_rna_properties_get(iter);
}

void ThemeLogicEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeLogicEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeLogicEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeLogicEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

static PointerRNA ThemeClipEditor_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeClipEditor_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeClipEditor_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeClipEditor_rna_properties_get(iter);
}

void ThemeClipEditor_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeClipEditor_rna_properties_get(iter);
}

void ThemeClipEditor_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeClipEditor_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeClipEditor_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

PointerRNA ThemeClipEditor_space_get(PointerRNA *ptr)
{
	return rna_Theme_space_generic_get(ptr);
}

PointerRNA ThemeClipEditor_space_list_get(PointerRNA *ptr)
{
	return rna_Theme_space_list_generic_get(ptr);
}

void ThemeClipEditor_marker_outline_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->marker_outline[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_marker_outline_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->marker_outline[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_marker_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->marker[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_marker_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->marker[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_active_marker_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->act_marker[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_active_marker_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->act_marker[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_selected_marker_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->sel_marker[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_selected_marker_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->sel_marker[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_disabled_marker_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->dis_marker[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_disabled_marker_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->dis_marker[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_locked_marker_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->lock_marker[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_locked_marker_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->lock_marker[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_path_before_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->path_before[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_path_before_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->path_before[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_path_after_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->path_after[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_path_after_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->path_after[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_frame_current_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->cframe[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_frame_current_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->cframe[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_strips_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->strip[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_strips_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->strip[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_strips_selected_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->strip_select[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_strips_selected_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->strip_select[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_free[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_align[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_sel_free_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_free[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_sel_free_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_free[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_sel_auto_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_sel_auto_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_sel_align_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_align[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_sel_align_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_align[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_auto_clamped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_auto_clamped[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_auto_clamped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_auto_clamped[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_sel_auto_clamped_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_sel_auto_clamped[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_sel_auto_clamped_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_sel_auto_clamped[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_vertex_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vertex[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_vertex_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vertex[i] = FTOCHAR(values[i]);
	}
}

void ThemeClipEditor_handle_vertex_select_get(PointerRNA *ptr, float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->handle_vertex_select[i] * (1.0f / 255.0f));
	}
}

void ThemeClipEditor_handle_vertex_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->handle_vertex_select[i] = FTOCHAR(values[i]);
	}
}

int ThemeClipEditor_handle_vertex_size_get(PointerRNA *ptr)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	return (int)(data->handle_vertex_size);
}

void ThemeClipEditor_handle_vertex_size_set(PointerRNA *ptr, int value)
{
	ThemeSpace *data = (ThemeSpace *)(ptr->data);
	data->handle_vertex_size = CLAMPIS(value, 0, 255);
}

static PointerRNA ThemeBoneColorSet_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void ThemeBoneColorSet_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_ThemeBoneColorSet_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = ThemeBoneColorSet_rna_properties_get(iter);
}

void ThemeBoneColorSet_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = ThemeBoneColorSet_rna_properties_get(iter);
}

void ThemeBoneColorSet_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int ThemeBoneColorSet_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA ThemeBoneColorSet_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void ThemeBoneColorSet_normal_get(PointerRNA *ptr, float values[3])
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->solid[i] * (1.0f / 255.0f));
	}
}

void ThemeBoneColorSet_normal_set(PointerRNA *ptr, const float values[3])
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->solid[i] = FTOCHAR(values[i]);
	}
}

void ThemeBoneColorSet_select_get(PointerRNA *ptr, float values[3])
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->select[i] * (1.0f / 255.0f));
	}
}

void ThemeBoneColorSet_select_set(PointerRNA *ptr, const float values[3])
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->select[i] = FTOCHAR(values[i]);
	}
}

void ThemeBoneColorSet_active_get(PointerRNA *ptr, float values[3])
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(data->active[i] * (1.0f / 255.0f));
	}
}

void ThemeBoneColorSet_active_set(PointerRNA *ptr, const float values[3])
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		data->active[i] = FTOCHAR(values[i]);
	}
}

int ThemeBoneColorSet_show_colored_constraints_get(PointerRNA *ptr)
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void ThemeBoneColorSet_show_colored_constraints_set(PointerRNA *ptr, int value)
{
	ThemeWireColor *data = (ThemeWireColor *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

static PointerRNA Theme_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Theme_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Theme_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Theme_rna_properties_get(iter);
}

void Theme_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Theme_rna_properties_get(iter);
}

void Theme_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Theme_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Theme_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Theme_name_get(PointerRNA *ptr, char *value)
{
	bTheme *data = (bTheme *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 32);
}

int Theme_name_length(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return strlen(data->name);
}

void Theme_name_set(PointerRNA *ptr, const char *value)
{
	bTheme *data = (bTheme *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 32);
}

int Theme_theme_area_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return (int)(data->active_theme_area);
}

void Theme_theme_area_set(PointerRNA *ptr, int value)
{
	bTheme *data = (bTheme *)(ptr->data);
	data->active_theme_area = value;
}

PointerRNA Theme_user_interface_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeUserInterface, &data->tui);
}

PointerRNA Theme_view_3d_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeView3D, &data->tv3d);
}

PointerRNA Theme_graph_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeGraphEditor, &data->tipo);
}

PointerRNA Theme_file_browser_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeFileBrowser, &data->tfile);
}

PointerRNA Theme_nla_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeNLAEditor, &data->tnla);
}

PointerRNA Theme_dopesheet_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeDopeSheet, &data->tact);
}

PointerRNA Theme_image_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeImageEditor, &data->tima);
}

PointerRNA Theme_sequence_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeSequenceEditor, &data->tseq);
}

PointerRNA Theme_properties_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeProperties, &data->tbuts);
}

PointerRNA Theme_text_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeTextEditor, &data->text);
}

PointerRNA Theme_timeline_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeTimeline, &data->ttime);
}

PointerRNA Theme_node_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeNodeEditor, &data->tnode);
}

PointerRNA Theme_logic_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeLogicEditor, &data->tlogic);
}

PointerRNA Theme_outliner_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeOutliner, &data->toops);
}

PointerRNA Theme_info_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeInfo, &data->tinfo);
}

PointerRNA Theme_user_preferences_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeUserPreferences, &data->tuserpref);
}

PointerRNA Theme_console_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeConsole, &data->tconsole);
}

int Theme_bone_color_sets_length(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return (data->tarm == NULL) ? 0 : 20;
}

static PointerRNA Theme_bone_color_sets_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ThemeBoneColorSet, rna_iterator_array_get(iter));
}

void Theme_bone_color_sets_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Theme_bone_color_sets;

	rna_iterator_array_begin(iter, data->tarm, sizeof(data->tarm[0]), 20, 0, NULL);

	if (iter->valid)
		iter->ptr = Theme_bone_color_sets_get(iter);
}

void Theme_bone_color_sets_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = Theme_bone_color_sets_get(iter);
}

void Theme_bone_color_sets_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int Theme_bone_color_sets_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	Theme_bone_color_sets_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = Theme_bone_color_sets_get(&iter);
	}

	Theme_bone_color_sets_end(&iter);

	return found;
}

PointerRNA Theme_clip_editor_get(PointerRNA *ptr)
{
	bTheme *data = (bTheme *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ThemeClipEditor, &data->tclip);
}

static PointerRNA UserSolidLight_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserSolidLight_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserSolidLight_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserSolidLight_rna_properties_get(iter);
}

void UserSolidLight_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserSolidLight_rna_properties_get(iter);
}

void UserSolidLight_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserSolidLight_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserSolidLight_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserSolidLight_use_get(PointerRNA *ptr)
{
	SolidLight *data = (SolidLight *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void UserSolidLight_use_set(PointerRNA *ptr, int value)
{
	SolidLight *data = (SolidLight *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

void UserSolidLight_direction_get(PointerRNA *ptr, float values[3])
{
	SolidLight *data = (SolidLight *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->vec)[i]);
	}
}

void UserSolidLight_direction_set(PointerRNA *ptr, const float values[3])
{
	SolidLight *data = (SolidLight *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->vec)[i] = values[i];
	}
}

void UserSolidLight_diffuse_color_get(PointerRNA *ptr, float values[3])
{
	SolidLight *data = (SolidLight *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->col)[i]);
	}
}

void UserSolidLight_diffuse_color_set(PointerRNA *ptr, const float values[3])
{
	SolidLight *data = (SolidLight *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void UserSolidLight_specular_color_get(PointerRNA *ptr, float values[3])
{
	SolidLight *data = (SolidLight *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->spec)[i]);
	}
}

void UserSolidLight_specular_color_set(PointerRNA *ptr, const float values[3])
{
	SolidLight *data = (SolidLight *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->spec)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

static PointerRNA WalkNavigation_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void WalkNavigation_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_WalkNavigation_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = WalkNavigation_rna_properties_get(iter);
}

void WalkNavigation_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = WalkNavigation_rna_properties_get(iter);
}

void WalkNavigation_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int WalkNavigation_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA WalkNavigation_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float WalkNavigation_mouse_speed_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (float)(data->mouse_speed);
}

void WalkNavigation_mouse_speed_set(PointerRNA *ptr, float value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	data->mouse_speed = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float WalkNavigation_walk_speed_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (float)(data->walk_speed);
}

void WalkNavigation_walk_speed_set(PointerRNA *ptr, float value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	data->walk_speed = CLAMPIS(value, 0.0099999998f, 100.0f);
}

float WalkNavigation_walk_speed_factor_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (float)(data->walk_speed_factor);
}

void WalkNavigation_walk_speed_factor_set(PointerRNA *ptr, float value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	data->walk_speed_factor = CLAMPIS(value, 0.0099999998f, 10.0f);
}

float WalkNavigation_view_height_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (float)(data->view_height);
}

void WalkNavigation_view_height_set(PointerRNA *ptr, float value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	data->view_height = CLAMPIS(value, 0.0f, 1000.0f);
}

float WalkNavigation_jump_height_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (float)(data->jump_height);
}

void WalkNavigation_jump_height_set(PointerRNA *ptr, float value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	data->jump_height = CLAMPIS(value, 0.1000000015f, 100.0f);
}

float WalkNavigation_teleport_time_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (float)(data->teleport_time);
}

void WalkNavigation_teleport_time_set(PointerRNA *ptr, float value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	data->teleport_time = CLAMPIS(value, 0.0f, 10.0f);
}

int WalkNavigation_use_gravity_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void WalkNavigation_use_gravity_set(PointerRNA *ptr, int value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int WalkNavigation_use_mouse_reverse_get(PointerRNA *ptr)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	return (((data->flag) & 2) != 0);
}

void WalkNavigation_use_mouse_reverse_set(PointerRNA *ptr, int value)
{
	WalkNavigation *data = (WalkNavigation *)(ptr->data);
	if (value) data->flag |= 2;
	else data->flag &= ~2;
}

static PointerRNA UserPreferences_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserPreferences_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferences_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserPreferences_rna_properties_get(iter);
}

void UserPreferences_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferences_rna_properties_get(iter);
}

void UserPreferences_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferences_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserPreferences_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserPreferences_active_section_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->userpref);
}

void UserPreferences_active_section_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->userpref = value;
}

static PointerRNA UserPreferences_themes_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Theme, rna_iterator_listbase_get(iter));
}

void UserPreferences_themes_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferences_themes;

	rna_iterator_listbase_begin(iter, &data->themes, NULL);

	if (iter->valid)
		iter->ptr = UserPreferences_themes_get(iter);
}

void UserPreferences_themes_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferences_themes_get(iter);
}

void UserPreferences_themes_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferences_themes_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	UserPreferences_themes_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = UserPreferences_themes_get(&iter);
	}

	UserPreferences_themes_end(&iter);

	return found;
}

int UserPreferences_themes_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Theme_name_length(PointerRNA *);
	extern void Theme_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	UserPreferences_themes_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Theme_name_length(&iter.ptr);
			if (namelen < 1024) {
				Theme_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Theme_name_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		UserPreferences_themes_next(&iter);
	}
	UserPreferences_themes_end(&iter);

	return found;
}

static PointerRNA UserPreferences_ui_styles_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_ThemeStyle, rna_iterator_listbase_get(iter));
}

void UserPreferences_ui_styles_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferences_ui_styles;

	rna_iterator_listbase_begin(iter, &data->uistyles, NULL);

	if (iter->valid)
		iter->ptr = UserPreferences_ui_styles_get(iter);
}

void UserPreferences_ui_styles_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferences_ui_styles_get(iter);
}

void UserPreferences_ui_styles_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferences_ui_styles_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	UserPreferences_ui_styles_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = UserPreferences_ui_styles_get(&iter);
	}

	UserPreferences_ui_styles_end(&iter);

	return found;
}

static PointerRNA UserPreferences_addons_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_Addon, rna_iterator_listbase_get(iter));
}

void UserPreferences_addons_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferences_addons;

	rna_iterator_listbase_begin(iter, &data->addons, NULL);

	if (iter->valid)
		iter->ptr = UserPreferences_addons_get(iter);
}

void UserPreferences_addons_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferences_addons_get(iter);
}

void UserPreferences_addons_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferences_addons_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	UserPreferences_addons_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = UserPreferences_addons_get(&iter);
	}

	UserPreferences_addons_end(&iter);

	return found;
}

int UserPreferences_addons_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int Addon_module_length(PointerRNA *);
	extern void Addon_module_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	UserPreferences_addons_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = Addon_module_length(&iter.ptr);
			if (namelen < 1024) {
				Addon_module_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				Addon_module_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		UserPreferences_addons_next(&iter);
	}
	UserPreferences_addons_end(&iter);

	return found;
}

static PointerRNA UserPreferences_autoexec_paths_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_PathCompare, rna_iterator_listbase_get(iter));
}

void UserPreferences_autoexec_paths_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferences_autoexec_paths;

	rna_iterator_listbase_begin(iter, &data->autoexec_paths, NULL);

	if (iter->valid)
		iter->ptr = UserPreferences_autoexec_paths_get(iter);
}

void UserPreferences_autoexec_paths_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferences_autoexec_paths_get(iter);
}

void UserPreferences_autoexec_paths_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferences_autoexec_paths_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	UserPreferences_autoexec_paths_begin(&iter, ptr);

	if (iter.valid) {
		ListBaseIterator *internal = &iter.internal.listbase;
		if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_listbase_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			while (index-- > 0 && internal->link)
				internal->link = internal->link->next;
			found = (index == -1 && internal->link);
		}
		if (found) *r_ptr = UserPreferences_autoexec_paths_get(&iter);
	}

	UserPreferences_autoexec_paths_end(&iter);

	return found;
}

int UserPreferences_autoexec_paths_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int PathCompare_path_length(PointerRNA *);
	extern void PathCompare_path_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	UserPreferences_autoexec_paths_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = PathCompare_path_length(&iter.ptr);
			if (namelen < 1024) {
				PathCompare_path_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				PathCompare_path_get(&iter.ptr, name);
				if (strcmp(name, key) == 0) {
					MEM_freeN(name);

					found = true;
					*r_ptr = iter.ptr;
					break;
				}
				else {
					MEM_freeN(name);
				}
			}
		}
		UserPreferences_autoexec_paths_next(&iter);
	}
	UserPreferences_autoexec_paths_end(&iter);

	return found;
}

PointerRNA UserPreferences_view_get(PointerRNA *ptr)
{
	return rna_UserDef_view_get(ptr);
}

PointerRNA UserPreferences_edit_get(PointerRNA *ptr)
{
	return rna_UserDef_edit_get(ptr);
}

PointerRNA UserPreferences_inputs_get(PointerRNA *ptr)
{
	return rna_UserDef_input_get(ptr);
}

PointerRNA UserPreferences_filepaths_get(PointerRNA *ptr)
{
	return rna_UserDef_filepaths_get(ptr);
}

PointerRNA UserPreferences_system_get(PointerRNA *ptr)
{
	return rna_UserDef_system_get(ptr);
}

static PointerRNA Addons_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Addons_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Addons_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Addons_rna_properties_get(iter);
}

void Addons_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Addons_rna_properties_get(iter);
}

void Addons_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Addons_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Addons_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA PathCompareCollection_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PathCompareCollection_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PathCompareCollection_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = PathCompareCollection_rna_properties_get(iter);
}

void PathCompareCollection_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = PathCompareCollection_rna_properties_get(iter);
}

void PathCompareCollection_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PathCompareCollection_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PathCompareCollection_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

static PointerRNA UserPreferencesView_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserPreferencesView_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferencesView_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserPreferencesView_rna_properties_get(iter);
}

void UserPreferencesView_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferencesView_rna_properties_get(iter);
}

void UserPreferencesView_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferencesView_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserPreferencesView_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserPreferencesView_show_tooltips_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 2048) != 0);
}

void UserPreferencesView_show_tooltips_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 2048;
	else data->flag &= ~2048;
}

int UserPreferencesView_show_tooltips_python_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->flag) & 67108864) != 0);
}

void UserPreferencesView_show_tooltips_python_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->flag |= 67108864;
	else data->flag &= ~67108864;
}

int UserPreferencesView_show_object_info_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 16) != 0);
}

void UserPreferencesView_show_object_info_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 16;
	else data->uiflag &= ~16;
}

int UserPreferencesView_use_global_scene_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 16) != 0);
}

void UserPreferencesView_use_global_scene_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 16;
	else data->flag &= ~16;
}

int UserPreferencesView_show_large_cursors_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->curssize);
}

void UserPreferencesView_show_large_cursors_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->curssize = value;
}

int UserPreferencesView_show_view_name_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 262144) != 0);
}

void UserPreferencesView_show_view_name_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 262144;
	else data->uiflag &= ~262144;
}

int UserPreferencesView_show_splash_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->uiflag) & 134217728) != 0);
}

void UserPreferencesView_show_splash_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->uiflag |= 134217728;
	else data->uiflag &= ~134217728;
}

int UserPreferencesView_show_playback_fps_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 2097152) != 0);
}

void UserPreferencesView_show_playback_fps_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 2097152;
	else data->uiflag &= ~2097152;
}

int UserPreferencesView_use_mouse_over_open_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 512) != 0);
}

void UserPreferencesView_use_mouse_over_open_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 512;
	else data->uiflag &= ~512;
}

int UserPreferencesView_open_toplevel_delay_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->menuthreshold1);
}

void UserPreferencesView_open_toplevel_delay_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->menuthreshold1 = CLAMPIS(value, 1, 40);
}

int UserPreferencesView_open_sublevel_delay_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->menuthreshold2);
}

void UserPreferencesView_open_sublevel_delay_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->menuthreshold2 = CLAMPIS(value, 1, 40);
}

int UserPreferencesView_pie_initial_timeout_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->pie_initial_timeout);
}

void UserPreferencesView_pie_initial_timeout_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->pie_initial_timeout = CLAMPIS(value, 0, 1000);
}

int UserPreferencesView_pie_animation_timeout_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->pie_animation_timeout);
}

void UserPreferencesView_pie_animation_timeout_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->pie_animation_timeout = CLAMPIS(value, 0, 1000);
}

int UserPreferencesView_pie_menu_radius_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->pie_menu_radius);
}

void UserPreferencesView_pie_menu_radius_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->pie_menu_radius = CLAMPIS(value, 0, 1000);
}

int UserPreferencesView_pie_menu_threshold_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->pie_menu_threshold);
}

void UserPreferencesView_pie_menu_threshold_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->pie_menu_threshold = CLAMPIS(value, 0, 1000);
}

int UserPreferencesView_pie_menu_confirm_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->pie_menu_confirm);
}

void UserPreferencesView_pie_menu_confirm_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->pie_menu_confirm = CLAMPIS(value, 0, 1000);
}

int UserPreferencesView_use_quit_dialog_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 1073741824) != 0);
}

void UserPreferencesView_use_quit_dialog_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 1073741824;
	else data->uiflag &= ~1073741824;
}

int UserPreferencesView_open_left_mouse_delay_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->tb_leftmouse);
}

void UserPreferencesView_open_left_mouse_delay_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->tb_leftmouse = CLAMPIS(value, 1, 40);
}

int UserPreferencesView_open_right_mouse_delay_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->tb_rightmouse);
}

void UserPreferencesView_open_right_mouse_delay_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->tb_rightmouse = CLAMPIS(value, 1, 40);
}

int UserPreferencesView_show_column_layout_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 32) != 0);
}

void UserPreferencesView_show_column_layout_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 32;
	else data->uiflag &= ~32;
}

int UserPreferencesView_use_directional_menus_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->uiflag) & 8388608) != 0);
}

void UserPreferencesView_use_directional_menus_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->uiflag |= 8388608;
	else data->uiflag &= ~8388608;
}

int UserPreferencesView_use_global_pivot_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 4096) != 0);
}

void UserPreferencesView_use_global_pivot_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 4096;
	else data->uiflag &= ~4096;
}

int UserPreferencesView_use_mouse_depth_navigate_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 32768) != 0);
}

void UserPreferencesView_use_mouse_depth_navigate_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 32768;
	else data->uiflag &= ~32768;
}

int UserPreferencesView_use_mouse_depth_cursor_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 1024) != 0);
}

void UserPreferencesView_use_mouse_depth_cursor_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 1024;
	else data->uiflag &= ~1024;
}

int UserPreferencesView_use_camera_lock_parent_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->uiflag) & 524288) != 0);
}

void UserPreferencesView_use_camera_lock_parent_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->uiflag |= 524288;
	else data->uiflag &= ~524288;
}

int UserPreferencesView_use_zoom_to_mouse_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 1048576) != 0);
}

void UserPreferencesView_use_zoom_to_mouse_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 1048576;
	else data->uiflag &= ~1048576;
}

int UserPreferencesView_use_auto_perspective_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 2048) != 0);
}

void UserPreferencesView_use_auto_perspective_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 2048;
	else data->uiflag &= ~2048;
}

int UserPreferencesView_use_rotate_around_active_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 16384) != 0);
}

void UserPreferencesView_use_rotate_around_active_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 16384;
	else data->uiflag &= ~16384;
}

int UserPreferencesView_show_mini_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 131072) != 0);
}

void UserPreferencesView_show_mini_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 131072;
	else data->uiflag &= ~131072;
}

int UserPreferencesView_mini_axis_size_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->rvisize);
}

void UserPreferencesView_mini_axis_size_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->rvisize = CLAMPIS(value, 10, 64);
}

int UserPreferencesView_mini_axis_brightness_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->rvibright);
}

void UserPreferencesView_mini_axis_brightness_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->rvibright = CLAMPIS(value, 0, 10);
}

int UserPreferencesView_smooth_view_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->smooth_viewtx);
}

void UserPreferencesView_smooth_view_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->smooth_viewtx = CLAMPIS(value, 0, 1000);
}

int UserPreferencesView_rotation_angle_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->pad_rot_angle);
}

void UserPreferencesView_rotation_angle_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->pad_rot_angle = CLAMPIS(value, 0, 90);
}

int UserPreferencesView_show_manipulator_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->tw_flag) & 1) != 0);
}

void UserPreferencesView_show_manipulator_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->tw_flag |= 1;
	else data->tw_flag &= ~1;
}

int UserPreferencesView_manipulator_size_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->tw_size);
}

void UserPreferencesView_manipulator_size_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->tw_size = CLAMPIS(value, 10, 200);
}

int UserPreferencesView_manipulator_handle_size_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->tw_handlesize);
}

void UserPreferencesView_manipulator_handle_size_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->tw_handlesize = CLAMPIS(value, 2, 40);
}

int UserPreferencesView_manipulator_hotspot_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->tw_hotspot);
}

void UserPreferencesView_manipulator_hotspot_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->tw_hotspot = CLAMPIS(value, 4, 40);
}

int UserPreferencesView_object_origin_size_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->obcenter_dia);
}

void UserPreferencesView_object_origin_size_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->obcenter_dia = CLAMPIS(value, 4, 10);
}

int UserPreferencesView_view2d_grid_spacing_min_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->v2d_min_gridsize);
}

void UserPreferencesView_view2d_grid_spacing_min_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->v2d_min_gridsize = CLAMPIS(value, 1, 500);
}

int UserPreferencesView_timecode_style_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->timecode_style);
}

void UserPreferencesView_timecode_style_set(PointerRNA *ptr, int value)
{
	rna_userdef_timecode_style_set(ptr, value);
}

static PointerRNA UserPreferencesEdit_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserPreferencesEdit_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferencesEdit_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserPreferencesEdit_rna_properties_get(iter);
}

void UserPreferencesEdit_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferencesEdit_rna_properties_get(iter);
}

void UserPreferencesEdit_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferencesEdit_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserPreferencesEdit_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserPreferencesEdit_material_link_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->flag) & 256);
}

void UserPreferencesEdit_material_link_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->flag &= ~256;
	data->flag |= value;
}

int UserPreferencesEdit_object_align_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->flag) & 524288);
}

void UserPreferencesEdit_object_align_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->flag &= ~524288;
	data->flag |= value;
}

int UserPreferencesEdit_use_enter_edit_mode_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 262144) != 0);
}

void UserPreferencesEdit_use_enter_edit_mode_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 262144;
	else data->flag &= ~262144;
}

int UserPreferencesEdit_use_drag_immediately_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 2097152) != 0);
}

void UserPreferencesEdit_use_drag_immediately_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 2097152;
	else data->flag &= ~2097152;
}

int UserPreferencesEdit_undo_steps_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->undosteps);
}

void UserPreferencesEdit_undo_steps_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->undosteps = CLAMPIS(value, 0, 64);
}

int UserPreferencesEdit_undo_memory_limit_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->undomemory);
}

void UserPreferencesEdit_undo_memory_limit_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->undomemory = CLAMPIS(value, 0, 32767);
}

int UserPreferencesEdit_use_global_undo_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 8192) != 0);
}

void UserPreferencesEdit_use_global_undo_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 8192;
	else data->uiflag &= ~8192;
}

int UserPreferencesEdit_use_auto_keying_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->autokey_mode) & 1) != 0);
}

void UserPreferencesEdit_use_auto_keying_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->autokey_mode |= 1;
	else data->autokey_mode &= ~1;
}

int UserPreferencesEdit_auto_keying_mode_get(PointerRNA *ptr)
{
	return rna_userdef_autokeymode_get(ptr);
}

void UserPreferencesEdit_auto_keying_mode_set(PointerRNA *ptr, int value)
{
	rna_userdef_autokeymode_set(ptr, value);
}

int UserPreferencesEdit_use_keyframe_insert_available_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->autokey_flag) & 1) != 0);
}

void UserPreferencesEdit_use_keyframe_insert_available_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->autokey_flag |= 1;
	else data->autokey_flag &= ~1;
}

int UserPreferencesEdit_use_auto_keying_warning_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->autokey_flag) & 128) != 0);
}

void UserPreferencesEdit_use_auto_keying_warning_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->autokey_flag |= 128;
	else data->autokey_flag &= ~128;
}

int UserPreferencesEdit_use_keyframe_insert_needed_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->autokey_flag) & 2) != 0);
}

void UserPreferencesEdit_use_keyframe_insert_needed_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->autokey_flag |= 2;
	else data->autokey_flag &= ~2;
}

int UserPreferencesEdit_use_visual_keying_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->autokey_flag) & 4) != 0);
}

void UserPreferencesEdit_use_visual_keying_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->autokey_flag |= 4;
	else data->autokey_flag &= ~4;
}

int UserPreferencesEdit_use_insertkey_xyz_to_rgb_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->autokey_flag) & 8) != 0);
}

void UserPreferencesEdit_use_insertkey_xyz_to_rgb_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->autokey_flag |= 8;
	else data->autokey_flag &= ~8;
}

int UserPreferencesEdit_keyframe_new_interpolation_type_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->ipo_new);
}

void UserPreferencesEdit_keyframe_new_interpolation_type_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->ipo_new = value;
}

int UserPreferencesEdit_keyframe_new_handle_type_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->keyhandles_new);
}

void UserPreferencesEdit_keyframe_new_handle_type_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->keyhandles_new = value;
}

int UserPreferencesEdit_use_negative_frames_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->flag) & 16777216) != 0);
}

void UserPreferencesEdit_use_negative_frames_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->flag |= 16777216;
	else data->flag &= ~16777216;
}

float UserPreferencesEdit_fcurve_unselected_alpha_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (float)(data->fcu_inactive_alpha);
}

void UserPreferencesEdit_fcurve_unselected_alpha_set(PointerRNA *ptr, float value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->fcu_inactive_alpha = CLAMPIS(value, 0.0010000000f, 1.0f);
}

int UserPreferencesEdit_grease_pencil_manhattan_distance_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->gp_manhattendist);
}

void UserPreferencesEdit_grease_pencil_manhattan_distance_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->gp_manhattendist = CLAMPIS(value, 0, 100);
}

int UserPreferencesEdit_grease_pencil_euclidean_distance_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->gp_euclideandist);
}

void UserPreferencesEdit_grease_pencil_euclidean_distance_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->gp_euclideandist = CLAMPIS(value, 0, 100);
}

int UserPreferencesEdit_use_grease_pencil_smooth_stroke_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->gp_settings) & 1) != 0);
}

void UserPreferencesEdit_use_grease_pencil_smooth_stroke_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->gp_settings |= 1;
	else data->gp_settings &= ~1;
}

int UserPreferencesEdit_use_grease_pencil_simplify_stroke_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->gp_settings) & 2) != 0);
}

void UserPreferencesEdit_use_grease_pencil_simplify_stroke_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->gp_settings |= 2;
	else data->gp_settings &= ~2;
}

int UserPreferencesEdit_grease_pencil_eraser_radius_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->gp_eraser);
}

void UserPreferencesEdit_grease_pencil_eraser_radius_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->gp_eraser = CLAMPIS(value, 0, 100);
}

void UserPreferencesEdit_grease_pencil_default_color_get(PointerRNA *ptr, float values[4])
{
	UserDef *data = (UserDef *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		values[i] = (float)(((float *)data->gpencil_new_layer_col)[i]);
	}
}

void UserPreferencesEdit_grease_pencil_default_color_set(PointerRNA *ptr, const float values[4])
{
	UserDef *data = (UserDef *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 4; i++) {
		((float *)data->gpencil_new_layer_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

void UserPreferencesEdit_sculpt_paint_overlay_color_get(PointerRNA *ptr, float values[3])
{
	UserDef *data = (UserDef *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		values[i] = (float)(((float *)data->sculpt_paint_overlay_col)[i]);
	}
}

void UserPreferencesEdit_sculpt_paint_overlay_color_set(PointerRNA *ptr, const float values[3])
{
	UserDef *data = (UserDef *)(ptr->data);
	unsigned int i;

	for (i = 0; i < 3; i++) {
		((float *)data->sculpt_paint_overlay_col)[i] = CLAMPIS(values[i], 0.0f, FLT_MAX);
	}
}

int UserPreferencesEdit_use_duplicate_mesh_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 1) != 0);
}

void UserPreferencesEdit_use_duplicate_mesh_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 1;
	else data->dupflag &= ~1;
}

int UserPreferencesEdit_use_duplicate_surface_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 4) != 0);
}

void UserPreferencesEdit_use_duplicate_surface_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 4;
	else data->dupflag &= ~4;
}

int UserPreferencesEdit_use_duplicate_curve_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 2) != 0);
}

void UserPreferencesEdit_use_duplicate_curve_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 2;
	else data->dupflag &= ~2;
}

int UserPreferencesEdit_use_duplicate_text_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 8) != 0);
}

void UserPreferencesEdit_use_duplicate_text_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 8;
	else data->dupflag &= ~8;
}

int UserPreferencesEdit_use_duplicate_metaball_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 16) != 0);
}

void UserPreferencesEdit_use_duplicate_metaball_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 16;
	else data->dupflag &= ~16;
}

int UserPreferencesEdit_use_duplicate_armature_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 512) != 0);
}

void UserPreferencesEdit_use_duplicate_armature_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 512;
	else data->dupflag &= ~512;
}

int UserPreferencesEdit_use_duplicate_lamp_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 32) != 0);
}

void UserPreferencesEdit_use_duplicate_lamp_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 32;
	else data->dupflag &= ~32;
}

int UserPreferencesEdit_use_duplicate_material_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 128) != 0);
}

void UserPreferencesEdit_use_duplicate_material_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 128;
	else data->dupflag &= ~128;
}

int UserPreferencesEdit_use_duplicate_texture_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 256) != 0);
}

void UserPreferencesEdit_use_duplicate_texture_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 256;
	else data->dupflag &= ~256;
}

int UserPreferencesEdit_use_duplicate_fcurve_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 64) != 0);
}

void UserPreferencesEdit_use_duplicate_fcurve_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 64;
	else data->dupflag &= ~64;
}

int UserPreferencesEdit_use_duplicate_action_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 1024) != 0);
}

void UserPreferencesEdit_use_duplicate_action_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 1024;
	else data->dupflag &= ~1024;
}

int UserPreferencesEdit_use_duplicate_particle_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->dupflag) & 2048) != 0);
}

void UserPreferencesEdit_use_duplicate_particle_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->dupflag |= 2048;
	else data->dupflag &= ~2048;
}

static PointerRNA UserPreferencesInput_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserPreferencesInput_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferencesInput_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserPreferencesInput_rna_properties_get(iter);
}

void UserPreferencesInput_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferencesInput_rna_properties_get(iter);
}

void UserPreferencesInput_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferencesInput_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserPreferencesInput_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserPreferencesInput_select_mouse_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->flag) & 16384);
}

void UserPreferencesInput_select_mouse_set(PointerRNA *ptr, int value)
{
	rna_userdef_select_mouse_set(ptr, value);
}

int UserPreferencesInput_view_zoom_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->viewzoom);
}

void UserPreferencesInput_view_zoom_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->viewzoom = value;
}

int UserPreferencesInput_view_zoom_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->uiflag) & 67108864);
}

void UserPreferencesInput_view_zoom_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->uiflag &= ~67108864;
	data->uiflag |= value;
}

int UserPreferencesInput_invert_mouse_zoom_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 33554432) != 0);
}

void UserPreferencesInput_invert_mouse_zoom_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 33554432;
	else data->uiflag &= ~33554432;
}

int UserPreferencesInput_view_rotate_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->flag) & 32);
}

void UserPreferencesInput_view_rotate_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->flag &= ~32;
	data->flag |= value;
}

int UserPreferencesInput_use_mouse_continuous_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 16777216) != 0);
}

void UserPreferencesInput_use_mouse_continuous_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 16777216;
	else data->uiflag &= ~16777216;
}

int UserPreferencesInput_navigation_mode_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->navigation_mode);
}

void UserPreferencesInput_navigation_mode_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->navigation_mode = value;
}

PointerRNA UserPreferencesInput_walk_navigation_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_WalkNavigation, &data->walk_navigation);
}

int UserPreferencesInput_drag_threshold_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->dragthreshold);
}

void UserPreferencesInput_drag_threshold_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->dragthreshold = CLAMPIS(value, 3, 40);
}

int UserPreferencesInput_tweak_threshold_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->tweak_threshold);
}

void UserPreferencesInput_tweak_threshold_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->tweak_threshold = CLAMPIS(value, 3, 1024);
}

float UserPreferencesInput_ndof_sensitivity_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (float)(data->ndof_sensitivity);
}

void UserPreferencesInput_ndof_sensitivity_set(PointerRNA *ptr, float value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->ndof_sensitivity = CLAMPIS(value, 0.0099999998f, 40.0f);
}

float UserPreferencesInput_ndof_orbit_sensitivity_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (float)(data->ndof_orbit_sensitivity);
}

void UserPreferencesInput_ndof_orbit_sensitivity_set(PointerRNA *ptr, float value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->ndof_orbit_sensitivity = CLAMPIS(value, 0.0099999998f, 40.0f);
}

int UserPreferencesInput_ndof_pan_yz_swap_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 128) != 0);
}

void UserPreferencesInput_ndof_pan_yz_swap_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 128;
	else data->ndof_flag &= ~128;
}

int UserPreferencesInput_ndof_zoom_invert_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 256) != 0);
}

void UserPreferencesInput_ndof_zoom_invert_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 256;
	else data->ndof_flag &= ~256;
}

int UserPreferencesInput_ndof_show_guide_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 1) != 0);
}

void UserPreferencesInput_ndof_show_guide_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 1;
	else data->ndof_flag &= ~1;
}

int UserPreferencesInput_ndof_view_navigate_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->ndof_flag) & 64);
}

void UserPreferencesInput_ndof_view_navigate_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->ndof_flag &= ~64;
	data->ndof_flag |= value;
}

int UserPreferencesInput_ndof_view_rotate_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->ndof_flag) & 32768);
}

void UserPreferencesInput_ndof_view_rotate_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->ndof_flag &= ~32768;
	data->ndof_flag |= value;
}

int UserPreferencesInput_ndof_rotx_invert_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 512) != 0);
}

void UserPreferencesInput_ndof_rotx_invert_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 512;
	else data->ndof_flag &= ~512;
}

int UserPreferencesInput_ndof_roty_invert_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 1024) != 0);
}

void UserPreferencesInput_ndof_roty_invert_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 1024;
	else data->ndof_flag &= ~1024;
}

int UserPreferencesInput_ndof_rotz_invert_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 2048) != 0);
}

void UserPreferencesInput_ndof_rotz_invert_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 2048;
	else data->ndof_flag &= ~2048;
}

int UserPreferencesInput_ndof_panx_invert_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 4096) != 0);
}

void UserPreferencesInput_ndof_panx_invert_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 4096;
	else data->ndof_flag &= ~4096;
}

int UserPreferencesInput_ndof_pany_invert_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 8192) != 0);
}

void UserPreferencesInput_ndof_pany_invert_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 8192;
	else data->ndof_flag &= ~8192;
}

int UserPreferencesInput_ndof_panz_invert_axis_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 16384) != 0);
}

void UserPreferencesInput_ndof_panz_invert_axis_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 16384;
	else data->ndof_flag &= ~16384;
}

int UserPreferencesInput_ndof_lock_horizon_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 4) != 0);
}

void UserPreferencesInput_ndof_lock_horizon_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 4;
	else data->ndof_flag &= ~4;
}

int UserPreferencesInput_ndof_fly_helicopter_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->ndof_flag) & 2) != 0);
}

void UserPreferencesInput_ndof_fly_helicopter_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->ndof_flag |= 2;
	else data->ndof_flag &= ~2;
}

int UserPreferencesInput_mouse_double_click_time_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->dbl_click_time);
}

void UserPreferencesInput_mouse_double_click_time_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->dbl_click_time = CLAMPIS(value, 1, 1000);
}

int UserPreferencesInput_use_mouse_emulate_3_button_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 4096) != 0);
}

void UserPreferencesInput_use_mouse_emulate_3_button_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 4096;
	else data->flag &= ~4096;
}

int UserPreferencesInput_use_emulate_numpad_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 8192) != 0);
}

void UserPreferencesInput_use_emulate_numpad_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 8192;
	else data->flag &= ~8192;
}

int UserPreferencesInput_use_mouse_mmb_paste_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 4194304) != 0);
}

void UserPreferencesInput_use_mouse_mmb_paste_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 4194304;
	else data->uiflag &= ~4194304;
}

int UserPreferencesInput_invert_zoom_wheel_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 4) != 0);
}

void UserPreferencesInput_invert_zoom_wheel_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 4;
	else data->uiflag &= ~4;
}

int UserPreferencesInput_wheel_scroll_lines_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->wheellinescroll);
}

void UserPreferencesInput_wheel_scroll_lines_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->wheellinescroll = CLAMPIS(value, 0, 32);
}

int UserPreferencesInput_use_trackpad_natural_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag2) & 4) != 0);
}

void UserPreferencesInput_use_trackpad_natural_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag2 |= 4;
	else data->uiflag2 &= ~4;
}

void UserPreferencesInput_active_keyconfig_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->keyconfigstr, 64);
}

int UserPreferencesInput_active_keyconfig_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->keyconfigstr);
}

void UserPreferencesInput_active_keyconfig_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->keyconfigstr, value, 64);
}

static PointerRNA UserPreferencesFilePaths_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserPreferencesFilePaths_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferencesFilePaths_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserPreferencesFilePaths_rna_properties_get(iter);
}

void UserPreferencesFilePaths_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferencesFilePaths_rna_properties_get(iter);
}

void UserPreferencesFilePaths_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferencesFilePaths_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserPreferencesFilePaths_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserPreferencesFilePaths_show_hidden_files_datablocks_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 65536) != 0);
}

void UserPreferencesFilePaths_show_hidden_files_datablocks_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 65536;
	else data->uiflag &= ~65536;
}

int UserPreferencesFilePaths_use_filter_files_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 8) != 0);
}

void UserPreferencesFilePaths_use_filter_files_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 8;
	else data->uiflag &= ~8;
}

int UserPreferencesFilePaths_hide_recent_locations_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 268435456) != 0);
}

void UserPreferencesFilePaths_hide_recent_locations_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 268435456;
	else data->uiflag &= ~268435456;
}

int UserPreferencesFilePaths_hide_system_bookmarks_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & INT_MIN) != 0);
}

void UserPreferencesFilePaths_hide_system_bookmarks_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= INT_MIN;
	else data->uiflag &= ~INT_MIN;
}

int UserPreferencesFilePaths_show_thumbnails_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 536870912) != 0);
}

void UserPreferencesFilePaths_show_thumbnails_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 536870912;
	else data->uiflag &= ~536870912;
}

int UserPreferencesFilePaths_use_relative_paths_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 1048576) != 0);
}

void UserPreferencesFilePaths_use_relative_paths_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 1048576;
	else data->flag &= ~1048576;
}

int UserPreferencesFilePaths_use_file_compression_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 32768) != 0);
}

void UserPreferencesFilePaths_use_file_compression_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 32768;
	else data->flag &= ~32768;
}

int UserPreferencesFilePaths_use_load_ui_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->flag) & 8388608) != 0);
}

void UserPreferencesFilePaths_use_load_ui_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->flag |= 8388608;
	else data->flag &= ~8388608;
}

void UserPreferencesFilePaths_font_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->fontdir, 768);
}

int UserPreferencesFilePaths_font_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->fontdir);
}

void UserPreferencesFilePaths_font_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->fontdir, value, 768);
}

void UserPreferencesFilePaths_texture_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->textudir, 768);
}

int UserPreferencesFilePaths_texture_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->textudir);
}

void UserPreferencesFilePaths_texture_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->textudir, value, 768);
}

void UserPreferencesFilePaths_render_output_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->renderdir, 1024);
}

int UserPreferencesFilePaths_render_output_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->renderdir);
}

void UserPreferencesFilePaths_render_output_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->renderdir, value, 1024);
}

void UserPreferencesFilePaths_script_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->pythondir, 768);
}

int UserPreferencesFilePaths_script_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->pythondir);
}

void UserPreferencesFilePaths_script_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->pythondir, value, 768);
}

void UserPreferencesFilePaths_i18n_branches_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->i18ndir, 768);
}

int UserPreferencesFilePaths_i18n_branches_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->i18ndir);
}

void UserPreferencesFilePaths_i18n_branches_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->i18ndir, value, 768);
}

void UserPreferencesFilePaths_sound_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->sounddir, 768);
}

int UserPreferencesFilePaths_sound_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->sounddir);
}

void UserPreferencesFilePaths_sound_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->sounddir, value, 768);
}

void UserPreferencesFilePaths_temporary_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->tempdir, 768);
}

int UserPreferencesFilePaths_temporary_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->tempdir);
}

void UserPreferencesFilePaths_temporary_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->tempdir, value, 768);
}

void UserPreferencesFilePaths_render_cache_directory_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->render_cachedir, 768);
}

int UserPreferencesFilePaths_render_cache_directory_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->render_cachedir);
}

void UserPreferencesFilePaths_render_cache_directory_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->render_cachedir, value, 768);
}

void UserPreferencesFilePaths_image_editor_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->image_editor, 1024);
}

int UserPreferencesFilePaths_image_editor_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->image_editor);
}

void UserPreferencesFilePaths_image_editor_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->image_editor, value, 1024);
}

void UserPreferencesFilePaths_animation_player_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->anim_player, 1024);
}

int UserPreferencesFilePaths_animation_player_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->anim_player);
}

void UserPreferencesFilePaths_animation_player_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->anim_player, value, 1024);
}

int UserPreferencesFilePaths_animation_player_preset_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->anim_player_preset);
}

void UserPreferencesFilePaths_animation_player_preset_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->anim_player_preset = value;
}

int UserPreferencesFilePaths_save_version_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->versions);
}

void UserPreferencesFilePaths_save_version_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->versions = CLAMPIS(value, 0, 32);
}

int UserPreferencesFilePaths_use_auto_save_temporary_files_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void UserPreferencesFilePaths_use_auto_save_temporary_files_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

int UserPreferencesFilePaths_auto_save_time_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->savetime);
}

void UserPreferencesFilePaths_auto_save_time_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->savetime = CLAMPIS(value, 1, 60);
}

int UserPreferencesFilePaths_use_keep_session_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag2) & 1) != 0);
}

void UserPreferencesFilePaths_use_keep_session_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag2 |= 1;
	else data->uiflag2 &= ~1;
}

int UserPreferencesFilePaths_recent_files_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->recent_files);
}

void UserPreferencesFilePaths_recent_files_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->recent_files = CLAMPIS(value, 0, 30);
}

int UserPreferencesFilePaths_use_save_preview_images_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 65536) != 0);
}

void UserPreferencesFilePaths_use_save_preview_images_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 65536;
	else data->flag &= ~65536;
}

static PointerRNA UserPreferencesSystem_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void UserPreferencesSystem_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferencesSystem_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = UserPreferencesSystem_rna_properties_get(iter);
}

void UserPreferencesSystem_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferencesSystem_rna_properties_get(iter);
}

void UserPreferencesSystem_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int UserPreferencesSystem_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA UserPreferencesSystem_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

int UserPreferencesSystem_use_international_fonts_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->transopts) & 32) != 0);
}

void UserPreferencesSystem_use_international_fonts_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->transopts |= 32;
	else data->transopts &= ~32;
}

int UserPreferencesSystem_dpi_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->dpi);
}

void UserPreferencesSystem_dpi_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->dpi = CLAMPIS(value, 48, 144);
}

int UserPreferencesSystem_virtual_pixel_mode_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->virtual_pixel);
}

void UserPreferencesSystem_virtual_pixel_mode_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->virtual_pixel = value;
}

void UserPreferencesSystem_font_path_ui_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(value, data->font_path_ui, 1024);
}

int UserPreferencesSystem_font_path_ui_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->font_path_ui);
}

void UserPreferencesSystem_font_path_ui_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy(data->font_path_ui, value, 1024);
}

int UserPreferencesSystem_scrollback_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->scrollback);
}

void UserPreferencesSystem_scrollback_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->scrollback = CLAMPIS(value, 32, 32768);
}

void UserPreferencesSystem_author_get(PointerRNA *ptr, char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy_utf8(value, data->author, 80);
}

int UserPreferencesSystem_author_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return strlen(data->author);
}

void UserPreferencesSystem_author_set(PointerRNA *ptr, const char *value)
{
	UserDef *data = (UserDef *)(ptr->data);
	BLI_strncpy_utf8(data->author, value, 80);
}

int UserPreferencesSystem_language_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->language);
}

void UserPreferencesSystem_language_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->language = value;
}

int UserPreferencesSystem_use_translate_tooltips_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->transopts) & 1) != 0);
}

void UserPreferencesSystem_use_translate_tooltips_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->transopts |= 1;
	else data->transopts &= ~1;
}

int UserPreferencesSystem_use_translate_interface_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->transopts) & 2) != 0);
}

void UserPreferencesSystem_use_translate_interface_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->transopts |= 2;
	else data->transopts &= ~2;
}

int UserPreferencesSystem_use_translate_new_dataname_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->transopts) & 256) != 0);
}

void UserPreferencesSystem_use_translate_new_dataname_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->transopts |= 256;
	else data->transopts &= ~256;
}

int UserPreferencesSystem_use_textured_fonts_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->transopts) & 64) != 0);
}

void UserPreferencesSystem_use_textured_fonts_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->transopts |= 64;
	else data->transopts &= ~64;
}

int UserPreferencesSystem_solid_lights_length(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (data->light == NULL) ? 0 : 3;
}

static PointerRNA UserPreferencesSystem_solid_lights_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_UserSolidLight, rna_iterator_array_get(iter));
}

void UserPreferencesSystem_solid_lights_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_UserPreferencesSystem_solid_lights;

	rna_iterator_array_begin(iter, data->light, sizeof(data->light[0]), 3, 0, NULL);

	if (iter->valid)
		iter->ptr = UserPreferencesSystem_solid_lights_get(iter);
}

void UserPreferencesSystem_solid_lights_next(CollectionPropertyIterator *iter)
{
	rna_iterator_array_next(iter);

	if (iter->valid)
		iter->ptr = UserPreferencesSystem_solid_lights_get(iter);
}

void UserPreferencesSystem_solid_lights_end(CollectionPropertyIterator *iter)
{
	rna_iterator_array_end(iter);
}

int UserPreferencesSystem_solid_lights_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	UserPreferencesSystem_solid_lights_begin(&iter, ptr);

	if (iter.valid) {
		ArrayIterator *internal = &iter.internal.array;
		if (index < 0 || index >= internal->length) {
#ifdef __GNUC__
			printf("Array iterator out of range: %s (index %d)\n", __func__, index);
#else
			printf("Array iterator out of range: (index %d)\n", index);
#endif
		}
		else if (internal->skip) {
			while (index-- > 0 && iter.valid) {
				rna_iterator_array_next(&iter);
			}
			found = (index == -1 && iter.valid);
		}
		else {
			internal->ptr += internal->itemsize * index;
			found = 1;
		}
		if (found) *r_ptr = UserPreferencesSystem_solid_lights_get(&iter);
	}

	UserPreferencesSystem_solid_lights_end(&iter);

	return found;
}

int UserPreferencesSystem_use_weight_color_range_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->flag) & 131072) != 0);
}

void UserPreferencesSystem_use_weight_color_range_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->flag |= 131072;
	else data->flag &= ~131072;
}

PointerRNA UserPreferencesSystem_weight_color_range_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_ColorRamp, &data->coba_weight);
}

int UserPreferencesSystem_color_picker_type_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->color_picker_type);
}

void UserPreferencesSystem_color_picker_type_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->color_picker_type = value;
}

int UserPreferencesSystem_use_preview_images_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag) & 256) != 0);
}

void UserPreferencesSystem_use_preview_images_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag |= 256;
	else data->uiflag &= ~256;
}

int UserPreferencesSystem_use_scripts_auto_execute_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->flag) & 4194304) != 0);
}

void UserPreferencesSystem_use_scripts_auto_execute_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->flag |= 4194304;
	else data->flag &= ~4194304;
}

int UserPreferencesSystem_use_tabs_as_spaces_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->flag) & 33554432) != 0);
}

void UserPreferencesSystem_use_tabs_as_spaces_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->flag |= 33554432;
	else data->flag &= ~33554432;
}

int UserPreferencesSystem_prefetch_frames_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->prefetchframes);
}

void UserPreferencesSystem_prefetch_frames_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->prefetchframes = CLAMPIS(value, 0, INT_MAX);
}

int UserPreferencesSystem_memory_cache_limit_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->memcachelimit);
}

void UserPreferencesSystem_memory_cache_limit_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
#if defined(SPEC)
	data->memcachelimit = CLAMPIS(value, 0, SPEC_MEMCACHELIMIT);
#else
	data->memcachelimit = CLAMPIS(value, 0, 32768);
#endif
}

int UserPreferencesSystem_frame_server_port_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->frameserverport);
}

void UserPreferencesSystem_frame_server_port_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->frameserverport = CLAMPIS(value, 0, 32727);
}

float UserPreferencesSystem_gl_clip_alpha_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (float)(data->glalphaclip);
}

void UserPreferencesSystem_gl_clip_alpha_set(PointerRNA *ptr, float value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->glalphaclip = CLAMPIS(value, 0.0f, 1.0f);
}

int UserPreferencesSystem_use_mipmaps_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->gameflags) & 4) != 0);
}

void UserPreferencesSystem_use_mipmaps_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->gameflags |= 4;
	else data->gameflags &= ~4;
}

int UserPreferencesSystem_use_16bit_textures_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->use_16bit_textures) & 1) != 0);
}

void UserPreferencesSystem_use_16bit_textures_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->use_16bit_textures |= 1;
	else data->use_16bit_textures &= ~1;
}

int UserPreferencesSystem_use_gpu_mipmap_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->use_gpu_mipmap) & 1) != 0);
}

void UserPreferencesSystem_use_gpu_mipmap_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->use_gpu_mipmap |= 1;
	else data->use_gpu_mipmap &= ~1;
}

int UserPreferencesSystem_image_draw_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->image_draw_method);
}

void UserPreferencesSystem_image_draw_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->image_draw_method = value;
}

int UserPreferencesSystem_use_vertex_buffer_objects_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->gameflags) & 8) != 0);
}

void UserPreferencesSystem_use_vertex_buffer_objects_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->gameflags |= 8;
	else data->gameflags &= ~8;
}

int UserPreferencesSystem_anisotropic_filter_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->anisotropic_filter);
}

void UserPreferencesSystem_anisotropic_filter_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->anisotropic_filter = value;
}

int UserPreferencesSystem_gl_texture_limit_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->glreslimit);
}

void UserPreferencesSystem_gl_texture_limit_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->glreslimit = value;
}

int UserPreferencesSystem_texture_time_out_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->textimeout);
}

void UserPreferencesSystem_texture_time_out_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->textimeout = CLAMPIS(value, 0, 3600);
}

int UserPreferencesSystem_texture_collection_rate_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->texcollectrate);
}

void UserPreferencesSystem_texture_collection_rate_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->texcollectrate = CLAMPIS(value, 1, 3600);
}

int UserPreferencesSystem_window_draw_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->wmdrawmethod);
}

void UserPreferencesSystem_window_draw_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->wmdrawmethod = value;
}

int UserPreferencesSystem_audio_mixing_buffer_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->mixbufsize);
}

void UserPreferencesSystem_audio_mixing_buffer_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->mixbufsize = value;
}

int UserPreferencesSystem_audio_device_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->audiodevice);
}

void UserPreferencesSystem_audio_device_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->audiodevice = value;
}

int UserPreferencesSystem_audio_sample_rate_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->audiorate);
}

void UserPreferencesSystem_audio_sample_rate_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->audiorate = value;
}

int UserPreferencesSystem_audio_sample_format_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->audioformat);
}

void UserPreferencesSystem_audio_sample_format_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->audioformat = value;
}

int UserPreferencesSystem_audio_channels_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->audiochannels);
}

void UserPreferencesSystem_audio_channels_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->audiochannels = value;
}

int UserPreferencesSystem_screencast_fps_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->scrcastfps);
}

void UserPreferencesSystem_screencast_fps_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->scrcastfps = CLAMPIS(value, 10, 100);
}

int UserPreferencesSystem_screencast_wait_time_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->scrcastwait);
}

void UserPreferencesSystem_screencast_wait_time_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->scrcastwait = CLAMPIS(value, 10, 1000);
}

int UserPreferencesSystem_use_text_antialiasing_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return !(((data->text_render) & 1) != 0);
}

void UserPreferencesSystem_use_text_antialiasing_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (!value) data->text_render |= 1;
	else data->text_render &= ~1;
}

int UserPreferencesSystem_select_method_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (int)(data->gpu_select_method);
}

void UserPreferencesSystem_select_method_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->gpu_select_method = value;
}

int UserPreferencesSystem_multi_sample_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return ((data->ogl_multisamples) & 30);
}

void UserPreferencesSystem_multi_sample_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	data->ogl_multisamples &= ~30;
	data->ogl_multisamples |= value;
}

int UserPreferencesSystem_use_region_overlap_get(PointerRNA *ptr)
{
	UserDef *data = (UserDef *)(ptr->data);
	return (((data->uiflag2) & 2) != 0);
}

void UserPreferencesSystem_use_region_overlap_set(PointerRNA *ptr, int value)
{
	UserDef *data = (UserDef *)(ptr->data);
	if (value) data->uiflag2 |= 2;
	else data->uiflag2 &= ~2;
}

static PointerRNA Addon_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void Addon_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_Addon_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = Addon_rna_properties_get(iter);
}

void Addon_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = Addon_rna_properties_get(iter);
}

void Addon_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int Addon_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA Addon_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void Addon_module_get(PointerRNA *ptr, char *value)
{
	bAddon *data = (bAddon *)(ptr->data);
	BLI_strncpy_utf8(value, data->module, 64);
}

int Addon_module_length(PointerRNA *ptr)
{
	bAddon *data = (bAddon *)(ptr->data);
	return strlen(data->module);
}

void Addon_module_set(PointerRNA *ptr, const char *value)
{
	bAddon *data = (bAddon *)(ptr->data);
	BLI_strncpy_utf8(data->module, value, 64);
}

PointerRNA Addon_preferences_get(PointerRNA *ptr)
{
	return rna_Addon_preferences_get(ptr);
}

static PointerRNA AddonPreferences_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void AddonPreferences_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_AddonPreferences_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = AddonPreferences_rna_properties_get(iter);
}

void AddonPreferences_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = AddonPreferences_rna_properties_get(iter);
}

void AddonPreferences_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int AddonPreferences_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA AddonPreferences_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void AddonPreferences_bl_idname_get(PointerRNA *ptr, char *value)
{
	bAddon *data = (bAddon *)(ptr->data);
	BLI_strncpy_utf8(value, data->module, 64);
}

int AddonPreferences_bl_idname_length(PointerRNA *ptr)
{
	bAddon *data = (bAddon *)(ptr->data);
	return strlen(data->module);
}

void AddonPreferences_bl_idname_set(PointerRNA *ptr, const char *value)
{
	bAddon *data = (bAddon *)(ptr->data);
	BLI_strncpy_utf8(data->module, value, 64);
}

static PointerRNA PathCompare_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void PathCompare_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_PathCompare_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = PathCompare_rna_properties_get(iter);
}

void PathCompare_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = PathCompare_rna_properties_get(iter);
}

void PathCompare_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int PathCompare_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA PathCompare_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void PathCompare_path_get(PointerRNA *ptr, char *value)
{
	bPathCompare *data = (bPathCompare *)(ptr->data);
	BLI_strncpy(value, data->path, 768);
}

int PathCompare_path_length(PointerRNA *ptr)
{
	bPathCompare *data = (bPathCompare *)(ptr->data);
	return strlen(data->path);
}

void PathCompare_path_set(PointerRNA *ptr, const char *value)
{
	bPathCompare *data = (bPathCompare *)(ptr->data);
	BLI_strncpy(data->path, value, 768);
}

int PathCompare_use_glob_get(PointerRNA *ptr)
{
	bPathCompare *data = (bPathCompare *)(ptr->data);
	return (((data->flag) & 1) != 0);
}

void PathCompare_use_glob_set(PointerRNA *ptr, int value)
{
	bPathCompare *data = (bPathCompare *)(ptr->data);
	if (value) data->flag |= 1;
	else data->flag &= ~1;
}

































struct bAddon *Addons_new(void)
{
	return rna_userdef_addon_new();
}

void Addons_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bAddon *addon;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	
	addon = rna_userdef_addon_new();
	*((struct bAddon **)_retdata) = addon;
}

void Addons_remove(ReportList *reports, struct PointerRNA *addon)
{
	rna_userdef_addon_remove(reports, addon);
}

void Addons_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *addon;
	char *_data;
	
	_data = (char *)_parms->data;
	addon = *((struct PointerRNA **)_data);
	
	rna_userdef_addon_remove(reports, addon);
}

/* Repeated prototypes to detect errors */

struct bAddon *rna_userdef_addon_new(void);
void rna_userdef_addon_remove(ReportList *reports, struct PointerRNA *addon);

struct bPathCompare *PathCompareCollection_new(void)
{
	return rna_userdef_pathcompare_new();
}

void PathCompareCollection_new_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct bPathCompare *pathcmp;
	char *_data, *_retdata;
	
	_data = (char *)_parms->data;
	_retdata = _data;
	
	pathcmp = rna_userdef_pathcompare_new();
	*((struct bPathCompare **)_retdata) = pathcmp;
}

void PathCompareCollection_remove(ReportList *reports, struct PointerRNA *pathcmp)
{
	rna_userdef_pathcompare_remove(reports, pathcmp);
}

void PathCompareCollection_remove_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct PointerRNA *pathcmp;
	char *_data;
	
	_data = (char *)_parms->data;
	pathcmp = *((struct PointerRNA **)_data);
	
	rna_userdef_pathcompare_remove(reports, pathcmp);
}

/* Repeated prototypes to detect errors */

struct bPathCompare *rna_userdef_pathcompare_new(void);
void rna_userdef_pathcompare_remove(ReportList *reports, struct PointerRNA *pathcmp);





int UserPreferencesSystem_is_occlusion_query_supported(struct UserDef *_self)
{
	return rna_Scene_GPU_selection_supported(_self);
}

void UserPreferencesSystem_is_occlusion_query_supported_call(bContext *C, ReportList *reports, PointerRNA *_ptr, ParameterList *_parms)
{
	struct UserDef *_self;
	int is_supported;
	char *_data, *_retdata;
	
	_self = (struct UserDef *)_ptr->data;
	_data = (char *)_parms->data;
	_retdata = _data;
	
	is_supported = rna_Scene_GPU_selection_supported(_self);
	*((int *)_retdata) = is_supported;
}

/* Repeated prototypes to detect errors */

int rna_Scene_GPU_selection_supported(struct UserDef *_self);




/* Font Style */
CollectionPropertyRNA rna_ThemeFontStyle_rna_properties = {
	{(PropertyRNA *)&rna_ThemeFontStyle_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFontStyle_rna_properties_begin, ThemeFontStyle_rna_properties_next, ThemeFontStyle_rna_properties_end, ThemeFontStyle_rna_properties_get, NULL, NULL, ThemeFontStyle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeFontStyle_rna_type = {
	{(PropertyRNA *)&rna_ThemeFontStyle_points, (PropertyRNA *)&rna_ThemeFontStyle_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFontStyle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

IntPropertyRNA rna_ThemeFontStyle_points = {
	{(PropertyRNA *)&rna_ThemeFontStyle_font_kerning_style, (PropertyRNA *)&rna_ThemeFontStyle_rna_type,
	-1, "points", 8195, "Points",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiFontStyle, points), 1, NULL},
	ThemeFontStyle_points_get, ThemeFontStyle_points_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	6, 48, 6, 48, 1, 0, NULL
};

static EnumPropertyItem rna_ThemeFontStyle_font_kerning_style_items[3] = {
	{0, "UNFITTED", 0, "Unfitted", "Use scaled but un-grid-fitted kerning distances"},
	{1, "FITTED", 0, "Fitted", "Use scaled and grid-fitted kerning distances"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_ThemeFontStyle_font_kerning_style = {
	{(PropertyRNA *)&rna_ThemeFontStyle_shadow, (PropertyRNA *)&rna_ThemeFontStyle_points,
	-1, "font_kerning_style", 3, "Kerning Style",
	"Which style to use for font kerning",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFontStyle_font_kerning_style_get, ThemeFontStyle_font_kerning_style_set, NULL, NULL, NULL, NULL, rna_ThemeFontStyle_font_kerning_style_items, 2, 0
};

IntPropertyRNA rna_ThemeFontStyle_shadow = {
	{(PropertyRNA *)&rna_ThemeFontStyle_shadow_offset_x, (PropertyRNA *)&rna_ThemeFontStyle_font_kerning_style,
	-1, "shadow", 8195, "Shadow Size",
	"Shadow size (0, 3 and 5 supported)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiFontStyle, shadow), 1, NULL},
	ThemeFontStyle_shadow_get, ThemeFontStyle_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 5, 0, 5, 1, 0, NULL
};

IntPropertyRNA rna_ThemeFontStyle_shadow_offset_x = {
	{(PropertyRNA *)&rna_ThemeFontStyle_shadow_offset_y, (PropertyRNA *)&rna_ThemeFontStyle_shadow,
	-1, "shadow_offset_x", 8195, "Shadow X Offset",
	"Shadow offset in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiFontStyle, shadx), 1, NULL},
	ThemeFontStyle_shadow_offset_x_get, ThemeFontStyle_shadow_offset_x_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10, 10, -10, 10, 1, 0, NULL
};

IntPropertyRNA rna_ThemeFontStyle_shadow_offset_y = {
	{(PropertyRNA *)&rna_ThemeFontStyle_shadow_alpha, (PropertyRNA *)&rna_ThemeFontStyle_shadow_offset_x,
	-1, "shadow_offset_y", 8195, "Shadow Y Offset",
	"Shadow offset in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiFontStyle, shady), 1, NULL},
	ThemeFontStyle_shadow_offset_y_get, ThemeFontStyle_shadow_offset_y_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-10, 10, -10, 10, 1, 0, NULL
};

FloatPropertyRNA rna_ThemeFontStyle_shadow_alpha = {
	{(PropertyRNA *)&rna_ThemeFontStyle_shadow_value, (PropertyRNA *)&rna_ThemeFontStyle_shadow_offset_y,
	-1, "shadow_alpha", 8195, "Shadow Alpha",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiFontStyle, shadowalpha), 4, NULL},
	ThemeFontStyle_shadow_alpha_get, ThemeFontStyle_shadow_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_ThemeFontStyle_shadow_value = {
	{NULL, (PropertyRNA *)&rna_ThemeFontStyle_shadow_alpha,
	-1, "shadow_value", 8195, "Shadow Brightness",
	"Shadow color in gray value",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiFontStyle, shadowcolor), 4, NULL},
	ThemeFontStyle_shadow_value_get, ThemeFontStyle_shadow_value_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ThemeFontStyle = {
	{(ContainerRNA *)&RNA_ThemeStyle, (ContainerRNA *)&RNA_Menu,
	NULL,
	{(PropertyRNA *)&rna_ThemeFontStyle_rna_properties, (PropertyRNA *)&rna_ThemeFontStyle_shadow_value}},
	"ThemeFontStyle", NULL, NULL, 0, "Font Style",
	"Theme settings for Font",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeFontStyle_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Style */
CollectionPropertyRNA rna_ThemeStyle_rna_properties = {
	{(PropertyRNA *)&rna_ThemeStyle_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeStyle_rna_properties_begin, ThemeStyle_rna_properties_next, ThemeStyle_rna_properties_end, ThemeStyle_rna_properties_get, NULL, NULL, ThemeStyle_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeStyle_rna_type = {
	{(PropertyRNA *)&rna_ThemeStyle_panel_title, (PropertyRNA *)&rna_ThemeStyle_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeStyle_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeStyle_panel_title = {
	{(PropertyRNA *)&rna_ThemeStyle_widget_label, (PropertyRNA *)&rna_ThemeStyle_rna_type,
	-1, "panel_title", 8650752, "Panel Title Font",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeStyle_panel_title_get, NULL, NULL, NULL,&RNA_ThemeFontStyle
};

PointerPropertyRNA rna_ThemeStyle_widget_label = {
	{(PropertyRNA *)&rna_ThemeStyle_widget, (PropertyRNA *)&rna_ThemeStyle_panel_title,
	-1, "widget_label", 8650752, "Widget Label Style",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeStyle_widget_label_get, NULL, NULL, NULL,&RNA_ThemeFontStyle
};

PointerPropertyRNA rna_ThemeStyle_widget = {
	{NULL, (PropertyRNA *)&rna_ThemeStyle_widget_label,
	-1, "widget", 8650752, "Widget Style",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeStyle_widget_get, NULL, NULL, NULL,&RNA_ThemeFontStyle
};

StructRNA RNA_ThemeStyle = {
	{(ContainerRNA *)&RNA_ThemeWidgetColors, (ContainerRNA *)&RNA_ThemeFontStyle,
	NULL,
	{(PropertyRNA *)&rna_ThemeStyle_rna_properties, (PropertyRNA *)&rna_ThemeStyle_widget}},
	"ThemeStyle", NULL, NULL, 0, "Style",
	"Theme settings for style sets",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeStyle_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Widget Color Set */
CollectionPropertyRNA rna_ThemeWidgetColors_rna_properties = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeWidgetColors_rna_properties_begin, ThemeWidgetColors_rna_properties_next, ThemeWidgetColors_rna_properties_end, ThemeWidgetColors_rna_properties_get, NULL, NULL, ThemeWidgetColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeWidgetColors_rna_type = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_outline, (PropertyRNA *)&rna_ThemeWidgetColors_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeWidgetColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ThemeWidgetColors_outline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetColors_outline = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_inner, (PropertyRNA *)&rna_ThemeWidgetColors_rna_type,
	-1, "outline", 8195, "Outline",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, outline), 2, NULL},
	NULL, NULL, ThemeWidgetColors_outline_get, ThemeWidgetColors_outline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetColors_outline_default
};

static float rna_ThemeWidgetColors_inner_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetColors_inner = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_inner_sel, (PropertyRNA *)&rna_ThemeWidgetColors_outline,
	-1, "inner", 8195, "Inner",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, inner), 2, NULL},
	NULL, NULL, ThemeWidgetColors_inner_get, ThemeWidgetColors_inner_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetColors_inner_default
};

static float rna_ThemeWidgetColors_inner_sel_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetColors_inner_sel = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_item, (PropertyRNA *)&rna_ThemeWidgetColors_inner,
	-1, "inner_sel", 8195, "Inner Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, inner_sel), 2, NULL},
	NULL, NULL, ThemeWidgetColors_inner_sel_get, ThemeWidgetColors_inner_sel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetColors_inner_sel_default
};

static float rna_ThemeWidgetColors_item_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetColors_item = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_text, (PropertyRNA *)&rna_ThemeWidgetColors_inner_sel,
	-1, "item", 8195, "Item",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, item), 2, NULL},
	NULL, NULL, ThemeWidgetColors_item_get, ThemeWidgetColors_item_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetColors_item_default
};

static float rna_ThemeWidgetColors_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetColors_text = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_text_sel, (PropertyRNA *)&rna_ThemeWidgetColors_item,
	-1, "text", 8195, "Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, text), 2, NULL},
	NULL, NULL, ThemeWidgetColors_text_get, ThemeWidgetColors_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetColors_text_default
};

static float rna_ThemeWidgetColors_text_sel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetColors_text_sel = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_show_shaded, (PropertyRNA *)&rna_ThemeWidgetColors_text,
	-1, "text_sel", 8195, "Text Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, text_sel), 2, NULL},
	NULL, NULL, ThemeWidgetColors_text_sel_get, ThemeWidgetColors_text_sel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetColors_text_sel_default
};

BoolPropertyRNA rna_ThemeWidgetColors_show_shaded = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_shadetop, (PropertyRNA *)&rna_ThemeWidgetColors_text_sel,
	-1, "show_shaded", 3, "Shaded",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeWidgetColors_show_shaded_get, ThemeWidgetColors_show_shaded_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_ThemeWidgetColors_shadetop = {
	{(PropertyRNA *)&rna_ThemeWidgetColors_shadedown, (PropertyRNA *)&rna_ThemeWidgetColors_show_shaded,
	-1, "shadetop", 8195, "Shade Top",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, shadetop), 1, NULL},
	ThemeWidgetColors_shadetop_get, ThemeWidgetColors_shadetop_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-100, 100, -100, 100, 1, 0, NULL
};

IntPropertyRNA rna_ThemeWidgetColors_shadedown = {
	{NULL, (PropertyRNA *)&rna_ThemeWidgetColors_shadetop,
	-1, "shadedown", 8195, "Shade Down",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetColors, shadedown), 1, NULL},
	ThemeWidgetColors_shadedown_get, ThemeWidgetColors_shadedown_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	-100, 100, -100, 100, 1, 0, NULL
};

StructRNA RNA_ThemeWidgetColors = {
	{(ContainerRNA *)&RNA_ThemeWidgetStateColors, (ContainerRNA *)&RNA_ThemeStyle,
	NULL,
	{(PropertyRNA *)&rna_ThemeWidgetColors_rna_properties, (PropertyRNA *)&rna_ThemeWidgetColors_shadedown}},
	"ThemeWidgetColors", NULL, NULL, 0, "Theme Widget Color Set",
	"Theme settings for widget color sets",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeWidgetColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Widget State Color */
CollectionPropertyRNA rna_ThemeWidgetStateColors_rna_properties = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeWidgetStateColors_rna_properties_begin, ThemeWidgetStateColors_rna_properties_next, ThemeWidgetStateColors_rna_properties_end, ThemeWidgetStateColors_rna_properties_get, NULL, NULL, ThemeWidgetStateColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeWidgetStateColors_rna_type = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_inner_anim, (PropertyRNA *)&rna_ThemeWidgetStateColors_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeWidgetStateColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ThemeWidgetStateColors_inner_anim_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetStateColors_inner_anim = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_inner_anim_sel, (PropertyRNA *)&rna_ThemeWidgetStateColors_rna_type,
	-1, "inner_anim", 8195, "Animated",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, inner_anim), 2, NULL},
	NULL, NULL, ThemeWidgetStateColors_inner_anim_get, ThemeWidgetStateColors_inner_anim_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetStateColors_inner_anim_default
};

static float rna_ThemeWidgetStateColors_inner_anim_sel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetStateColors_inner_anim_sel = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_inner_key, (PropertyRNA *)&rna_ThemeWidgetStateColors_inner_anim,
	-1, "inner_anim_sel", 8195, "Animated Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, inner_anim_sel), 2, NULL},
	NULL, NULL, ThemeWidgetStateColors_inner_anim_sel_get, ThemeWidgetStateColors_inner_anim_sel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetStateColors_inner_anim_sel_default
};

static float rna_ThemeWidgetStateColors_inner_key_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetStateColors_inner_key = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_inner_key_sel, (PropertyRNA *)&rna_ThemeWidgetStateColors_inner_anim_sel,
	-1, "inner_key", 8195, "Keyframe",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, inner_key), 2, NULL},
	NULL, NULL, ThemeWidgetStateColors_inner_key_get, ThemeWidgetStateColors_inner_key_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetStateColors_inner_key_default
};

static float rna_ThemeWidgetStateColors_inner_key_sel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetStateColors_inner_key_sel = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_inner_driven, (PropertyRNA *)&rna_ThemeWidgetStateColors_inner_key,
	-1, "inner_key_sel", 8195, "Keyframe Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, inner_key_sel), 2, NULL},
	NULL, NULL, ThemeWidgetStateColors_inner_key_sel_get, ThemeWidgetStateColors_inner_key_sel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetStateColors_inner_key_sel_default
};

static float rna_ThemeWidgetStateColors_inner_driven_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetStateColors_inner_driven = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_inner_driven_sel, (PropertyRNA *)&rna_ThemeWidgetStateColors_inner_key_sel,
	-1, "inner_driven", 8195, "Driven",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, inner_driven), 2, NULL},
	NULL, NULL, ThemeWidgetStateColors_inner_driven_get, ThemeWidgetStateColors_inner_driven_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetStateColors_inner_driven_default
};

static float rna_ThemeWidgetStateColors_inner_driven_sel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeWidgetStateColors_inner_driven_sel = {
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_blend, (PropertyRNA *)&rna_ThemeWidgetStateColors_inner_driven,
	-1, "inner_driven_sel", 8195, "Driven Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, inner_driven_sel), 2, NULL},
	NULL, NULL, ThemeWidgetStateColors_inner_driven_sel_get, ThemeWidgetStateColors_inner_driven_sel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeWidgetStateColors_inner_driven_sel_default
};

FloatPropertyRNA rna_ThemeWidgetStateColors_blend = {
	{NULL, (PropertyRNA *)&rna_ThemeWidgetStateColors_inner_driven_sel,
	-1, "blend", 8195, "Blend",
	"",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiWidgetStateColors, blend), 4, NULL},
	ThemeWidgetStateColors_blend_get, ThemeWidgetStateColors_blend_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_ThemeWidgetStateColors = {
	{(ContainerRNA *)&RNA_ThemePanelColors, (ContainerRNA *)&RNA_ThemeWidgetColors,
	NULL,
	{(PropertyRNA *)&rna_ThemeWidgetStateColors_rna_properties, (PropertyRNA *)&rna_ThemeWidgetStateColors_blend}},
	"ThemeWidgetStateColors", NULL, NULL, 0, "Theme Widget State Color",
	"Theme settings for widget state colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeWidgetStateColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Panel Color */
CollectionPropertyRNA rna_ThemePanelColors_rna_properties = {
	{(PropertyRNA *)&rna_ThemePanelColors_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemePanelColors_rna_properties_begin, ThemePanelColors_rna_properties_next, ThemePanelColors_rna_properties_end, ThemePanelColors_rna_properties_get, NULL, NULL, ThemePanelColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemePanelColors_rna_type = {
	{(PropertyRNA *)&rna_ThemePanelColors_header, (PropertyRNA *)&rna_ThemePanelColors_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemePanelColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ThemePanelColors_header_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemePanelColors_header = {
	{(PropertyRNA *)&rna_ThemePanelColors_back, (PropertyRNA *)&rna_ThemePanelColors_rna_type,
	-1, "header", 8195, "Header",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiPanelColors, header), 2, NULL},
	NULL, NULL, ThemePanelColors_header_get, ThemePanelColors_header_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemePanelColors_header_default
};

static float rna_ThemePanelColors_back_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemePanelColors_back = {
	{(PropertyRNA *)&rna_ThemePanelColors_show_header, (PropertyRNA *)&rna_ThemePanelColors_header,
	-1, "back", 8195, "Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiPanelColors, back), 2, NULL},
	NULL, NULL, ThemePanelColors_back_get, ThemePanelColors_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemePanelColors_back_default
};

BoolPropertyRNA rna_ThemePanelColors_show_header = {
	{(PropertyRNA *)&rna_ThemePanelColors_show_back, (PropertyRNA *)&rna_ThemePanelColors_back,
	-1, "show_header", 8195, "Show Header",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiPanelColors, show_header), 1, NULL},
	ThemePanelColors_show_header_get, ThemePanelColors_show_header_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_ThemePanelColors_show_back = {
	{NULL, (PropertyRNA *)&rna_ThemePanelColors_show_header,
	-1, "show_back", 8195, "Show Background",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiPanelColors, show_back), 1, NULL},
	ThemePanelColors_show_back_get, ThemePanelColors_show_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ThemePanelColors = {
	{(ContainerRNA *)&RNA_ThemeGradientColors, (ContainerRNA *)&RNA_ThemeWidgetStateColors,
	NULL,
	{(PropertyRNA *)&rna_ThemePanelColors_rna_properties, (PropertyRNA *)&rna_ThemePanelColors_show_back}},
	"ThemePanelColors", NULL, NULL, 0, "Theme Panel Color",
	"Theme settings for panel colors",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemePanelColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Background Color */
CollectionPropertyRNA rna_ThemeGradientColors_rna_properties = {
	{(PropertyRNA *)&rna_ThemeGradientColors_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeGradientColors_rna_properties_begin, ThemeGradientColors_rna_properties_next, ThemeGradientColors_rna_properties_end, ThemeGradientColors_rna_properties_get, NULL, NULL, ThemeGradientColors_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeGradientColors_rna_type = {
	{(PropertyRNA *)&rna_ThemeGradientColors_show_grad, (PropertyRNA *)&rna_ThemeGradientColors_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeGradientColors_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_ThemeGradientColors_show_grad = {
	{(PropertyRNA *)&rna_ThemeGradientColors_gradient, (PropertyRNA *)&rna_ThemeGradientColors_rna_type,
	-1, "show_grad", 8195, "Use Gradient",
	"Do a gradient for the background of the viewport working area",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiGradientColors, show_grad), 0, NULL},
	ThemeGradientColors_show_grad_get, ThemeGradientColors_show_grad_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_ThemeGradientColors_gradient_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGradientColors_gradient = {
	{(PropertyRNA *)&rna_ThemeGradientColors_high_gradient, (PropertyRNA *)&rna_ThemeGradientColors_show_grad,
	-1, "gradient", 8195, "Gradient Low",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiGradientColors, gradient), 2, NULL},
	NULL, NULL, ThemeGradientColors_gradient_get, ThemeGradientColors_gradient_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGradientColors_gradient_default
};

static float rna_ThemeGradientColors_high_gradient_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGradientColors_high_gradient = {
	{NULL, (PropertyRNA *)&rna_ThemeGradientColors_gradient,
	-1, "high_gradient", 8195, "Gradient High/Off",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(uiGradientColors, high_gradient), 2, NULL},
	NULL, NULL, ThemeGradientColors_high_gradient_get, ThemeGradientColors_high_gradient_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGradientColors_high_gradient_default
};

StructRNA RNA_ThemeGradientColors = {
	{(ContainerRNA *)&RNA_ThemeUserInterface, (ContainerRNA *)&RNA_ThemePanelColors,
	NULL,
	{(PropertyRNA *)&rna_ThemeGradientColors_rna_properties, (PropertyRNA *)&rna_ThemeGradientColors_high_gradient}},
	"ThemeGradientColors", NULL, NULL, 0, "Theme Background Color",
	"Theme settings for background colors and gradient",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeGradientColors_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme User Interface */
CollectionPropertyRNA rna_ThemeUserInterface_rna_properties = {
	{(PropertyRNA *)&rna_ThemeUserInterface_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_rna_properties_begin, ThemeUserInterface_rna_properties_next, ThemeUserInterface_rna_properties_end, ThemeUserInterface_rna_properties_get, NULL, NULL, ThemeUserInterface_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeUserInterface_rna_type = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_regular, (PropertyRNA *)&rna_ThemeUserInterface_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_regular = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_tool, (PropertyRNA *)&rna_ThemeUserInterface_rna_type,
	-1, "wcol_regular", 8650752, "Regular Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_regular_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_tool = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_radio, (PropertyRNA *)&rna_ThemeUserInterface_wcol_regular,
	-1, "wcol_tool", 8650752, "Tool Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_tool_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_radio = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_text, (PropertyRNA *)&rna_ThemeUserInterface_wcol_tool,
	-1, "wcol_radio", 8650752, "Radio Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_radio_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_text = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_option, (PropertyRNA *)&rna_ThemeUserInterface_wcol_radio,
	-1, "wcol_text", 8650752, "Text Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_text_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_option = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_toggle, (PropertyRNA *)&rna_ThemeUserInterface_wcol_text,
	-1, "wcol_option", 8650752, "Option Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_option_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_toggle = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_num, (PropertyRNA *)&rna_ThemeUserInterface_wcol_option,
	-1, "wcol_toggle", 8650752, "Toggle Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_toggle_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_num = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_numslider, (PropertyRNA *)&rna_ThemeUserInterface_wcol_toggle,
	-1, "wcol_num", 8650752, "Number Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_num_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_numslider = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_box, (PropertyRNA *)&rna_ThemeUserInterface_wcol_num,
	-1, "wcol_numslider", 8650752, "Slider Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_numslider_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_box = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_menu, (PropertyRNA *)&rna_ThemeUserInterface_wcol_numslider,
	-1, "wcol_box", 8650752, "Box Backdrop Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_box_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_menu = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_pulldown, (PropertyRNA *)&rna_ThemeUserInterface_wcol_box,
	-1, "wcol_menu", 8650752, "Menu Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_menu_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_pulldown = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_menu_back, (PropertyRNA *)&rna_ThemeUserInterface_wcol_menu,
	-1, "wcol_pulldown", 8650752, "Pulldown Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_pulldown_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_menu_back = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_pie_menu, (PropertyRNA *)&rna_ThemeUserInterface_wcol_pulldown,
	-1, "wcol_menu_back", 8650752, "Menu Backdrop Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_menu_back_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_pie_menu = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_tooltip, (PropertyRNA *)&rna_ThemeUserInterface_wcol_menu_back,
	-1, "wcol_pie_menu", 8650752, "Pie Menu Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_pie_menu_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_tooltip = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_menu_item, (PropertyRNA *)&rna_ThemeUserInterface_wcol_pie_menu,
	-1, "wcol_tooltip", 8650752, "Tooltip Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_tooltip_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_menu_item = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_scroll, (PropertyRNA *)&rna_ThemeUserInterface_wcol_tooltip,
	-1, "wcol_menu_item", 8650752, "Menu Item Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_menu_item_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_scroll = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_progress, (PropertyRNA *)&rna_ThemeUserInterface_wcol_menu_item,
	-1, "wcol_scroll", 8650752, "Scroll Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_scroll_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_progress = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_list_item, (PropertyRNA *)&rna_ThemeUserInterface_wcol_scroll,
	-1, "wcol_progress", 8650752, "Progress Bar Widget Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_progress_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_list_item = {
	{(PropertyRNA *)&rna_ThemeUserInterface_wcol_state, (PropertyRNA *)&rna_ThemeUserInterface_wcol_progress,
	-1, "wcol_list_item", 8650752, "List Item Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_list_item_get, NULL, NULL, NULL,&RNA_ThemeWidgetColors
};

PointerPropertyRNA rna_ThemeUserInterface_wcol_state = {
	{(PropertyRNA *)&rna_ThemeUserInterface_menu_shadow_fac, (PropertyRNA *)&rna_ThemeUserInterface_wcol_list_item,
	-1, "wcol_state", 8650752, "State Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_wcol_state_get, NULL, NULL, NULL,&RNA_ThemeWidgetStateColors
};

FloatPropertyRNA rna_ThemeUserInterface_menu_shadow_fac = {
	{(PropertyRNA *)&rna_ThemeUserInterface_menu_shadow_width, (PropertyRNA *)&rna_ThemeUserInterface_wcol_state,
	-1, "menu_shadow_fac", 8195, "Menu Shadow Strength",
	"Blending factor for menu shadows",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, menu_shadow_fac), 4, NULL},
	ThemeUserInterface_menu_shadow_fac_get, ThemeUserInterface_menu_shadow_fac_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 1.0f, 0.0099999998f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_ThemeUserInterface_menu_shadow_width = {
	{(PropertyRNA *)&rna_ThemeUserInterface_icon_file, (PropertyRNA *)&rna_ThemeUserInterface_menu_shadow_fac,
	-1, "menu_shadow_width", 8195, "Menu Shadow Width",
	"Width of menu shadows, set to zero to disable",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, menu_shadow_width), 1, NULL},
	ThemeUserInterface_menu_shadow_width_get, ThemeUserInterface_menu_shadow_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 24, 0, 24, 1, 0, NULL
};

StringPropertyRNA rna_ThemeUserInterface_icon_file = {
	{(PropertyRNA *)&rna_ThemeUserInterface_icon_alpha, (PropertyRNA *)&rna_ThemeUserInterface_menu_shadow_width,
	-1, "icon_file", 262145, "Icon File",
	"",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {256, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserInterface_icon_file_get, ThemeUserInterface_icon_file_length, ThemeUserInterface_icon_file_set, NULL, NULL, NULL, 256, ""
};

FloatPropertyRNA rna_ThemeUserInterface_icon_alpha = {
	{(PropertyRNA *)&rna_ThemeUserInterface_emboss, (PropertyRNA *)&rna_ThemeUserInterface_icon_file,
	-1, "icon_alpha", 8195, "Icon Alpha",
	"Transparency of icons in the interface, to reduce contrast",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, icon_alpha), 4, NULL},
	ThemeUserInterface_icon_alpha_get, ThemeUserInterface_icon_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

static float rna_ThemeUserInterface_emboss_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeUserInterface_emboss = {
	{(PropertyRNA *)&rna_ThemeUserInterface_axis_x, (PropertyRNA *)&rna_ThemeUserInterface_icon_alpha,
	-1, "emboss", 8195, "Emboss",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, emboss), 2, NULL},
	NULL, NULL, ThemeUserInterface_emboss_get, ThemeUserInterface_emboss_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeUserInterface_emboss_default
};

static float rna_ThemeUserInterface_axis_x_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeUserInterface_axis_x = {
	{(PropertyRNA *)&rna_ThemeUserInterface_axis_y, (PropertyRNA *)&rna_ThemeUserInterface_emboss,
	-1, "axis_x", 8195, "X Axis",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, xaxis), 2, NULL},
	NULL, NULL, ThemeUserInterface_axis_x_get, ThemeUserInterface_axis_x_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeUserInterface_axis_x_default
};

static float rna_ThemeUserInterface_axis_y_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeUserInterface_axis_y = {
	{(PropertyRNA *)&rna_ThemeUserInterface_axis_z, (PropertyRNA *)&rna_ThemeUserInterface_axis_x,
	-1, "axis_y", 8195, "Y Axis",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, yaxis), 2, NULL},
	NULL, NULL, ThemeUserInterface_axis_y_get, ThemeUserInterface_axis_y_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeUserInterface_axis_y_default
};

static float rna_ThemeUserInterface_axis_z_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeUserInterface_axis_z = {
	{NULL, (PropertyRNA *)&rna_ThemeUserInterface_axis_y,
	-1, "axis_z", 8195, "Z Axis",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeUI, zaxis), 2, NULL},
	NULL, NULL, ThemeUserInterface_axis_z_get, ThemeUserInterface_axis_z_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeUserInterface_axis_z_default
};

StructRNA RNA_ThemeUserInterface = {
	{(ContainerRNA *)&RNA_ThemeSpaceGeneric, (ContainerRNA *)&RNA_ThemeGradientColors,
	NULL,
	{(PropertyRNA *)&rna_ThemeUserInterface_rna_properties, (PropertyRNA *)&rna_ThemeUserInterface_axis_z}},
	"ThemeUserInterface", NULL, NULL, 0, "Theme User Interface",
	"Theme settings for user interface elements",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeUserInterface_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Space Settings */
CollectionPropertyRNA rna_ThemeSpaceGeneric_rna_properties = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGeneric_rna_properties_begin, ThemeSpaceGeneric_rna_properties_next, ThemeSpaceGeneric_rna_properties_end, ThemeSpaceGeneric_rna_properties_get, NULL, NULL, ThemeSpaceGeneric_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeSpaceGeneric_rna_type = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_back, (PropertyRNA *)&rna_ThemeSpaceGeneric_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGeneric_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ThemeSpaceGeneric_back_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_back = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_title, (PropertyRNA *)&rna_ThemeSpaceGeneric_rna_type,
	-1, "back", 8195, "Window Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, back), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_back_get, ThemeSpaceGeneric_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_back_default
};

static float rna_ThemeSpaceGeneric_title_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_title = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_text, (PropertyRNA *)&rna_ThemeSpaceGeneric_back,
	-1, "title", 8195, "Title",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, title), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_title_get, ThemeSpaceGeneric_title_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_title_default
};

static float rna_ThemeSpaceGeneric_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_text = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_text_hi, (PropertyRNA *)&rna_ThemeSpaceGeneric_title,
	-1, "text", 8195, "Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, text), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_text_get, ThemeSpaceGeneric_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_text_default
};

static float rna_ThemeSpaceGeneric_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_text_hi = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_header, (PropertyRNA *)&rna_ThemeSpaceGeneric_text,
	-1, "text_hi", 8195, "Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_text_hi_get, ThemeSpaceGeneric_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_text_hi_default
};

static float rna_ThemeSpaceGeneric_header_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_header = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_header_text, (PropertyRNA *)&rna_ThemeSpaceGeneric_text_hi,
	-1, "header", 8195, "Header",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, header), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_header_get, ThemeSpaceGeneric_header_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_header_default
};

static float rna_ThemeSpaceGeneric_header_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_header_text = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_header_text_hi, (PropertyRNA *)&rna_ThemeSpaceGeneric_header,
	-1, "header_text", 8195, "Header Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, header_text), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_header_text_get, ThemeSpaceGeneric_header_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_header_text_default
};

static float rna_ThemeSpaceGeneric_header_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_header_text_hi = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_panelcolors, (PropertyRNA *)&rna_ThemeSpaceGeneric_header_text,
	-1, "header_text_hi", 8195, "Header Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, header_text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_header_text_hi_get, ThemeSpaceGeneric_header_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_header_text_hi_default
};

PointerPropertyRNA rna_ThemeSpaceGeneric_panelcolors = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_button, (PropertyRNA *)&rna_ThemeSpaceGeneric_header_text_hi,
	-1, "panelcolors", 8650752, "Panel Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGeneric_panelcolors_get, NULL, NULL, NULL,&RNA_ThemePanelColors
};

static float rna_ThemeSpaceGeneric_button_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_button = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_button_title, (PropertyRNA *)&rna_ThemeSpaceGeneric_panelcolors,
	-1, "button", 8195, "Region Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_button_get, ThemeSpaceGeneric_button_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_button_default
};

static float rna_ThemeSpaceGeneric_button_title_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_button_title = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_button_text, (PropertyRNA *)&rna_ThemeSpaceGeneric_button,
	-1, "button_title", 8195, "Region Text Titles",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button_title), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_button_title_get, ThemeSpaceGeneric_button_title_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_button_title_default
};

static float rna_ThemeSpaceGeneric_button_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_button_text = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_button_text_hi, (PropertyRNA *)&rna_ThemeSpaceGeneric_button_title,
	-1, "button_text", 8195, "Region Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button_text), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_button_text_get, ThemeSpaceGeneric_button_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_button_text_default
};

static float rna_ThemeSpaceGeneric_button_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_button_text_hi = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_tab_active, (PropertyRNA *)&rna_ThemeSpaceGeneric_button_text,
	-1, "button_text_hi", 8195, "Region Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button_text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_button_text_hi_get, ThemeSpaceGeneric_button_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_button_text_hi_default
};

static float rna_ThemeSpaceGeneric_tab_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_tab_active = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_tab_inactive, (PropertyRNA *)&rna_ThemeSpaceGeneric_button_text_hi,
	-1, "tab_active", 8195, "Tab Active",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_active), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_tab_active_get, ThemeSpaceGeneric_tab_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_tab_active_default
};

static float rna_ThemeSpaceGeneric_tab_inactive_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_tab_inactive = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_tab_back, (PropertyRNA *)&rna_ThemeSpaceGeneric_tab_active,
	-1, "tab_inactive", 8195, "Tab Inactive",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_inactive), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_tab_inactive_get, ThemeSpaceGeneric_tab_inactive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_tab_inactive_default
};

static float rna_ThemeSpaceGeneric_tab_back_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_tab_back = {
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_tab_outline, (PropertyRNA *)&rna_ThemeSpaceGeneric_tab_inactive,
	-1, "tab_back", 8195, "Tab Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_back), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_tab_back_get, ThemeSpaceGeneric_tab_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_tab_back_default
};

static float rna_ThemeSpaceGeneric_tab_outline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGeneric_tab_outline = {
	{NULL, (PropertyRNA *)&rna_ThemeSpaceGeneric_tab_back,
	-1, "tab_outline", 8195, "Tab Outline",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_outline), 2, NULL},
	NULL, NULL, ThemeSpaceGeneric_tab_outline_get, ThemeSpaceGeneric_tab_outline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGeneric_tab_outline_default
};

StructRNA RNA_ThemeSpaceGeneric = {
	{(ContainerRNA *)&RNA_ThemeSpaceGradient, (ContainerRNA *)&RNA_ThemeUserInterface,
	NULL,
	{(PropertyRNA *)&rna_ThemeSpaceGeneric_rna_properties, (PropertyRNA *)&rna_ThemeSpaceGeneric_tab_outline}},
	"ThemeSpaceGeneric", NULL, NULL, 4, "Theme Space Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeSpaceGeneric_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Space Settings */
CollectionPropertyRNA rna_ThemeSpaceGradient_rna_properties = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGradient_rna_properties_begin, ThemeSpaceGradient_rna_properties_next, ThemeSpaceGradient_rna_properties_end, ThemeSpaceGradient_rna_properties_get, NULL, NULL, ThemeSpaceGradient_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeSpaceGradient_rna_type = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_gradients, (PropertyRNA *)&rna_ThemeSpaceGradient_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGradient_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeSpaceGradient_gradients = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_title, (PropertyRNA *)&rna_ThemeSpaceGradient_rna_type,
	-1, "gradients", 8650752, "Gradient Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGradient_gradients_get, NULL, NULL, NULL,&RNA_ThemeGradientColors
};

static float rna_ThemeSpaceGradient_title_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_title = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_text, (PropertyRNA *)&rna_ThemeSpaceGradient_gradients,
	-1, "title", 8195, "Title",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, title), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_title_get, ThemeSpaceGradient_title_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_title_default
};

static float rna_ThemeSpaceGradient_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_text = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_text_hi, (PropertyRNA *)&rna_ThemeSpaceGradient_title,
	-1, "text", 8195, "Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, text), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_text_get, ThemeSpaceGradient_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_text_default
};

static float rna_ThemeSpaceGradient_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_text_hi = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_header, (PropertyRNA *)&rna_ThemeSpaceGradient_text,
	-1, "text_hi", 8195, "Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_text_hi_get, ThemeSpaceGradient_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_text_hi_default
};

static float rna_ThemeSpaceGradient_header_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_header = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_header_text, (PropertyRNA *)&rna_ThemeSpaceGradient_text_hi,
	-1, "header", 8195, "Header",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, header), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_header_get, ThemeSpaceGradient_header_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_header_default
};

static float rna_ThemeSpaceGradient_header_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_header_text = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_header_text_hi, (PropertyRNA *)&rna_ThemeSpaceGradient_header,
	-1, "header_text", 8195, "Header Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, header_text), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_header_text_get, ThemeSpaceGradient_header_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_header_text_default
};

static float rna_ThemeSpaceGradient_header_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_header_text_hi = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_panelcolors, (PropertyRNA *)&rna_ThemeSpaceGradient_header_text,
	-1, "header_text_hi", 8195, "Header Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, header_text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_header_text_hi_get, ThemeSpaceGradient_header_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_header_text_hi_default
};

PointerPropertyRNA rna_ThemeSpaceGradient_panelcolors = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_button, (PropertyRNA *)&rna_ThemeSpaceGradient_header_text_hi,
	-1, "panelcolors", 8650752, "Panel Colors",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceGradient_panelcolors_get, NULL, NULL, NULL,&RNA_ThemePanelColors
};

static float rna_ThemeSpaceGradient_button_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_button = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_button_title, (PropertyRNA *)&rna_ThemeSpaceGradient_panelcolors,
	-1, "button", 8195, "Region Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_button_get, ThemeSpaceGradient_button_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_button_default
};

static float rna_ThemeSpaceGradient_button_title_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_button_title = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_button_text, (PropertyRNA *)&rna_ThemeSpaceGradient_button,
	-1, "button_title", 8195, "Region Text Titles",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button_title), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_button_title_get, ThemeSpaceGradient_button_title_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_button_title_default
};

static float rna_ThemeSpaceGradient_button_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_button_text = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_button_text_hi, (PropertyRNA *)&rna_ThemeSpaceGradient_button_title,
	-1, "button_text", 8195, "Region Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button_text), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_button_text_get, ThemeSpaceGradient_button_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_button_text_default
};

static float rna_ThemeSpaceGradient_button_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_button_text_hi = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_tab_active, (PropertyRNA *)&rna_ThemeSpaceGradient_button_text,
	-1, "button_text_hi", 8195, "Region Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, button_text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_button_text_hi_get, ThemeSpaceGradient_button_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_button_text_hi_default
};

static float rna_ThemeSpaceGradient_tab_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_tab_active = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_tab_inactive, (PropertyRNA *)&rna_ThemeSpaceGradient_button_text_hi,
	-1, "tab_active", 8195, "Tab Active",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_active), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_tab_active_get, ThemeSpaceGradient_tab_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_tab_active_default
};

static float rna_ThemeSpaceGradient_tab_inactive_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_tab_inactive = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_tab_back, (PropertyRNA *)&rna_ThemeSpaceGradient_tab_active,
	-1, "tab_inactive", 8195, "Tab Inactive",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_inactive), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_tab_inactive_get, ThemeSpaceGradient_tab_inactive_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_tab_inactive_default
};

static float rna_ThemeSpaceGradient_tab_back_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_tab_back = {
	{(PropertyRNA *)&rna_ThemeSpaceGradient_tab_outline, (PropertyRNA *)&rna_ThemeSpaceGradient_tab_inactive,
	-1, "tab_back", 8195, "Tab Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_back), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_tab_back_get, ThemeSpaceGradient_tab_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_tab_back_default
};

static float rna_ThemeSpaceGradient_tab_outline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceGradient_tab_outline = {
	{NULL, (PropertyRNA *)&rna_ThemeSpaceGradient_tab_back,
	-1, "tab_outline", 8195, "Tab Outline",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, tab_outline), 2, NULL},
	NULL, NULL, ThemeSpaceGradient_tab_outline_get, ThemeSpaceGradient_tab_outline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceGradient_tab_outline_default
};

StructRNA RNA_ThemeSpaceGradient = {
	{(ContainerRNA *)&RNA_ThemeSpaceListGeneric, (ContainerRNA *)&RNA_ThemeSpaceGeneric,
	NULL,
	{(PropertyRNA *)&rna_ThemeSpaceGradient_rna_properties, (PropertyRNA *)&rna_ThemeSpaceGradient_tab_outline}},
	"ThemeSpaceGradient", NULL, NULL, 4, "Theme Space Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeSpaceGradient_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Space List Settings */
CollectionPropertyRNA rna_ThemeSpaceListGeneric_rna_properties = {
	{(PropertyRNA *)&rna_ThemeSpaceListGeneric_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceListGeneric_rna_properties_begin, ThemeSpaceListGeneric_rna_properties_next, ThemeSpaceListGeneric_rna_properties_end, ThemeSpaceListGeneric_rna_properties_get, NULL, NULL, ThemeSpaceListGeneric_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeSpaceListGeneric_rna_type = {
	{(PropertyRNA *)&rna_ThemeSpaceListGeneric_list, (PropertyRNA *)&rna_ThemeSpaceListGeneric_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSpaceListGeneric_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ThemeSpaceListGeneric_list_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceListGeneric_list = {
	{(PropertyRNA *)&rna_ThemeSpaceListGeneric_list_title, (PropertyRNA *)&rna_ThemeSpaceListGeneric_rna_type,
	-1, "list", 8195, "Source List",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, list), 2, NULL},
	NULL, NULL, ThemeSpaceListGeneric_list_get, ThemeSpaceListGeneric_list_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceListGeneric_list_default
};

static float rna_ThemeSpaceListGeneric_list_title_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceListGeneric_list_title = {
	{(PropertyRNA *)&rna_ThemeSpaceListGeneric_list_text, (PropertyRNA *)&rna_ThemeSpaceListGeneric_list,
	-1, "list_title", 8195, "Source List Title",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, list_title), 2, NULL},
	NULL, NULL, ThemeSpaceListGeneric_list_title_get, ThemeSpaceListGeneric_list_title_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceListGeneric_list_title_default
};

static float rna_ThemeSpaceListGeneric_list_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceListGeneric_list_text = {
	{(PropertyRNA *)&rna_ThemeSpaceListGeneric_list_text_hi, (PropertyRNA *)&rna_ThemeSpaceListGeneric_list_title,
	-1, "list_text", 8195, "Source List Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, list_text), 2, NULL},
	NULL, NULL, ThemeSpaceListGeneric_list_text_get, ThemeSpaceListGeneric_list_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceListGeneric_list_text_default
};

static float rna_ThemeSpaceListGeneric_list_text_hi_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSpaceListGeneric_list_text_hi = {
	{NULL, (PropertyRNA *)&rna_ThemeSpaceListGeneric_list_text,
	-1, "list_text_hi", 8195, "Source List Text Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, list_text_hi), 2, NULL},
	NULL, NULL, ThemeSpaceListGeneric_list_text_hi_get, ThemeSpaceListGeneric_list_text_hi_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSpaceListGeneric_list_text_hi_default
};

StructRNA RNA_ThemeSpaceListGeneric = {
	{(ContainerRNA *)&RNA_ThemeView3D, (ContainerRNA *)&RNA_ThemeSpaceGradient,
	NULL,
	{(PropertyRNA *)&rna_ThemeSpaceListGeneric_rna_properties, (PropertyRNA *)&rna_ThemeSpaceListGeneric_list_text_hi}},
	"ThemeSpaceListGeneric", NULL, NULL, 4, "Theme Space List Settings",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeSpaceListGeneric_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme 3D View */
CollectionPropertyRNA rna_ThemeView3D_rna_properties = {
	{(PropertyRNA *)&rna_ThemeView3D_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeView3D_rna_properties_begin, ThemeView3D_rna_properties_next, ThemeView3D_rna_properties_end, ThemeView3D_rna_properties_get, NULL, NULL, ThemeView3D_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeView3D_rna_type = {
	{(PropertyRNA *)&rna_ThemeView3D_space, (PropertyRNA *)&rna_ThemeView3D_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeView3D_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeView3D_space = {
	{(PropertyRNA *)&rna_ThemeView3D_grid, (PropertyRNA *)&rna_ThemeView3D_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeView3D_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGradient
};

static float rna_ThemeView3D_grid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_grid = {
	{(PropertyRNA *)&rna_ThemeView3D_wire, (PropertyRNA *)&rna_ThemeView3D_space,
	-1, "grid", 8195, "Grid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeView3D_grid_get, ThemeView3D_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_grid_default
};

static float rna_ThemeView3D_wire_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_wire = {
	{(PropertyRNA *)&rna_ThemeView3D_wire_edit, (PropertyRNA *)&rna_ThemeView3D_grid,
	-1, "wire", 8195, "Wire",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, wire), 2, NULL},
	NULL, NULL, ThemeView3D_wire_get, ThemeView3D_wire_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_wire_default
};

static float rna_ThemeView3D_wire_edit_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_wire_edit = {
	{(PropertyRNA *)&rna_ThemeView3D_lamp, (PropertyRNA *)&rna_ThemeView3D_wire,
	-1, "wire_edit", 8195, "Wire Edit",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, wire_edit), 2, NULL},
	NULL, NULL, ThemeView3D_wire_edit_get, ThemeView3D_wire_edit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_wire_edit_default
};

static float rna_ThemeView3D_lamp_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_lamp = {
	{(PropertyRNA *)&rna_ThemeView3D_speaker, (PropertyRNA *)&rna_ThemeView3D_wire_edit,
	-1, "lamp", 8195, "Lamp",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, lamp), 2, NULL},
	NULL, NULL, ThemeView3D_lamp_get, ThemeView3D_lamp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_lamp_default
};

static float rna_ThemeView3D_speaker_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_speaker = {
	{(PropertyRNA *)&rna_ThemeView3D_camera, (PropertyRNA *)&rna_ThemeView3D_lamp,
	-1, "speaker", 8195, "Speaker",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, speaker), 2, NULL},
	NULL, NULL, ThemeView3D_speaker_get, ThemeView3D_speaker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_speaker_default
};

static float rna_ThemeView3D_camera_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_camera = {
	{(PropertyRNA *)&rna_ThemeView3D_view_overlay, (PropertyRNA *)&rna_ThemeView3D_speaker,
	-1, "camera", 8195, "Camera",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, camera), 2, NULL},
	NULL, NULL, ThemeView3D_camera_get, ThemeView3D_camera_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_camera_default
};

static float rna_ThemeView3D_view_overlay_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_view_overlay = {
	{(PropertyRNA *)&rna_ThemeView3D_empty, (PropertyRNA *)&rna_ThemeView3D_camera,
	-1, "view_overlay", 8195, "View Overlay",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, view_overlay), 2, NULL},
	NULL, NULL, ThemeView3D_view_overlay_get, ThemeView3D_view_overlay_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_view_overlay_default
};

static float rna_ThemeView3D_empty_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_empty = {
	{(PropertyRNA *)&rna_ThemeView3D_object_selected, (PropertyRNA *)&rna_ThemeView3D_view_overlay,
	-1, "empty", 8195, "Empty",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, empty), 2, NULL},
	NULL, NULL, ThemeView3D_empty_get, ThemeView3D_empty_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_empty_default
};

static float rna_ThemeView3D_object_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_object_selected = {
	{(PropertyRNA *)&rna_ThemeView3D_object_active, (PropertyRNA *)&rna_ThemeView3D_empty,
	-1, "object_selected", 8195, "Object Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, select), 2, NULL},
	NULL, NULL, ThemeView3D_object_selected_get, ThemeView3D_object_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_object_selected_default
};

static float rna_ThemeView3D_object_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_object_active = {
	{(PropertyRNA *)&rna_ThemeView3D_object_grouped, (PropertyRNA *)&rna_ThemeView3D_object_selected,
	-1, "object_active", 8195, "Active Object",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, active), 2, NULL},
	NULL, NULL, ThemeView3D_object_active_get, ThemeView3D_object_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_object_active_default
};

static float rna_ThemeView3D_object_grouped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_object_grouped = {
	{(PropertyRNA *)&rna_ThemeView3D_object_grouped_active, (PropertyRNA *)&rna_ThemeView3D_object_active,
	-1, "object_grouped", 8195, "Object Grouped",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, group), 2, NULL},
	NULL, NULL, ThemeView3D_object_grouped_get, ThemeView3D_object_grouped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_object_grouped_default
};

static float rna_ThemeView3D_object_grouped_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_object_grouped_active = {
	{(PropertyRNA *)&rna_ThemeView3D_transform, (PropertyRNA *)&rna_ThemeView3D_object_grouped,
	-1, "object_grouped_active", 8195, "Object Grouped Active",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, group_active), 2, NULL},
	NULL, NULL, ThemeView3D_object_grouped_active_get, ThemeView3D_object_grouped_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_object_grouped_active_default
};

static float rna_ThemeView3D_transform_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_transform = {
	{(PropertyRNA *)&rna_ThemeView3D_vertex, (PropertyRNA *)&rna_ThemeView3D_object_grouped_active,
	-1, "transform", 8195, "Transform",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, transform), 2, NULL},
	NULL, NULL, ThemeView3D_transform_get, ThemeView3D_transform_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_transform_default
};

static float rna_ThemeView3D_vertex_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_vertex = {
	{(PropertyRNA *)&rna_ThemeView3D_vertex_select, (PropertyRNA *)&rna_ThemeView3D_transform,
	-1, "vertex", 8195, "Vertex",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex), 2, NULL},
	NULL, NULL, ThemeView3D_vertex_get, ThemeView3D_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_vertex_default
};

static float rna_ThemeView3D_vertex_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_vertex_select = {
	{(PropertyRNA *)&rna_ThemeView3D_vertex_size, (PropertyRNA *)&rna_ThemeView3D_vertex,
	-1, "vertex_select", 8195, "Vertex Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_select), 2, NULL},
	NULL, NULL, ThemeView3D_vertex_select_get, ThemeView3D_vertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_vertex_select_default
};

IntPropertyRNA rna_ThemeView3D_vertex_size = {
	{(PropertyRNA *)&rna_ThemeView3D_vertex_unreferenced, (PropertyRNA *)&rna_ThemeView3D_vertex_select,
	-1, "vertex_size", 8195, "Vertex Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_size), 2, NULL},
	ThemeView3D_vertex_size_get, ThemeView3D_vertex_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static float rna_ThemeView3D_vertex_unreferenced_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_vertex_unreferenced = {
	{(PropertyRNA *)&rna_ThemeView3D_edge_select, (PropertyRNA *)&rna_ThemeView3D_vertex_size,
	-1, "vertex_unreferenced", 8195, "Vertex Group Unreferenced",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_unreferenced), 2, NULL},
	NULL, NULL, ThemeView3D_vertex_unreferenced_get, ThemeView3D_vertex_unreferenced_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_vertex_unreferenced_default
};

static float rna_ThemeView3D_edge_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_edge_select = {
	{(PropertyRNA *)&rna_ThemeView3D_edge_seam, (PropertyRNA *)&rna_ThemeView3D_vertex_unreferenced,
	-1, "edge_select", 8195, "Edge Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_select), 2, NULL},
	NULL, NULL, ThemeView3D_edge_select_get, ThemeView3D_edge_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_edge_select_default
};

static float rna_ThemeView3D_edge_seam_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_edge_seam = {
	{(PropertyRNA *)&rna_ThemeView3D_edge_sharp, (PropertyRNA *)&rna_ThemeView3D_edge_select,
	-1, "edge_seam", 8195, "Edge Seam",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_seam), 2, NULL},
	NULL, NULL, ThemeView3D_edge_seam_get, ThemeView3D_edge_seam_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_edge_seam_default
};

static float rna_ThemeView3D_edge_sharp_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_edge_sharp = {
	{(PropertyRNA *)&rna_ThemeView3D_edge_crease, (PropertyRNA *)&rna_ThemeView3D_edge_seam,
	-1, "edge_sharp", 8195, "Edge Sharp",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_sharp), 2, NULL},
	NULL, NULL, ThemeView3D_edge_sharp_get, ThemeView3D_edge_sharp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_edge_sharp_default
};

static float rna_ThemeView3D_edge_crease_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_edge_crease = {
	{(PropertyRNA *)&rna_ThemeView3D_edge_facesel, (PropertyRNA *)&rna_ThemeView3D_edge_sharp,
	-1, "edge_crease", 8195, "Edge Crease",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_crease), 2, NULL},
	NULL, NULL, ThemeView3D_edge_crease_get, ThemeView3D_edge_crease_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_edge_crease_default
};

static float rna_ThemeView3D_edge_facesel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_edge_facesel = {
	{(PropertyRNA *)&rna_ThemeView3D_freestyle_edge_mark, (PropertyRNA *)&rna_ThemeView3D_edge_crease,
	-1, "edge_facesel", 8195, "Edge UV Face Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_facesel), 2, NULL},
	NULL, NULL, ThemeView3D_edge_facesel_get, ThemeView3D_edge_facesel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_edge_facesel_default
};

static float rna_ThemeView3D_freestyle_edge_mark_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_freestyle_edge_mark = {
	{(PropertyRNA *)&rna_ThemeView3D_face, (PropertyRNA *)&rna_ThemeView3D_edge_facesel,
	-1, "freestyle_edge_mark", 8195, "Freestyle Edge Mark",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, freestyle_edge_mark), 2, NULL},
	NULL, NULL, ThemeView3D_freestyle_edge_mark_get, ThemeView3D_freestyle_edge_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_freestyle_edge_mark_default
};

static float rna_ThemeView3D_face_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_face = {
	{(PropertyRNA *)&rna_ThemeView3D_face_select, (PropertyRNA *)&rna_ThemeView3D_freestyle_edge_mark,
	-1, "face", 8195, "Face",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face), 2, NULL},
	NULL, NULL, ThemeView3D_face_get, ThemeView3D_face_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_face_default
};

static float rna_ThemeView3D_face_select_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_face_select = {
	{(PropertyRNA *)&rna_ThemeView3D_face_dot, (PropertyRNA *)&rna_ThemeView3D_face,
	-1, "face_select", 8195, "Face Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face_select), 2, NULL},
	NULL, NULL, ThemeView3D_face_select_get, ThemeView3D_face_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_face_select_default
};

static float rna_ThemeView3D_face_dot_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_face_dot = {
	{(PropertyRNA *)&rna_ThemeView3D_facedot_size, (PropertyRNA *)&rna_ThemeView3D_face_select,
	-1, "face_dot", 8195, "Face Dot Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face_dot), 2, NULL},
	NULL, NULL, ThemeView3D_face_dot_get, ThemeView3D_face_dot_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_face_dot_default
};

IntPropertyRNA rna_ThemeView3D_facedot_size = {
	{(PropertyRNA *)&rna_ThemeView3D_freestyle_face_mark, (PropertyRNA *)&rna_ThemeView3D_face_dot,
	-1, "facedot_size", 8195, "Face Dot Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, facedot_size), 2, NULL},
	ThemeView3D_facedot_size_get, ThemeView3D_facedot_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static float rna_ThemeView3D_freestyle_face_mark_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_freestyle_face_mark = {
	{(PropertyRNA *)&rna_ThemeView3D_nurb_uline, (PropertyRNA *)&rna_ThemeView3D_facedot_size,
	-1, "freestyle_face_mark", 8195, "Freestyle Face Mark",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, freestyle_face_mark), 2, NULL},
	NULL, NULL, ThemeView3D_freestyle_face_mark_get, ThemeView3D_freestyle_face_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_freestyle_face_mark_default
};

static float rna_ThemeView3D_nurb_uline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_nurb_uline = {
	{(PropertyRNA *)&rna_ThemeView3D_nurb_vline, (PropertyRNA *)&rna_ThemeView3D_freestyle_face_mark,
	-1, "nurb_uline", 8195, "NURBS U-lines",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nurb_uline), 2, NULL},
	NULL, NULL, ThemeView3D_nurb_uline_get, ThemeView3D_nurb_uline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_nurb_uline_default
};

static float rna_ThemeView3D_nurb_vline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_nurb_vline = {
	{(PropertyRNA *)&rna_ThemeView3D_nurb_sel_uline, (PropertyRNA *)&rna_ThemeView3D_nurb_uline,
	-1, "nurb_vline", 8195, "NURBS V-lines",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nurb_vline), 2, NULL},
	NULL, NULL, ThemeView3D_nurb_vline_get, ThemeView3D_nurb_vline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_nurb_vline_default
};

static float rna_ThemeView3D_nurb_sel_uline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_nurb_sel_uline = {
	{(PropertyRNA *)&rna_ThemeView3D_nurb_sel_vline, (PropertyRNA *)&rna_ThemeView3D_nurb_vline,
	-1, "nurb_sel_uline", 8195, "NURBS active U-lines",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nurb_sel_uline), 2, NULL},
	NULL, NULL, ThemeView3D_nurb_sel_uline_get, ThemeView3D_nurb_sel_uline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_nurb_sel_uline_default
};

static float rna_ThemeView3D_nurb_sel_vline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_nurb_sel_vline = {
	{(PropertyRNA *)&rna_ThemeView3D_act_spline, (PropertyRNA *)&rna_ThemeView3D_nurb_sel_uline,
	-1, "nurb_sel_vline", 8195, "NURBS active V-lines",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nurb_sel_vline), 2, NULL},
	NULL, NULL, ThemeView3D_nurb_sel_vline_get, ThemeView3D_nurb_sel_vline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_nurb_sel_vline_default
};

static float rna_ThemeView3D_act_spline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_act_spline = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_free, (PropertyRNA *)&rna_ThemeView3D_nurb_sel_vline,
	-1, "act_spline", 8195, "Active spline",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, act_spline), 2, NULL},
	NULL, NULL, ThemeView3D_act_spline_get, ThemeView3D_act_spline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_act_spline_default
};

static float rna_ThemeView3D_handle_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_free = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_auto, (PropertyRNA *)&rna_ThemeView3D_act_spline,
	-1, "handle_free", 8195, "Free handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_free), 2, NULL},
	NULL, NULL, ThemeView3D_handle_free_get, ThemeView3D_handle_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_free_default
};

static float rna_ThemeView3D_handle_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_auto = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_vect, (PropertyRNA *)&rna_ThemeView3D_handle_free,
	-1, "handle_auto", 8195, "Auto handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto), 2, NULL},
	NULL, NULL, ThemeView3D_handle_auto_get, ThemeView3D_handle_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_auto_default
};

static float rna_ThemeView3D_handle_vect_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_vect = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_sel_vect, (PropertyRNA *)&rna_ThemeView3D_handle_auto,
	-1, "handle_vect", 8195, "Vector handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vect), 2, NULL},
	NULL, NULL, ThemeView3D_handle_vect_get, ThemeView3D_handle_vect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_vect_default
};

static float rna_ThemeView3D_handle_sel_vect_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_sel_vect = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_align, (PropertyRNA *)&rna_ThemeView3D_handle_vect,
	-1, "handle_sel_vect", 8195, "Vector handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_vect), 2, NULL},
	NULL, NULL, ThemeView3D_handle_sel_vect_get, ThemeView3D_handle_sel_vect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_sel_vect_default
};

static float rna_ThemeView3D_handle_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_align = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_sel_free, (PropertyRNA *)&rna_ThemeView3D_handle_sel_vect,
	-1, "handle_align", 8195, "Align handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_align), 2, NULL},
	NULL, NULL, ThemeView3D_handle_align_get, ThemeView3D_handle_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_align_default
};

static float rna_ThemeView3D_handle_sel_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_sel_free = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_sel_auto, (PropertyRNA *)&rna_ThemeView3D_handle_align,
	-1, "handle_sel_free", 8195, "Free handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_free), 2, NULL},
	NULL, NULL, ThemeView3D_handle_sel_free_get, ThemeView3D_handle_sel_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_sel_free_default
};

static float rna_ThemeView3D_handle_sel_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_sel_auto = {
	{(PropertyRNA *)&rna_ThemeView3D_handle_sel_align, (PropertyRNA *)&rna_ThemeView3D_handle_sel_free,
	-1, "handle_sel_auto", 8195, "Auto handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto), 2, NULL},
	NULL, NULL, ThemeView3D_handle_sel_auto_get, ThemeView3D_handle_sel_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_sel_auto_default
};

static float rna_ThemeView3D_handle_sel_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_handle_sel_align = {
	{(PropertyRNA *)&rna_ThemeView3D_lastsel_point, (PropertyRNA *)&rna_ThemeView3D_handle_sel_auto,
	-1, "handle_sel_align", 8195, "Align handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_align), 2, NULL},
	NULL, NULL, ThemeView3D_handle_sel_align_get, ThemeView3D_handle_sel_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_handle_sel_align_default
};

static float rna_ThemeView3D_lastsel_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_lastsel_point = {
	{(PropertyRNA *)&rna_ThemeView3D_extra_edge_len, (PropertyRNA *)&rna_ThemeView3D_handle_sel_align,
	-1, "lastsel_point", 8195, "Last selected point",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, lastsel_point), 2, NULL},
	NULL, NULL, ThemeView3D_lastsel_point_get, ThemeView3D_lastsel_point_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_lastsel_point_default
};

static float rna_ThemeView3D_extra_edge_len_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_extra_edge_len = {
	{(PropertyRNA *)&rna_ThemeView3D_extra_edge_angle, (PropertyRNA *)&rna_ThemeView3D_lastsel_point,
	-1, "extra_edge_len", 8195, "Edge Length Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, extra_edge_len), 2, NULL},
	NULL, NULL, ThemeView3D_extra_edge_len_get, ThemeView3D_extra_edge_len_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_extra_edge_len_default
};

static float rna_ThemeView3D_extra_edge_angle_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_extra_edge_angle = {
	{(PropertyRNA *)&rna_ThemeView3D_extra_face_angle, (PropertyRNA *)&rna_ThemeView3D_extra_edge_len,
	-1, "extra_edge_angle", 8195, "Edge Angle Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, extra_edge_angle), 2, NULL},
	NULL, NULL, ThemeView3D_extra_edge_angle_get, ThemeView3D_extra_edge_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_extra_edge_angle_default
};

static float rna_ThemeView3D_extra_face_angle_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_extra_face_angle = {
	{(PropertyRNA *)&rna_ThemeView3D_extra_face_area, (PropertyRNA *)&rna_ThemeView3D_extra_edge_angle,
	-1, "extra_face_angle", 8195, "Face Angle Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, extra_face_angle), 2, NULL},
	NULL, NULL, ThemeView3D_extra_face_angle_get, ThemeView3D_extra_face_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_extra_face_angle_default
};

static float rna_ThemeView3D_extra_face_area_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_extra_face_area = {
	{(PropertyRNA *)&rna_ThemeView3D_editmesh_active, (PropertyRNA *)&rna_ThemeView3D_extra_face_angle,
	-1, "extra_face_area", 8195, "Face Area Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, extra_face_area), 2, NULL},
	NULL, NULL, ThemeView3D_extra_face_area_get, ThemeView3D_extra_face_area_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_extra_face_area_default
};

static float rna_ThemeView3D_editmesh_active_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_editmesh_active = {
	{(PropertyRNA *)&rna_ThemeView3D_normal, (PropertyRNA *)&rna_ThemeView3D_extra_face_area,
	-1, "editmesh_active", 8195, "Active Vert/Edge/Face",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, editmesh_active), 2, NULL},
	NULL, NULL, ThemeView3D_editmesh_active_get, ThemeView3D_editmesh_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_editmesh_active_default
};

static float rna_ThemeView3D_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_normal = {
	{(PropertyRNA *)&rna_ThemeView3D_vertex_normal, (PropertyRNA *)&rna_ThemeView3D_editmesh_active,
	-1, "normal", 8195, "Face Normal",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, normal), 2, NULL},
	NULL, NULL, ThemeView3D_normal_get, ThemeView3D_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_normal_default
};

static float rna_ThemeView3D_vertex_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_vertex_normal = {
	{(PropertyRNA *)&rna_ThemeView3D_split_normal, (PropertyRNA *)&rna_ThemeView3D_normal,
	-1, "vertex_normal", 8195, "Vertex Normal",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_normal), 2, NULL},
	NULL, NULL, ThemeView3D_vertex_normal_get, ThemeView3D_vertex_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_vertex_normal_default
};

static float rna_ThemeView3D_split_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_split_normal = {
	{(PropertyRNA *)&rna_ThemeView3D_bone_solid, (PropertyRNA *)&rna_ThemeView3D_vertex_normal,
	-1, "split_normal", 8195, "Split Normal",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, loop_normal), 2, NULL},
	NULL, NULL, ThemeView3D_split_normal_get, ThemeView3D_split_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_split_normal_default
};

static float rna_ThemeView3D_bone_solid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_bone_solid = {
	{(PropertyRNA *)&rna_ThemeView3D_bone_pose, (PropertyRNA *)&rna_ThemeView3D_split_normal,
	-1, "bone_solid", 8195, "Bone Solid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, bone_solid), 2, NULL},
	NULL, NULL, ThemeView3D_bone_solid_get, ThemeView3D_bone_solid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_bone_solid_default
};

static float rna_ThemeView3D_bone_pose_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_bone_pose = {
	{(PropertyRNA *)&rna_ThemeView3D_bone_pose_active, (PropertyRNA *)&rna_ThemeView3D_bone_solid,
	-1, "bone_pose", 8195, "Bone Pose",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, bone_pose), 2, NULL},
	NULL, NULL, ThemeView3D_bone_pose_get, ThemeView3D_bone_pose_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_bone_pose_default
};

static float rna_ThemeView3D_bone_pose_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_bone_pose_active = {
	{(PropertyRNA *)&rna_ThemeView3D_frame_current, (PropertyRNA *)&rna_ThemeView3D_bone_pose,
	-1, "bone_pose_active", 8195, "Bone Pose Active",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, bone_pose_active), 2, NULL},
	NULL, NULL, ThemeView3D_bone_pose_active_get, ThemeView3D_bone_pose_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_bone_pose_active_default
};

static float rna_ThemeView3D_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_frame_current = {
	{(PropertyRNA *)&rna_ThemeView3D_outline_width, (PropertyRNA *)&rna_ThemeView3D_bone_pose_active,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeView3D_frame_current_get, ThemeView3D_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_frame_current_default
};

IntPropertyRNA rna_ThemeView3D_outline_width = {
	{(PropertyRNA *)&rna_ThemeView3D_bundle_solid, (PropertyRNA *)&rna_ThemeView3D_frame_current,
	-1, "outline_width", 8195, "Outline Width",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, outline_width), 2, NULL},
	ThemeView3D_outline_width_get, ThemeView3D_outline_width_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 5, 1, 5, 1, 0, NULL
};

static float rna_ThemeView3D_bundle_solid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_bundle_solid = {
	{(PropertyRNA *)&rna_ThemeView3D_camera_path, (PropertyRNA *)&rna_ThemeView3D_outline_width,
	-1, "bundle_solid", 8195, "Bundle Solid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, bundle_solid), 2, NULL},
	NULL, NULL, ThemeView3D_bundle_solid_get, ThemeView3D_bundle_solid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_bundle_solid_default
};

static float rna_ThemeView3D_camera_path_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_camera_path = {
	{(PropertyRNA *)&rna_ThemeView3D_skin_root, (PropertyRNA *)&rna_ThemeView3D_bundle_solid,
	-1, "camera_path", 8195, "Camera Path",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, camera_path), 2, NULL},
	NULL, NULL, ThemeView3D_camera_path_get, ThemeView3D_camera_path_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_camera_path_default
};

static float rna_ThemeView3D_skin_root_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_skin_root = {
	{(PropertyRNA *)&rna_ThemeView3D_paint_curve_handle, (PropertyRNA *)&rna_ThemeView3D_camera_path,
	-1, "skin_root", 8195, "Skin Root",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, skin_root), 2, NULL},
	NULL, NULL, ThemeView3D_skin_root_get, ThemeView3D_skin_root_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_skin_root_default
};

static float rna_ThemeView3D_paint_curve_handle_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_paint_curve_handle = {
	{(PropertyRNA *)&rna_ThemeView3D_paint_curve_pivot, (PropertyRNA *)&rna_ThemeView3D_skin_root,
	-1, "paint_curve_handle", 8195, "Paint Curve Handle",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, paint_curve_handle), 2, NULL},
	NULL, NULL, ThemeView3D_paint_curve_handle_get, ThemeView3D_paint_curve_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_paint_curve_handle_default
};

static float rna_ThemeView3D_paint_curve_pivot_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeView3D_paint_curve_pivot = {
	{NULL, (PropertyRNA *)&rna_ThemeView3D_paint_curve_handle,
	-1, "paint_curve_pivot", 8195, "Paint Curve Pivot",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, paint_curve_pivot), 2, NULL},
	NULL, NULL, ThemeView3D_paint_curve_pivot_get, ThemeView3D_paint_curve_pivot_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeView3D_paint_curve_pivot_default
};

StructRNA RNA_ThemeView3D = {
	{(ContainerRNA *)&RNA_ThemeGraphEditor, (ContainerRNA *)&RNA_ThemeSpaceListGeneric,
	NULL,
	{(PropertyRNA *)&rna_ThemeView3D_rna_properties, (PropertyRNA *)&rna_ThemeView3D_paint_curve_pivot}},
	"ThemeView3D", NULL, NULL, 0, "Theme 3D View",
	"Theme settings for the 3D View",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeView3D_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Graph Editor */
CollectionPropertyRNA rna_ThemeGraphEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeGraphEditor_rna_properties_begin, ThemeGraphEditor_rna_properties_next, ThemeGraphEditor_rna_properties_end, ThemeGraphEditor_rna_properties_get, NULL, NULL, ThemeGraphEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeGraphEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_space, (PropertyRNA *)&rna_ThemeGraphEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeGraphEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeGraphEditor_space = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_space_list, (PropertyRNA *)&rna_ThemeGraphEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeGraphEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

PointerPropertyRNA rna_ThemeGraphEditor_space_list = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_grid, (PropertyRNA *)&rna_ThemeGraphEditor_space,
	-1, "space_list", 8650752, "Theme Space List",
	"Settings for space list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeGraphEditor_space_list_get, NULL, NULL, NULL,&RNA_ThemeSpaceListGeneric
};

static float rna_ThemeGraphEditor_grid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_grid = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_frame_current, (PropertyRNA *)&rna_ThemeGraphEditor_space_list,
	-1, "grid", 8195, "Grid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeGraphEditor_grid_get, ThemeGraphEditor_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_grid_default
};

static float rna_ThemeGraphEditor_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_frame_current = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_window_sliders, (PropertyRNA *)&rna_ThemeGraphEditor_grid,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeGraphEditor_frame_current_get, ThemeGraphEditor_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_frame_current_default
};

static float rna_ThemeGraphEditor_window_sliders_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_window_sliders = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_channels_region, (PropertyRNA *)&rna_ThemeGraphEditor_frame_current,
	-1, "window_sliders", 8195, "Window Sliders",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade1), 2, NULL},
	NULL, NULL, ThemeGraphEditor_window_sliders_get, ThemeGraphEditor_window_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_window_sliders_default
};

static float rna_ThemeGraphEditor_channels_region_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_channels_region = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_dopesheet_channel, (PropertyRNA *)&rna_ThemeGraphEditor_window_sliders,
	-1, "channels_region", 8195, "Channels Region",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade2), 2, NULL},
	NULL, NULL, ThemeGraphEditor_channels_region_get, ThemeGraphEditor_channels_region_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_channels_region_default
};

static float rna_ThemeGraphEditor_dopesheet_channel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_dopesheet_channel = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_dopesheet_subchannel, (PropertyRNA *)&rna_ThemeGraphEditor_channels_region,
	-1, "dopesheet_channel", 8195, "Dope Sheet Channel",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, ds_channel), 2, NULL},
	NULL, NULL, ThemeGraphEditor_dopesheet_channel_get, ThemeGraphEditor_dopesheet_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_dopesheet_channel_default
};

static float rna_ThemeGraphEditor_dopesheet_subchannel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_dopesheet_subchannel = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_channel_group, (PropertyRNA *)&rna_ThemeGraphEditor_dopesheet_channel,
	-1, "dopesheet_subchannel", 8195, "Dope Sheet Sub-Channel",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, ds_subchannel), 2, NULL},
	NULL, NULL, ThemeGraphEditor_dopesheet_subchannel_get, ThemeGraphEditor_dopesheet_subchannel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_dopesheet_subchannel_default
};

static float rna_ThemeGraphEditor_channel_group_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_channel_group = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_active_channels_group, (PropertyRNA *)&rna_ThemeGraphEditor_dopesheet_subchannel,
	-1, "channel_group", 8195, "Channel Group",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, group), 2, NULL},
	NULL, NULL, ThemeGraphEditor_channel_group_get, ThemeGraphEditor_channel_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_channel_group_default
};

static float rna_ThemeGraphEditor_active_channels_group_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_active_channels_group = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_vertex, (PropertyRNA *)&rna_ThemeGraphEditor_channel_group,
	-1, "active_channels_group", 8195, "Active Channel Group",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, group_active), 2, NULL},
	NULL, NULL, ThemeGraphEditor_active_channels_group_get, ThemeGraphEditor_active_channels_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_active_channels_group_default
};

static float rna_ThemeGraphEditor_vertex_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_vertex = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_vertex_select, (PropertyRNA *)&rna_ThemeGraphEditor_active_channels_group,
	-1, "vertex", 8195, "Vertex",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex), 2, NULL},
	NULL, NULL, ThemeGraphEditor_vertex_get, ThemeGraphEditor_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_vertex_default
};

static float rna_ThemeGraphEditor_vertex_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_vertex_select = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_vertex_size, (PropertyRNA *)&rna_ThemeGraphEditor_vertex,
	-1, "vertex_select", 8195, "Vertex Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_select), 2, NULL},
	NULL, NULL, ThemeGraphEditor_vertex_select_get, ThemeGraphEditor_vertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_vertex_select_default
};

IntPropertyRNA rna_ThemeGraphEditor_vertex_size = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_vertex_unreferenced, (PropertyRNA *)&rna_ThemeGraphEditor_vertex_select,
	-1, "vertex_size", 8195, "Vertex Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_size), 2, NULL},
	ThemeGraphEditor_vertex_size_get, ThemeGraphEditor_vertex_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static float rna_ThemeGraphEditor_vertex_unreferenced_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_vertex_unreferenced = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_free, (PropertyRNA *)&rna_ThemeGraphEditor_vertex_size,
	-1, "vertex_unreferenced", 8195, "Vertex Group Unreferenced",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_unreferenced), 2, NULL},
	NULL, NULL, ThemeGraphEditor_vertex_unreferenced_get, ThemeGraphEditor_vertex_unreferenced_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_vertex_unreferenced_default
};

static float rna_ThemeGraphEditor_handle_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_free = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_auto, (PropertyRNA *)&rna_ThemeGraphEditor_vertex_unreferenced,
	-1, "handle_free", 8195, "Free handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_free), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_free_get, ThemeGraphEditor_handle_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_free_default
};

static float rna_ThemeGraphEditor_handle_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_auto = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_vect, (PropertyRNA *)&rna_ThemeGraphEditor_handle_free,
	-1, "handle_auto", 8195, "Auto handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_auto_get, ThemeGraphEditor_handle_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_auto_default
};

static float rna_ThemeGraphEditor_handle_vect_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_vect = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_vect, (PropertyRNA *)&rna_ThemeGraphEditor_handle_auto,
	-1, "handle_vect", 8195, "Vector handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vect), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_vect_get, ThemeGraphEditor_handle_vect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_vect_default
};

static float rna_ThemeGraphEditor_handle_sel_vect_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_vect = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_align, (PropertyRNA *)&rna_ThemeGraphEditor_handle_vect,
	-1, "handle_sel_vect", 8195, "Vector handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_vect), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_sel_vect_get, ThemeGraphEditor_handle_sel_vect_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_sel_vect_default
};

static float rna_ThemeGraphEditor_handle_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_align = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_free, (PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_vect,
	-1, "handle_align", 8195, "Align handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_align), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_align_get, ThemeGraphEditor_handle_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_align_default
};

static float rna_ThemeGraphEditor_handle_sel_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_free = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_auto, (PropertyRNA *)&rna_ThemeGraphEditor_handle_align,
	-1, "handle_sel_free", 8195, "Free handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_free), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_sel_free_get, ThemeGraphEditor_handle_sel_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_sel_free_default
};

static float rna_ThemeGraphEditor_handle_sel_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_auto = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_align, (PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_free,
	-1, "handle_sel_auto", 8195, "Auto handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_sel_auto_get, ThemeGraphEditor_handle_sel_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_sel_auto_default
};

static float rna_ThemeGraphEditor_handle_sel_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_align = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_auto_clamped, (PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_auto,
	-1, "handle_sel_align", 8195, "Align handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_align), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_sel_align_get, ThemeGraphEditor_handle_sel_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_sel_align_default
};

static float rna_ThemeGraphEditor_handle_auto_clamped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_auto_clamped = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_auto_clamped, (PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_align,
	-1, "handle_auto_clamped", 8195, "Auto-Clamped handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto_clamped), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_auto_clamped_get, ThemeGraphEditor_handle_auto_clamped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_auto_clamped_default
};

static float rna_ThemeGraphEditor_handle_sel_auto_clamped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_sel_auto_clamped = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_lastsel_point, (PropertyRNA *)&rna_ThemeGraphEditor_handle_auto_clamped,
	-1, "handle_sel_auto_clamped", 8195, "Auto-Clamped handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto_clamped), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_sel_auto_clamped_get, ThemeGraphEditor_handle_sel_auto_clamped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_sel_auto_clamped_default
};

static float rna_ThemeGraphEditor_lastsel_point_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_lastsel_point = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_vertex, (PropertyRNA *)&rna_ThemeGraphEditor_handle_sel_auto_clamped,
	-1, "lastsel_point", 8195, "Last selected point",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, lastsel_point), 2, NULL},
	NULL, NULL, ThemeGraphEditor_lastsel_point_get, ThemeGraphEditor_lastsel_point_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_lastsel_point_default
};

static float rna_ThemeGraphEditor_handle_vertex_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_vertex = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_vertex_select, (PropertyRNA *)&rna_ThemeGraphEditor_lastsel_point,
	-1, "handle_vertex", 8195, "Handle Vertex",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_vertex_get, ThemeGraphEditor_handle_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_vertex_default
};

static float rna_ThemeGraphEditor_handle_vertex_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeGraphEditor_handle_vertex_select = {
	{(PropertyRNA *)&rna_ThemeGraphEditor_handle_vertex_size, (PropertyRNA *)&rna_ThemeGraphEditor_handle_vertex,
	-1, "handle_vertex_select", 8195, "Handle Vertex Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex_select), 2, NULL},
	NULL, NULL, ThemeGraphEditor_handle_vertex_select_get, ThemeGraphEditor_handle_vertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeGraphEditor_handle_vertex_select_default
};

IntPropertyRNA rna_ThemeGraphEditor_handle_vertex_size = {
	{NULL, (PropertyRNA *)&rna_ThemeGraphEditor_handle_vertex_select,
	-1, "handle_vertex_size", 8195, "Handle Vertex Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex_size), 2, NULL},
	ThemeGraphEditor_handle_vertex_size_get, ThemeGraphEditor_handle_vertex_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

StructRNA RNA_ThemeGraphEditor = {
	{(ContainerRNA *)&RNA_ThemeFileBrowser, (ContainerRNA *)&RNA_ThemeView3D,
	NULL,
	{(PropertyRNA *)&rna_ThemeGraphEditor_rna_properties, (PropertyRNA *)&rna_ThemeGraphEditor_handle_vertex_size}},
	"ThemeGraphEditor", NULL, NULL, 0, "Theme Graph Editor",
	"Theme settings for the graph editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeGraphEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme File Browser */
CollectionPropertyRNA rna_ThemeFileBrowser_rna_properties = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFileBrowser_rna_properties_begin, ThemeFileBrowser_rna_properties_next, ThemeFileBrowser_rna_properties_end, ThemeFileBrowser_rna_properties_get, NULL, NULL, ThemeFileBrowser_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeFileBrowser_rna_type = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_space, (PropertyRNA *)&rna_ThemeFileBrowser_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFileBrowser_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeFileBrowser_space = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_space_list, (PropertyRNA *)&rna_ThemeFileBrowser_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFileBrowser_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

PointerPropertyRNA rna_ThemeFileBrowser_space_list = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_selected_file, (PropertyRNA *)&rna_ThemeFileBrowser_space,
	-1, "space_list", 8650752, "Theme Space List",
	"Settings for space list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeFileBrowser_space_list_get, NULL, NULL, NULL,&RNA_ThemeSpaceListGeneric
};

static float rna_ThemeFileBrowser_selected_file_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeFileBrowser_selected_file = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_scrollbar, (PropertyRNA *)&rna_ThemeFileBrowser_space_list,
	-1, "selected_file", 8195, "Selected File",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, hilite), 2, NULL},
	NULL, NULL, ThemeFileBrowser_selected_file_get, ThemeFileBrowser_selected_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeFileBrowser_selected_file_default
};

static float rna_ThemeFileBrowser_scrollbar_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeFileBrowser_scrollbar = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_scroll_handle, (PropertyRNA *)&rna_ThemeFileBrowser_selected_file,
	-1, "scrollbar", 8195, "Scrollbar",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade1), 2, NULL},
	NULL, NULL, ThemeFileBrowser_scrollbar_get, ThemeFileBrowser_scrollbar_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeFileBrowser_scrollbar_default
};

static float rna_ThemeFileBrowser_scroll_handle_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeFileBrowser_scroll_handle = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_active_file, (PropertyRNA *)&rna_ThemeFileBrowser_scrollbar,
	-1, "scroll_handle", 8195, "Scroll Handle",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade2), 2, NULL},
	NULL, NULL, ThemeFileBrowser_scroll_handle_get, ThemeFileBrowser_scroll_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeFileBrowser_scroll_handle_default
};

static float rna_ThemeFileBrowser_active_file_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeFileBrowser_active_file = {
	{(PropertyRNA *)&rna_ThemeFileBrowser_active_file_text, (PropertyRNA *)&rna_ThemeFileBrowser_scroll_handle,
	-1, "active_file", 8195, "Active File",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, active), 2, NULL},
	NULL, NULL, ThemeFileBrowser_active_file_get, ThemeFileBrowser_active_file_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeFileBrowser_active_file_default
};

static float rna_ThemeFileBrowser_active_file_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeFileBrowser_active_file_text = {
	{NULL, (PropertyRNA *)&rna_ThemeFileBrowser_active_file,
	-1, "active_file_text", 8195, "Active File Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeFileBrowser_active_file_text_get, ThemeFileBrowser_active_file_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeFileBrowser_active_file_text_default
};

StructRNA RNA_ThemeFileBrowser = {
	{(ContainerRNA *)&RNA_ThemeNLAEditor, (ContainerRNA *)&RNA_ThemeGraphEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeFileBrowser_rna_properties, (PropertyRNA *)&rna_ThemeFileBrowser_active_file_text}},
	"ThemeFileBrowser", NULL, NULL, 0, "Theme File Browser",
	"Theme settings for the File Browser",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeFileBrowser_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme NLA Editor */
CollectionPropertyRNA rna_ThemeNLAEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNLAEditor_rna_properties_begin, ThemeNLAEditor_rna_properties_next, ThemeNLAEditor_rna_properties_end, ThemeNLAEditor_rna_properties_get, NULL, NULL, ThemeNLAEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeNLAEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_space, (PropertyRNA *)&rna_ThemeNLAEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNLAEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeNLAEditor_space = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_space_list, (PropertyRNA *)&rna_ThemeNLAEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNLAEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

PointerPropertyRNA rna_ThemeNLAEditor_space_list = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_grid, (PropertyRNA *)&rna_ThemeNLAEditor_space,
	-1, "space_list", 8650752, "Theme Space List",
	"Settings for space list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNLAEditor_space_list_get, NULL, NULL, NULL,&RNA_ThemeSpaceListGeneric
};

static float rna_ThemeNLAEditor_grid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_grid = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_view_sliders, (PropertyRNA *)&rna_ThemeNLAEditor_space_list,
	-1, "grid", 8195, "Grid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeNLAEditor_grid_get, ThemeNLAEditor_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_grid_default
};

static float rna_ThemeNLAEditor_view_sliders_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_view_sliders = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_active_action, (PropertyRNA *)&rna_ThemeNLAEditor_grid,
	-1, "view_sliders", 8195, "View Sliders",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade1), 2, NULL},
	NULL, NULL, ThemeNLAEditor_view_sliders_get, ThemeNLAEditor_view_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_view_sliders_default
};

static float rna_ThemeNLAEditor_active_action_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_active_action = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_active_action_unset, (PropertyRNA *)&rna_ThemeNLAEditor_view_sliders,
	-1, "active_action", 8195, "Active Action",
	"Animation data block has active action",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, anim_active), 2, NULL},
	NULL, NULL, ThemeNLAEditor_active_action_get, ThemeNLAEditor_active_action_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_active_action_default
};

static float rna_ThemeNLAEditor_active_action_unset_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_active_action_unset = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_strips, (PropertyRNA *)&rna_ThemeNLAEditor_active_action,
	-1, "active_action_unset", 8195, "No Active Action",
	"Animation data block doesn\'t have active action",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, anim_non_active), 2, NULL},
	NULL, NULL, ThemeNLAEditor_active_action_unset_get, ThemeNLAEditor_active_action_unset_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_active_action_unset_default
};

static float rna_ThemeNLAEditor_strips_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_strips = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_strips_selected, (PropertyRNA *)&rna_ThemeNLAEditor_active_action_unset,
	-1, "strips", 8195, "Strips",
	"Action-Clip Strip - Unselected",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, strip), 2, NULL},
	NULL, NULL, ThemeNLAEditor_strips_get, ThemeNLAEditor_strips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_strips_default
};

static float rna_ThemeNLAEditor_strips_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_strips_selected = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_transition_strips, (PropertyRNA *)&rna_ThemeNLAEditor_strips,
	-1, "strips_selected", 8195, "Strips Selected",
	"Action-Clip Strip - Selected",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, strip_select), 2, NULL},
	NULL, NULL, ThemeNLAEditor_strips_selected_get, ThemeNLAEditor_strips_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_strips_selected_default
};

static float rna_ThemeNLAEditor_transition_strips_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_transition_strips = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_transition_strips_selected, (PropertyRNA *)&rna_ThemeNLAEditor_strips_selected,
	-1, "transition_strips", 8195, "Transitions",
	"Transition Strip - Unselected",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_transition), 2, NULL},
	NULL, NULL, ThemeNLAEditor_transition_strips_get, ThemeNLAEditor_transition_strips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_transition_strips_default
};

static float rna_ThemeNLAEditor_transition_strips_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_transition_strips_selected = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_meta_strips, (PropertyRNA *)&rna_ThemeNLAEditor_transition_strips,
	-1, "transition_strips_selected", 8195, "Transitions Selected",
	"Transition Strip - Selected",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_transition_sel), 2, NULL},
	NULL, NULL, ThemeNLAEditor_transition_strips_selected_get, ThemeNLAEditor_transition_strips_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_transition_strips_selected_default
};

static float rna_ThemeNLAEditor_meta_strips_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_meta_strips = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_meta_strips_selected, (PropertyRNA *)&rna_ThemeNLAEditor_transition_strips_selected,
	-1, "meta_strips", 8195, "Meta Strips",
	"Meta Strip - Unselected (for grouping related strips)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_meta), 2, NULL},
	NULL, NULL, ThemeNLAEditor_meta_strips_get, ThemeNLAEditor_meta_strips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_meta_strips_default
};

static float rna_ThemeNLAEditor_meta_strips_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_meta_strips_selected = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_sound_strips, (PropertyRNA *)&rna_ThemeNLAEditor_meta_strips,
	-1, "meta_strips_selected", 8195, "Meta Strips Selected",
	"Meta Strip - Selected (for grouping related strips)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_meta_sel), 2, NULL},
	NULL, NULL, ThemeNLAEditor_meta_strips_selected_get, ThemeNLAEditor_meta_strips_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_meta_strips_selected_default
};

static float rna_ThemeNLAEditor_sound_strips_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_sound_strips = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_sound_strips_selected, (PropertyRNA *)&rna_ThemeNLAEditor_meta_strips_selected,
	-1, "sound_strips", 8195, "Sound Strips",
	"Sound Strip - Unselected (for timing speaker sounds)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_sound), 2, NULL},
	NULL, NULL, ThemeNLAEditor_sound_strips_get, ThemeNLAEditor_sound_strips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_sound_strips_default
};

static float rna_ThemeNLAEditor_sound_strips_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_sound_strips_selected = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_tweak, (PropertyRNA *)&rna_ThemeNLAEditor_sound_strips,
	-1, "sound_strips_selected", 8195, "Sound Strips Selected",
	"Sound Strip - Selected (for timing speaker sounds)",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_sound_sel), 2, NULL},
	NULL, NULL, ThemeNLAEditor_sound_strips_selected_get, ThemeNLAEditor_sound_strips_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_sound_strips_selected_default
};

static float rna_ThemeNLAEditor_tweak_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_tweak = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_tweak_duplicate, (PropertyRNA *)&rna_ThemeNLAEditor_sound_strips_selected,
	-1, "tweak", 8195, "Tweak",
	"Color for strip/action being \'tweaked\' or edited",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_tweaking), 2, NULL},
	NULL, NULL, ThemeNLAEditor_tweak_get, ThemeNLAEditor_tweak_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_tweak_default
};

static float rna_ThemeNLAEditor_tweak_duplicate_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_tweak_duplicate = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_keyframe_border, (PropertyRNA *)&rna_ThemeNLAEditor_tweak,
	-1, "tweak_duplicate", 8195, "Tweak Duplicate Flag",
	"Warning/error indicator color for strips referencing the strip being tweaked",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nla_tweakdupli), 2, NULL},
	NULL, NULL, ThemeNLAEditor_tweak_duplicate_get, ThemeNLAEditor_tweak_duplicate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_tweak_duplicate_default
};

static float rna_ThemeNLAEditor_keyframe_border_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_keyframe_border = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_keyframe_border_selected, (PropertyRNA *)&rna_ThemeNLAEditor_tweak_duplicate,
	-1, "keyframe_border", 8195, "Keyframe Border",
	"Color of keyframe border",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keyborder), 2, NULL},
	NULL, NULL, ThemeNLAEditor_keyframe_border_get, ThemeNLAEditor_keyframe_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_keyframe_border_default
};

static float rna_ThemeNLAEditor_keyframe_border_selected_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_keyframe_border_selected = {
	{(PropertyRNA *)&rna_ThemeNLAEditor_frame_current, (PropertyRNA *)&rna_ThemeNLAEditor_keyframe_border,
	-1, "keyframe_border_selected", 8195, "Keyframe Border Selected",
	"Color of selected keyframe border",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keyborder_select), 2, NULL},
	NULL, NULL, ThemeNLAEditor_keyframe_border_selected_get, ThemeNLAEditor_keyframe_border_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_keyframe_border_selected_default
};

static float rna_ThemeNLAEditor_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNLAEditor_frame_current = {
	{NULL, (PropertyRNA *)&rna_ThemeNLAEditor_keyframe_border_selected,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeNLAEditor_frame_current_get, ThemeNLAEditor_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNLAEditor_frame_current_default
};

StructRNA RNA_ThemeNLAEditor = {
	{(ContainerRNA *)&RNA_ThemeDopeSheet, (ContainerRNA *)&RNA_ThemeFileBrowser,
	NULL,
	{(PropertyRNA *)&rna_ThemeNLAEditor_rna_properties, (PropertyRNA *)&rna_ThemeNLAEditor_frame_current}},
	"ThemeNLAEditor", NULL, NULL, 0, "Theme NLA Editor",
	"Theme settings for the NLA Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeNLAEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Dope Sheet */
CollectionPropertyRNA rna_ThemeDopeSheet_rna_properties = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeDopeSheet_rna_properties_begin, ThemeDopeSheet_rna_properties_next, ThemeDopeSheet_rna_properties_end, ThemeDopeSheet_rna_properties_get, NULL, NULL, ThemeDopeSheet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeDopeSheet_rna_type = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_space, (PropertyRNA *)&rna_ThemeDopeSheet_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeDopeSheet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeDopeSheet_space = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_space_list, (PropertyRNA *)&rna_ThemeDopeSheet_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeDopeSheet_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

PointerPropertyRNA rna_ThemeDopeSheet_space_list = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_grid, (PropertyRNA *)&rna_ThemeDopeSheet_space,
	-1, "space_list", 8650752, "Theme Space List",
	"Settings for space list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeDopeSheet_space_list_get, NULL, NULL, NULL,&RNA_ThemeSpaceListGeneric
};

static float rna_ThemeDopeSheet_grid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_grid = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_frame_current, (PropertyRNA *)&rna_ThemeDopeSheet_space_list,
	-1, "grid", 8195, "Grid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeDopeSheet_grid_get, ThemeDopeSheet_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_grid_default
};

static float rna_ThemeDopeSheet_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_frame_current = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_value_sliders, (PropertyRNA *)&rna_ThemeDopeSheet_grid,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeDopeSheet_frame_current_get, ThemeDopeSheet_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_frame_current_default
};

static float rna_ThemeDopeSheet_value_sliders_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_value_sliders = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_view_sliders, (PropertyRNA *)&rna_ThemeDopeSheet_frame_current,
	-1, "value_sliders", 8195, "Value Sliders",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face), 2, NULL},
	NULL, NULL, ThemeDopeSheet_value_sliders_get, ThemeDopeSheet_value_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_value_sliders_default
};

static float rna_ThemeDopeSheet_view_sliders_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_view_sliders = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_dopesheet_channel, (PropertyRNA *)&rna_ThemeDopeSheet_value_sliders,
	-1, "view_sliders", 8195, "View Sliders",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade1), 2, NULL},
	NULL, NULL, ThemeDopeSheet_view_sliders_get, ThemeDopeSheet_view_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_view_sliders_default
};

static float rna_ThemeDopeSheet_dopesheet_channel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_dopesheet_channel = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_dopesheet_subchannel, (PropertyRNA *)&rna_ThemeDopeSheet_view_sliders,
	-1, "dopesheet_channel", 8195, "Dope Sheet Channel",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, ds_channel), 2, NULL},
	NULL, NULL, ThemeDopeSheet_dopesheet_channel_get, ThemeDopeSheet_dopesheet_channel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_dopesheet_channel_default
};

static float rna_ThemeDopeSheet_dopesheet_subchannel_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_dopesheet_subchannel = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_channels, (PropertyRNA *)&rna_ThemeDopeSheet_dopesheet_channel,
	-1, "dopesheet_subchannel", 8195, "Dope Sheet Sub-Channel",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, ds_subchannel), 2, NULL},
	NULL, NULL, ThemeDopeSheet_dopesheet_subchannel_get, ThemeDopeSheet_dopesheet_subchannel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_dopesheet_subchannel_default
};

static float rna_ThemeDopeSheet_channels_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_channels = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_channels_selected, (PropertyRNA *)&rna_ThemeDopeSheet_dopesheet_subchannel,
	-1, "channels", 8195, "Channels",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade2), 2, NULL},
	NULL, NULL, ThemeDopeSheet_channels_get, ThemeDopeSheet_channels_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_channels_default
};

static float rna_ThemeDopeSheet_channels_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_channels_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_channel_group, (PropertyRNA *)&rna_ThemeDopeSheet_channels,
	-1, "channels_selected", 8195, "Channels Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, hilite), 2, NULL},
	NULL, NULL, ThemeDopeSheet_channels_selected_get, ThemeDopeSheet_channels_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_channels_selected_default
};

static float rna_ThemeDopeSheet_channel_group_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_channel_group = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_active_channels_group, (PropertyRNA *)&rna_ThemeDopeSheet_channels_selected,
	-1, "channel_group", 8195, "Channel Group",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, group), 2, NULL},
	NULL, NULL, ThemeDopeSheet_channel_group_get, ThemeDopeSheet_channel_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_channel_group_default
};

static float rna_ThemeDopeSheet_active_channels_group_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_active_channels_group = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_long_key, (PropertyRNA *)&rna_ThemeDopeSheet_channel_group,
	-1, "active_channels_group", 8195, "Active Channel Group",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, group_active), 2, NULL},
	NULL, NULL, ThemeDopeSheet_active_channels_group_get, ThemeDopeSheet_active_channels_group_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_active_channels_group_default
};

static float rna_ThemeDopeSheet_long_key_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_long_key = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_long_key_selected, (PropertyRNA *)&rna_ThemeDopeSheet_active_channels_group,
	-1, "long_key", 8195, "Long Key",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, strip), 2, NULL},
	NULL, NULL, ThemeDopeSheet_long_key_get, ThemeDopeSheet_long_key_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_long_key_default
};

static float rna_ThemeDopeSheet_long_key_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_long_key_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe, (PropertyRNA *)&rna_ThemeDopeSheet_long_key,
	-1, "long_key_selected", 8195, "Long Key Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, strip_select), 2, NULL},
	NULL, NULL, ThemeDopeSheet_long_key_selected_get, ThemeDopeSheet_long_key_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_long_key_selected_default
};

static float rna_ThemeDopeSheet_keyframe_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_selected, (PropertyRNA *)&rna_ThemeDopeSheet_long_key_selected,
	-1, "keyframe", 8195, "Keyframe",
	"Color of Keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_keyframe), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_get, ThemeDopeSheet_keyframe_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_default
};

static float rna_ThemeDopeSheet_keyframe_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_extreme, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe,
	-1, "keyframe_selected", 8195, "Keyframe Selected",
	"Color of selected keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_keyframe_select), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_selected_get, ThemeDopeSheet_keyframe_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_selected_default
};

static float rna_ThemeDopeSheet_keyframe_extreme_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_extreme = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_extreme_selected, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_selected,
	-1, "keyframe_extreme", 8195, "Extreme Keyframe",
	"Color of extreme keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_extreme), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_extreme_get, ThemeDopeSheet_keyframe_extreme_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_extreme_default
};

static float rna_ThemeDopeSheet_keyframe_extreme_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_extreme_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_breakdown, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_extreme,
	-1, "keyframe_extreme_selected", 8195, "Extreme Keyframe Selected",
	"Color of selected extreme keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_extreme_select), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_extreme_selected_get, ThemeDopeSheet_keyframe_extreme_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_extreme_selected_default
};

static float rna_ThemeDopeSheet_keyframe_breakdown_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_breakdown = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_breakdown_selected, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_extreme_selected,
	-1, "keyframe_breakdown", 8195, "Breakdown Keyframe",
	"Color of breakdown keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_breakdown), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_breakdown_get, ThemeDopeSheet_keyframe_breakdown_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_breakdown_default
};

static float rna_ThemeDopeSheet_keyframe_breakdown_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_breakdown_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_jitter, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_breakdown,
	-1, "keyframe_breakdown_selected", 8195, "Breakdown Keyframe Selected",
	"Color of selected breakdown keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_breakdown_select), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_breakdown_selected_get, ThemeDopeSheet_keyframe_breakdown_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_breakdown_selected_default
};

static float rna_ThemeDopeSheet_keyframe_jitter_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_jitter = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_jitter_selected, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_breakdown_selected,
	-1, "keyframe_jitter", 8195, "Jitter Keyframe",
	"Color of jitter keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_jitter), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_jitter_get, ThemeDopeSheet_keyframe_jitter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_jitter_default
};

static float rna_ThemeDopeSheet_keyframe_jitter_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_jitter_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_border, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_jitter,
	-1, "keyframe_jitter_selected", 8195, "Jitter Keyframe Selected",
	"Color of selected jitter keyframe",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keytype_jitter_select), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_jitter_selected_get, ThemeDopeSheet_keyframe_jitter_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_jitter_selected_default
};

static float rna_ThemeDopeSheet_keyframe_border_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_border = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_keyframe_border_selected, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_jitter_selected,
	-1, "keyframe_border", 8195, "Keyframe Border",
	"Color of keyframe border",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keyborder), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_border_get, ThemeDopeSheet_keyframe_border_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_border_default
};

static float rna_ThemeDopeSheet_keyframe_border_selected_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_keyframe_border_selected = {
	{(PropertyRNA *)&rna_ThemeDopeSheet_summary, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_border,
	-1, "keyframe_border_selected", 8195, "Keyframe Border Selected",
	"Color of selected keyframe border",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, keyborder_select), 2, NULL},
	NULL, NULL, ThemeDopeSheet_keyframe_border_selected_get, ThemeDopeSheet_keyframe_border_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_keyframe_border_selected_default
};

static float rna_ThemeDopeSheet_summary_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeDopeSheet_summary = {
	{NULL, (PropertyRNA *)&rna_ThemeDopeSheet_keyframe_border_selected,
	-1, "summary", 8195, "Summary",
	"Color of summary channel",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, anim_active), 2, NULL},
	NULL, NULL, ThemeDopeSheet_summary_get, ThemeDopeSheet_summary_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeDopeSheet_summary_default
};

StructRNA RNA_ThemeDopeSheet = {
	{(ContainerRNA *)&RNA_ThemeImageEditor, (ContainerRNA *)&RNA_ThemeNLAEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeDopeSheet_rna_properties, (PropertyRNA *)&rna_ThemeDopeSheet_summary}},
	"ThemeDopeSheet", NULL, NULL, 0, "Theme Dope Sheet",
	"Theme settings for the Dope Sheet",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeDopeSheet_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Image Editor */
CollectionPropertyRNA rna_ThemeImageEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeImageEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeImageEditor_rna_properties_begin, ThemeImageEditor_rna_properties_next, ThemeImageEditor_rna_properties_end, ThemeImageEditor_rna_properties_get, NULL, NULL, ThemeImageEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeImageEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeImageEditor_space, (PropertyRNA *)&rna_ThemeImageEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeImageEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeImageEditor_space = {
	{(PropertyRNA *)&rna_ThemeImageEditor_vertex, (PropertyRNA *)&rna_ThemeImageEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeImageEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeImageEditor_vertex_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_vertex = {
	{(PropertyRNA *)&rna_ThemeImageEditor_vertex_select, (PropertyRNA *)&rna_ThemeImageEditor_space,
	-1, "vertex", 8195, "Vertex",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex), 2, NULL},
	NULL, NULL, ThemeImageEditor_vertex_get, ThemeImageEditor_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_vertex_default
};

static float rna_ThemeImageEditor_vertex_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_vertex_select = {
	{(PropertyRNA *)&rna_ThemeImageEditor_vertex_size, (PropertyRNA *)&rna_ThemeImageEditor_vertex,
	-1, "vertex_select", 8195, "Vertex Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_select), 2, NULL},
	NULL, NULL, ThemeImageEditor_vertex_select_get, ThemeImageEditor_vertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_vertex_select_default
};

IntPropertyRNA rna_ThemeImageEditor_vertex_size = {
	{(PropertyRNA *)&rna_ThemeImageEditor_vertex_unreferenced, (PropertyRNA *)&rna_ThemeImageEditor_vertex_select,
	-1, "vertex_size", 8195, "Vertex Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_size), 2, NULL},
	ThemeImageEditor_vertex_size_get, ThemeImageEditor_vertex_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static float rna_ThemeImageEditor_vertex_unreferenced_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_vertex_unreferenced = {
	{(PropertyRNA *)&rna_ThemeImageEditor_face, (PropertyRNA *)&rna_ThemeImageEditor_vertex_size,
	-1, "vertex_unreferenced", 8195, "Vertex Group Unreferenced",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_unreferenced), 2, NULL},
	NULL, NULL, ThemeImageEditor_vertex_unreferenced_get, ThemeImageEditor_vertex_unreferenced_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_vertex_unreferenced_default
};

static float rna_ThemeImageEditor_face_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_face = {
	{(PropertyRNA *)&rna_ThemeImageEditor_face_select, (PropertyRNA *)&rna_ThemeImageEditor_vertex_unreferenced,
	-1, "face", 8195, "Face",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face), 2, NULL},
	NULL, NULL, ThemeImageEditor_face_get, ThemeImageEditor_face_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_face_default
};

static float rna_ThemeImageEditor_face_select_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_face_select = {
	{(PropertyRNA *)&rna_ThemeImageEditor_face_dot, (PropertyRNA *)&rna_ThemeImageEditor_face,
	-1, "face_select", 8195, "Face Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face_select), 2, NULL},
	NULL, NULL, ThemeImageEditor_face_select_get, ThemeImageEditor_face_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_face_select_default
};

static float rna_ThemeImageEditor_face_dot_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_face_dot = {
	{(PropertyRNA *)&rna_ThemeImageEditor_facedot_size, (PropertyRNA *)&rna_ThemeImageEditor_face_select,
	-1, "face_dot", 8195, "Face Dot Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, face_dot), 2, NULL},
	NULL, NULL, ThemeImageEditor_face_dot_get, ThemeImageEditor_face_dot_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_face_dot_default
};

IntPropertyRNA rna_ThemeImageEditor_facedot_size = {
	{(PropertyRNA *)&rna_ThemeImageEditor_freestyle_face_mark, (PropertyRNA *)&rna_ThemeImageEditor_face_dot,
	-1, "facedot_size", 8195, "Face Dot Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, facedot_size), 2, NULL},
	ThemeImageEditor_facedot_size_get, ThemeImageEditor_facedot_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 10, 1, 10, 1, 0, NULL
};

static float rna_ThemeImageEditor_freestyle_face_mark_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_freestyle_face_mark = {
	{(PropertyRNA *)&rna_ThemeImageEditor_editmesh_active, (PropertyRNA *)&rna_ThemeImageEditor_facedot_size,
	-1, "freestyle_face_mark", 8195, "Freestyle Face Mark",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, freestyle_face_mark), 2, NULL},
	NULL, NULL, ThemeImageEditor_freestyle_face_mark_get, ThemeImageEditor_freestyle_face_mark_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_freestyle_face_mark_default
};

static float rna_ThemeImageEditor_editmesh_active_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_editmesh_active = {
	{(PropertyRNA *)&rna_ThemeImageEditor_wire_edit, (PropertyRNA *)&rna_ThemeImageEditor_freestyle_face_mark,
	-1, "editmesh_active", 8195, "Active Vert/Edge/Face",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, editmesh_active), 2, NULL},
	NULL, NULL, ThemeImageEditor_editmesh_active_get, ThemeImageEditor_editmesh_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_editmesh_active_default
};

static float rna_ThemeImageEditor_wire_edit_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_wire_edit = {
	{(PropertyRNA *)&rna_ThemeImageEditor_edge_select, (PropertyRNA *)&rna_ThemeImageEditor_editmesh_active,
	-1, "wire_edit", 8195, "Wire Edit",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, wire_edit), 2, NULL},
	NULL, NULL, ThemeImageEditor_wire_edit_get, ThemeImageEditor_wire_edit_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_wire_edit_default
};

static float rna_ThemeImageEditor_edge_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_edge_select = {
	{(PropertyRNA *)&rna_ThemeImageEditor_scope_back, (PropertyRNA *)&rna_ThemeImageEditor_wire_edit,
	-1, "edge_select", 8195, "Edge Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_select), 2, NULL},
	NULL, NULL, ThemeImageEditor_edge_select_get, ThemeImageEditor_edge_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_edge_select_default
};

static float rna_ThemeImageEditor_scope_back_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_scope_back = {
	{(PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_face, (PropertyRNA *)&rna_ThemeImageEditor_edge_select,
	-1, "scope_back", 8195, "Scope region background color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_back), 2, NULL},
	NULL, NULL, ThemeImageEditor_scope_back_get, ThemeImageEditor_scope_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_scope_back_default
};

static float rna_ThemeImageEditor_preview_stitch_face_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_face = {
	{(PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_edge, (PropertyRNA *)&rna_ThemeImageEditor_scope_back,
	-1, "preview_stitch_face", 8195, "Stitch preview face color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_stitch_face), 2, NULL},
	NULL, NULL, ThemeImageEditor_preview_stitch_face_get, ThemeImageEditor_preview_stitch_face_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_preview_stitch_face_default
};

static float rna_ThemeImageEditor_preview_stitch_edge_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_edge = {
	{(PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_vert, (PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_face,
	-1, "preview_stitch_edge", 8195, "Stitch preview edge color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_stitch_edge), 2, NULL},
	NULL, NULL, ThemeImageEditor_preview_stitch_edge_get, ThemeImageEditor_preview_stitch_edge_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_preview_stitch_edge_default
};

static float rna_ThemeImageEditor_preview_stitch_vert_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_vert = {
	{(PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_stitchable, (PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_edge,
	-1, "preview_stitch_vert", 8195, "Stitch preview vertex color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_stitch_vert), 2, NULL},
	NULL, NULL, ThemeImageEditor_preview_stitch_vert_get, ThemeImageEditor_preview_stitch_vert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_preview_stitch_vert_default
};

static float rna_ThemeImageEditor_preview_stitch_stitchable_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_stitchable = {
	{(PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_unstitchable, (PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_vert,
	-1, "preview_stitch_stitchable", 8195, "Stitch preview stitchable color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_stitch_stitchable), 2, NULL},
	NULL, NULL, ThemeImageEditor_preview_stitch_stitchable_get, ThemeImageEditor_preview_stitch_stitchable_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_preview_stitch_stitchable_default
};

static float rna_ThemeImageEditor_preview_stitch_unstitchable_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_unstitchable = {
	{(PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_active, (PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_stitchable,
	-1, "preview_stitch_unstitchable", 8195, "Stitch preview unstitchable color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_stitch_unstitchable), 2, NULL},
	NULL, NULL, ThemeImageEditor_preview_stitch_unstitchable_get, ThemeImageEditor_preview_stitch_unstitchable_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_preview_stitch_unstitchable_default
};

static float rna_ThemeImageEditor_preview_stitch_active_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_preview_stitch_active = {
	{(PropertyRNA *)&rna_ThemeImageEditor_uv_shadow, (PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_unstitchable,
	-1, "preview_stitch_active", 8195, "Stitch preview active island",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_stitch_active), 2, NULL},
	NULL, NULL, ThemeImageEditor_preview_stitch_active_get, ThemeImageEditor_preview_stitch_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_preview_stitch_active_default
};

static float rna_ThemeImageEditor_uv_shadow_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_uv_shadow = {
	{(PropertyRNA *)&rna_ThemeImageEditor_uv_others, (PropertyRNA *)&rna_ThemeImageEditor_preview_stitch_active,
	-1, "uv_shadow", 8195, "Texture paint/Modifier UVs",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, uv_shadow), 2, NULL},
	NULL, NULL, ThemeImageEditor_uv_shadow_get, ThemeImageEditor_uv_shadow_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_uv_shadow_default
};

static float rna_ThemeImageEditor_uv_others_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_uv_others = {
	{(PropertyRNA *)&rna_ThemeImageEditor_frame_current, (PropertyRNA *)&rna_ThemeImageEditor_uv_shadow,
	-1, "uv_others", 8195, "Other Object UVs",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, uv_others), 2, NULL},
	NULL, NULL, ThemeImageEditor_uv_others_get, ThemeImageEditor_uv_others_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_uv_others_default
};

static float rna_ThemeImageEditor_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_frame_current = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_free, (PropertyRNA *)&rna_ThemeImageEditor_uv_others,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeImageEditor_frame_current_get, ThemeImageEditor_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_frame_current_default
};

static float rna_ThemeImageEditor_handle_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_free = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_auto, (PropertyRNA *)&rna_ThemeImageEditor_frame_current,
	-1, "handle_free", 8195, "Free handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_free), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_free_get, ThemeImageEditor_handle_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_free_default
};

static float rna_ThemeImageEditor_handle_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_auto = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_align, (PropertyRNA *)&rna_ThemeImageEditor_handle_free,
	-1, "handle_auto", 8195, "Auto handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_auto_get, ThemeImageEditor_handle_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_auto_default
};

static float rna_ThemeImageEditor_handle_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_align = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_sel_free, (PropertyRNA *)&rna_ThemeImageEditor_handle_auto,
	-1, "handle_align", 8195, "Align handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_align), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_align_get, ThemeImageEditor_handle_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_align_default
};

static float rna_ThemeImageEditor_handle_sel_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_sel_free = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_sel_auto, (PropertyRNA *)&rna_ThemeImageEditor_handle_align,
	-1, "handle_sel_free", 8195, "Free handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_free), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_sel_free_get, ThemeImageEditor_handle_sel_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_sel_free_default
};

static float rna_ThemeImageEditor_handle_sel_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_sel_auto = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_sel_align, (PropertyRNA *)&rna_ThemeImageEditor_handle_sel_free,
	-1, "handle_sel_auto", 8195, "Auto handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_sel_auto_get, ThemeImageEditor_handle_sel_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_sel_auto_default
};

static float rna_ThemeImageEditor_handle_sel_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_sel_align = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_auto_clamped, (PropertyRNA *)&rna_ThemeImageEditor_handle_sel_auto,
	-1, "handle_sel_align", 8195, "Align handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_align), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_sel_align_get, ThemeImageEditor_handle_sel_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_sel_align_default
};

static float rna_ThemeImageEditor_handle_auto_clamped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_auto_clamped = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_sel_auto_clamped, (PropertyRNA *)&rna_ThemeImageEditor_handle_sel_align,
	-1, "handle_auto_clamped", 8195, "Auto-Clamped handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto_clamped), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_auto_clamped_get, ThemeImageEditor_handle_auto_clamped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_auto_clamped_default
};

static float rna_ThemeImageEditor_handle_sel_auto_clamped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_sel_auto_clamped = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_vertex, (PropertyRNA *)&rna_ThemeImageEditor_handle_auto_clamped,
	-1, "handle_sel_auto_clamped", 8195, "Auto-Clamped handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto_clamped), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_sel_auto_clamped_get, ThemeImageEditor_handle_sel_auto_clamped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_sel_auto_clamped_default
};

static float rna_ThemeImageEditor_handle_vertex_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_vertex = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_vertex_select, (PropertyRNA *)&rna_ThemeImageEditor_handle_sel_auto_clamped,
	-1, "handle_vertex", 8195, "Handle Vertex",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_vertex_get, ThemeImageEditor_handle_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_vertex_default
};

static float rna_ThemeImageEditor_handle_vertex_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_handle_vertex_select = {
	{(PropertyRNA *)&rna_ThemeImageEditor_handle_vertex_size, (PropertyRNA *)&rna_ThemeImageEditor_handle_vertex,
	-1, "handle_vertex_select", 8195, "Handle Vertex Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex_select), 2, NULL},
	NULL, NULL, ThemeImageEditor_handle_vertex_select_get, ThemeImageEditor_handle_vertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_handle_vertex_select_default
};

IntPropertyRNA rna_ThemeImageEditor_handle_vertex_size = {
	{(PropertyRNA *)&rna_ThemeImageEditor_paint_curve_handle, (PropertyRNA *)&rna_ThemeImageEditor_handle_vertex_select,
	-1, "handle_vertex_size", 8195, "Handle Vertex Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex_size), 2, NULL},
	ThemeImageEditor_handle_vertex_size_get, ThemeImageEditor_handle_vertex_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

static float rna_ThemeImageEditor_paint_curve_handle_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_paint_curve_handle = {
	{(PropertyRNA *)&rna_ThemeImageEditor_paint_curve_pivot, (PropertyRNA *)&rna_ThemeImageEditor_handle_vertex_size,
	-1, "paint_curve_handle", 8195, "Paint Curve Handle",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, paint_curve_handle), 2, NULL},
	NULL, NULL, ThemeImageEditor_paint_curve_handle_get, ThemeImageEditor_paint_curve_handle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_paint_curve_handle_default
};

static float rna_ThemeImageEditor_paint_curve_pivot_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeImageEditor_paint_curve_pivot = {
	{NULL, (PropertyRNA *)&rna_ThemeImageEditor_paint_curve_handle,
	-1, "paint_curve_pivot", 8195, "Paint Curve Pivot",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, paint_curve_pivot), 2, NULL},
	NULL, NULL, ThemeImageEditor_paint_curve_pivot_get, ThemeImageEditor_paint_curve_pivot_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeImageEditor_paint_curve_pivot_default
};

StructRNA RNA_ThemeImageEditor = {
	{(ContainerRNA *)&RNA_ThemeSequenceEditor, (ContainerRNA *)&RNA_ThemeDopeSheet,
	NULL,
	{(PropertyRNA *)&rna_ThemeImageEditor_rna_properties, (PropertyRNA *)&rna_ThemeImageEditor_paint_curve_pivot}},
	"ThemeImageEditor", NULL, NULL, 0, "Theme Image Editor",
	"Theme settings for the Image Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeImageEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Sequence Editor */
CollectionPropertyRNA rna_ThemeSequenceEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSequenceEditor_rna_properties_begin, ThemeSequenceEditor_rna_properties_next, ThemeSequenceEditor_rna_properties_end, ThemeSequenceEditor_rna_properties_get, NULL, NULL, ThemeSequenceEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeSequenceEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_space, (PropertyRNA *)&rna_ThemeSequenceEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSequenceEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeSequenceEditor_space = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_grid, (PropertyRNA *)&rna_ThemeSequenceEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeSequenceEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeSequenceEditor_grid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_grid = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_window_sliders, (PropertyRNA *)&rna_ThemeSequenceEditor_space,
	-1, "grid", 8195, "Grid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_grid_get, ThemeSequenceEditor_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_grid_default
};

static float rna_ThemeSequenceEditor_window_sliders_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_window_sliders = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_movie_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_grid,
	-1, "window_sliders", 8195, "Window Sliders",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade1), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_window_sliders_get, ThemeSequenceEditor_window_sliders_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_window_sliders_default
};

static float rna_ThemeSequenceEditor_movie_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_movie_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_movieclip_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_window_sliders,
	-1, "movie_strip", 8195, "Movie Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, movie), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_movie_strip_get, ThemeSequenceEditor_movie_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_movie_strip_default
};

static float rna_ThemeSequenceEditor_movieclip_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_movieclip_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_image_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_movie_strip,
	-1, "movieclip_strip", 8195, "Clip Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, movieclip), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_movieclip_strip_get, ThemeSequenceEditor_movieclip_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_movieclip_strip_default
};

static float rna_ThemeSequenceEditor_image_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_image_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_scene_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_movieclip_strip,
	-1, "image_strip", 8195, "Image Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, image), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_image_strip_get, ThemeSequenceEditor_image_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_image_strip_default
};

static float rna_ThemeSequenceEditor_scene_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_scene_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_audio_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_image_strip,
	-1, "scene_strip", 8195, "Scene Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, scene), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_scene_strip_get, ThemeSequenceEditor_scene_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_scene_strip_default
};

static float rna_ThemeSequenceEditor_audio_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_audio_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_effect_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_scene_strip,
	-1, "audio_strip", 8195, "Audio Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, audio), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_audio_strip_get, ThemeSequenceEditor_audio_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_audio_strip_default
};

static float rna_ThemeSequenceEditor_effect_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_effect_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_transition_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_audio_strip,
	-1, "effect_strip", 8195, "Effect Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, effect), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_effect_strip_get, ThemeSequenceEditor_effect_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_effect_strip_default
};

static float rna_ThemeSequenceEditor_transition_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_transition_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_meta_strip, (PropertyRNA *)&rna_ThemeSequenceEditor_effect_strip,
	-1, "transition_strip", 8195, "Transition Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, transition), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_transition_strip_get, ThemeSequenceEditor_transition_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_transition_strip_default
};

static float rna_ThemeSequenceEditor_meta_strip_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_meta_strip = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_frame_current, (PropertyRNA *)&rna_ThemeSequenceEditor_transition_strip,
	-1, "meta_strip", 8195, "Meta Strip",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, meta), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_meta_strip_get, ThemeSequenceEditor_meta_strip_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_meta_strip_default
};

static float rna_ThemeSequenceEditor_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_frame_current = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_keyframe, (PropertyRNA *)&rna_ThemeSequenceEditor_meta_strip,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_frame_current_get, ThemeSequenceEditor_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_frame_current_default
};

static float rna_ThemeSequenceEditor_keyframe_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_keyframe = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_draw_action, (PropertyRNA *)&rna_ThemeSequenceEditor_frame_current,
	-1, "keyframe", 8195, "Keyframe",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, vertex_select), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_keyframe_get, ThemeSequenceEditor_keyframe_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_keyframe_default
};

static float rna_ThemeSequenceEditor_draw_action_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_draw_action = {
	{(PropertyRNA *)&rna_ThemeSequenceEditor_preview_back, (PropertyRNA *)&rna_ThemeSequenceEditor_keyframe,
	-1, "draw_action", 8195, "Draw Action",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, bone_pose), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_draw_action_get, ThemeSequenceEditor_draw_action_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_draw_action_default
};

static float rna_ThemeSequenceEditor_preview_back_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeSequenceEditor_preview_back = {
	{NULL, (PropertyRNA *)&rna_ThemeSequenceEditor_draw_action,
	-1, "preview_back", 8195, "Preview Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, preview_back), 2, NULL},
	NULL, NULL, ThemeSequenceEditor_preview_back_get, ThemeSequenceEditor_preview_back_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeSequenceEditor_preview_back_default
};

StructRNA RNA_ThemeSequenceEditor = {
	{(ContainerRNA *)&RNA_ThemeProperties, (ContainerRNA *)&RNA_ThemeImageEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeSequenceEditor_rna_properties, (PropertyRNA *)&rna_ThemeSequenceEditor_preview_back}},
	"ThemeSequenceEditor", NULL, NULL, 0, "Theme Sequence Editor",
	"Theme settings for the Sequence Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeSequenceEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Properties */
CollectionPropertyRNA rna_ThemeProperties_rna_properties = {
	{(PropertyRNA *)&rna_ThemeProperties_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeProperties_rna_properties_begin, ThemeProperties_rna_properties_next, ThemeProperties_rna_properties_end, ThemeProperties_rna_properties_get, NULL, NULL, ThemeProperties_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeProperties_rna_type = {
	{(PropertyRNA *)&rna_ThemeProperties_space, (PropertyRNA *)&rna_ThemeProperties_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeProperties_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeProperties_space = {
	{NULL, (PropertyRNA *)&rna_ThemeProperties_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeProperties_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

StructRNA RNA_ThemeProperties = {
	{(ContainerRNA *)&RNA_ThemeTextEditor, (ContainerRNA *)&RNA_ThemeSequenceEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeProperties_rna_properties, (PropertyRNA *)&rna_ThemeProperties_space}},
	"ThemeProperties", NULL, NULL, 0, "Theme Properties",
	"Theme settings for the Properties",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeProperties_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Text Editor */
CollectionPropertyRNA rna_ThemeTextEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeTextEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeTextEditor_rna_properties_begin, ThemeTextEditor_rna_properties_next, ThemeTextEditor_rna_properties_end, ThemeTextEditor_rna_properties_get, NULL, NULL, ThemeTextEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeTextEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeTextEditor_space, (PropertyRNA *)&rna_ThemeTextEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeTextEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeTextEditor_space = {
	{(PropertyRNA *)&rna_ThemeTextEditor_line_numbers_background, (PropertyRNA *)&rna_ThemeTextEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeTextEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeTextEditor_line_numbers_background_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_line_numbers_background = {
	{(PropertyRNA *)&rna_ThemeTextEditor_selected_text, (PropertyRNA *)&rna_ThemeTextEditor_space,
	-1, "line_numbers_background", 8195, "Line Numbers Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeTextEditor_line_numbers_background_get, ThemeTextEditor_line_numbers_background_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_line_numbers_background_default
};

static float rna_ThemeTextEditor_selected_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_selected_text = {
	{(PropertyRNA *)&rna_ThemeTextEditor_cursor, (PropertyRNA *)&rna_ThemeTextEditor_line_numbers_background,
	-1, "selected_text", 8195, "Selected Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade2), 2, NULL},
	NULL, NULL, ThemeTextEditor_selected_text_get, ThemeTextEditor_selected_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_selected_text_default
};

static float rna_ThemeTextEditor_cursor_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_cursor = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_builtin, (PropertyRNA *)&rna_ThemeTextEditor_selected_text,
	-1, "cursor", 8195, "Cursor",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, hilite), 2, NULL},
	NULL, NULL, ThemeTextEditor_cursor_get, ThemeTextEditor_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_cursor_default
};

static float rna_ThemeTextEditor_syntax_builtin_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_builtin = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_symbols, (PropertyRNA *)&rna_ThemeTextEditor_cursor,
	-1, "syntax_builtin", 8195, "Syntax Built-in",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxb), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_builtin_get, ThemeTextEditor_syntax_builtin_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_builtin_default
};

static float rna_ThemeTextEditor_syntax_symbols_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_symbols = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_special, (PropertyRNA *)&rna_ThemeTextEditor_syntax_builtin,
	-1, "syntax_symbols", 8195, "Syntax Symbols",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxs), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_symbols_get, ThemeTextEditor_syntax_symbols_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_symbols_default
};

static float rna_ThemeTextEditor_syntax_special_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_special = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_preprocessor, (PropertyRNA *)&rna_ThemeTextEditor_syntax_symbols,
	-1, "syntax_special", 8195, "Syntax Special",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxv), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_special_get, ThemeTextEditor_syntax_special_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_special_default
};

static float rna_ThemeTextEditor_syntax_preprocessor_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_preprocessor = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_reserved, (PropertyRNA *)&rna_ThemeTextEditor_syntax_special,
	-1, "syntax_preprocessor", 8195, "Syntax PreProcessor",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxd), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_preprocessor_get, ThemeTextEditor_syntax_preprocessor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_preprocessor_default
};

static float rna_ThemeTextEditor_syntax_reserved_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_reserved = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_comment, (PropertyRNA *)&rna_ThemeTextEditor_syntax_preprocessor,
	-1, "syntax_reserved", 8195, "Syntax Reserved",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxr), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_reserved_get, ThemeTextEditor_syntax_reserved_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_reserved_default
};

static float rna_ThemeTextEditor_syntax_comment_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_comment = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_string, (PropertyRNA *)&rna_ThemeTextEditor_syntax_reserved,
	-1, "syntax_comment", 8195, "Syntax Comment",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxc), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_comment_get, ThemeTextEditor_syntax_comment_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_comment_default
};

static float rna_ThemeTextEditor_syntax_string_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_string = {
	{(PropertyRNA *)&rna_ThemeTextEditor_syntax_numbers, (PropertyRNA *)&rna_ThemeTextEditor_syntax_comment,
	-1, "syntax_string", 8195, "Syntax String",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxl), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_string_get, ThemeTextEditor_syntax_string_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_string_default
};

static float rna_ThemeTextEditor_syntax_numbers_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTextEditor_syntax_numbers = {
	{NULL, (PropertyRNA *)&rna_ThemeTextEditor_syntax_string,
	-1, "syntax_numbers", 8195, "Syntax Numbers",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxn), 2, NULL},
	NULL, NULL, ThemeTextEditor_syntax_numbers_get, ThemeTextEditor_syntax_numbers_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTextEditor_syntax_numbers_default
};

StructRNA RNA_ThemeTextEditor = {
	{(ContainerRNA *)&RNA_ThemeTimeline, (ContainerRNA *)&RNA_ThemeProperties,
	NULL,
	{(PropertyRNA *)&rna_ThemeTextEditor_rna_properties, (PropertyRNA *)&rna_ThemeTextEditor_syntax_numbers}},
	"ThemeTextEditor", NULL, NULL, 0, "Theme Text Editor",
	"Theme settings for the Text Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeTextEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Timeline */
CollectionPropertyRNA rna_ThemeTimeline_rna_properties = {
	{(PropertyRNA *)&rna_ThemeTimeline_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeTimeline_rna_properties_begin, ThemeTimeline_rna_properties_next, ThemeTimeline_rna_properties_end, ThemeTimeline_rna_properties_get, NULL, NULL, ThemeTimeline_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeTimeline_rna_type = {
	{(PropertyRNA *)&rna_ThemeTimeline_space, (PropertyRNA *)&rna_ThemeTimeline_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeTimeline_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeTimeline_space = {
	{(PropertyRNA *)&rna_ThemeTimeline_grid, (PropertyRNA *)&rna_ThemeTimeline_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeTimeline_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeTimeline_grid_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTimeline_grid = {
	{(PropertyRNA *)&rna_ThemeTimeline_frame_current, (PropertyRNA *)&rna_ThemeTimeline_space,
	-1, "grid", 8195, "Grid",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, grid), 2, NULL},
	NULL, NULL, ThemeTimeline_grid_get, ThemeTimeline_grid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTimeline_grid_default
};

static float rna_ThemeTimeline_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeTimeline_frame_current = {
	{NULL, (PropertyRNA *)&rna_ThemeTimeline_grid,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeTimeline_frame_current_get, ThemeTimeline_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeTimeline_frame_current_default
};

StructRNA RNA_ThemeTimeline = {
	{(ContainerRNA *)&RNA_ThemeNodeEditor, (ContainerRNA *)&RNA_ThemeTextEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeTimeline_rna_properties, (PropertyRNA *)&rna_ThemeTimeline_frame_current}},
	"ThemeTimeline", NULL, NULL, 0, "Theme Timeline",
	"Theme settings for the Timeline",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeTimeline_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Node Editor */
CollectionPropertyRNA rna_ThemeNodeEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNodeEditor_rna_properties_begin, ThemeNodeEditor_rna_properties_next, ThemeNodeEditor_rna_properties_end, ThemeNodeEditor_rna_properties_get, NULL, NULL, ThemeNodeEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeNodeEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_space, (PropertyRNA *)&rna_ThemeNodeEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNodeEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeNodeEditor_space = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_space_list, (PropertyRNA *)&rna_ThemeNodeEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNodeEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

PointerPropertyRNA rna_ThemeNodeEditor_space_list = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_node_selected, (PropertyRNA *)&rna_ThemeNodeEditor_space,
	-1, "space_list", 8650752, "Theme Space List",
	"Settings for space list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeNodeEditor_space_list_get, NULL, NULL, NULL,&RNA_ThemeSpaceListGeneric
};

static float rna_ThemeNodeEditor_node_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_node_selected = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_node_active, (PropertyRNA *)&rna_ThemeNodeEditor_space_list,
	-1, "node_selected", 8195, "Node Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, select), 2, NULL},
	NULL, NULL, ThemeNodeEditor_node_selected_get, ThemeNodeEditor_node_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_node_selected_default
};

static float rna_ThemeNodeEditor_node_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_node_active = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_wire, (PropertyRNA *)&rna_ThemeNodeEditor_node_selected,
	-1, "node_active", 8195, "Active Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, active), 2, NULL},
	NULL, NULL, ThemeNodeEditor_node_active_get, ThemeNodeEditor_node_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_node_active_default
};

static float rna_ThemeNodeEditor_wire_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_wire = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_wire_inner, (PropertyRNA *)&rna_ThemeNodeEditor_node_active,
	-1, "wire", 8195, "Wires",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, wire), 2, NULL},
	NULL, NULL, ThemeNodeEditor_wire_get, ThemeNodeEditor_wire_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_wire_default
};

static float rna_ThemeNodeEditor_wire_inner_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_wire_inner = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_wire_select, (PropertyRNA *)&rna_ThemeNodeEditor_wire,
	-1, "wire_inner", 8195, "Wire Color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxr), 2, NULL},
	NULL, NULL, ThemeNodeEditor_wire_inner_get, ThemeNodeEditor_wire_inner_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_wire_inner_default
};

static float rna_ThemeNodeEditor_wire_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_wire_select = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_selected_text, (PropertyRNA *)&rna_ThemeNodeEditor_wire_inner,
	-1, "wire_select", 8195, "Wire Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, edge_select), 2, NULL},
	NULL, NULL, ThemeNodeEditor_wire_select_get, ThemeNodeEditor_wire_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_wire_select_default
};

static float rna_ThemeNodeEditor_selected_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_selected_text = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_node_backdrop, (PropertyRNA *)&rna_ThemeNodeEditor_wire_select,
	-1, "selected_text", 8195, "Selected Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, shade2), 2, NULL},
	NULL, NULL, ThemeNodeEditor_selected_text_get, ThemeNodeEditor_selected_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_selected_text_default
};

static float rna_ThemeNodeEditor_node_backdrop_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_node_backdrop = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_converter_node, (PropertyRNA *)&rna_ThemeNodeEditor_selected_text,
	-1, "node_backdrop", 8195, "Node Backdrop",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxl), 2, NULL},
	NULL, NULL, ThemeNodeEditor_node_backdrop_get, ThemeNodeEditor_node_backdrop_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_node_backdrop_default
};

static float rna_ThemeNodeEditor_converter_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_converter_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_color_node, (PropertyRNA *)&rna_ThemeNodeEditor_node_backdrop,
	-1, "converter_node", 8195, "Converter Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxv), 2, NULL},
	NULL, NULL, ThemeNodeEditor_converter_node_get, ThemeNodeEditor_converter_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_converter_node_default
};

static float rna_ThemeNodeEditor_color_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_color_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_group_node, (PropertyRNA *)&rna_ThemeNodeEditor_converter_node,
	-1, "color_node", 8195, "Color Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxb), 2, NULL},
	NULL, NULL, ThemeNodeEditor_color_node_get, ThemeNodeEditor_color_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_color_node_default
};

static float rna_ThemeNodeEditor_group_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_group_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_group_socket_node, (PropertyRNA *)&rna_ThemeNodeEditor_color_node,
	-1, "group_node", 8195, "Group Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxc), 2, NULL},
	NULL, NULL, ThemeNodeEditor_group_node_get, ThemeNodeEditor_group_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_group_node_default
};

static float rna_ThemeNodeEditor_group_socket_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_group_socket_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_frame_node, (PropertyRNA *)&rna_ThemeNodeEditor_group_node,
	-1, "group_socket_node", 8195, "Group Socket Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_output), 2, NULL},
	NULL, NULL, ThemeNodeEditor_group_socket_node_get, ThemeNodeEditor_group_socket_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_group_socket_node_default
};

static float rna_ThemeNodeEditor_frame_node_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_frame_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_matte_node, (PropertyRNA *)&rna_ThemeNodeEditor_group_socket_node,
	-1, "frame_node", 8195, "Frame Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, movie), 2, NULL},
	NULL, NULL, ThemeNodeEditor_frame_node_get, ThemeNodeEditor_frame_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_frame_node_default
};

static float rna_ThemeNodeEditor_matte_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_matte_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_distor_node, (PropertyRNA *)&rna_ThemeNodeEditor_frame_node,
	-1, "matte_node", 8195, "Matte Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxs), 2, NULL},
	NULL, NULL, ThemeNodeEditor_matte_node_get, ThemeNodeEditor_matte_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_matte_node_default
};

static float rna_ThemeNodeEditor_distor_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_distor_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_noodle_curving, (PropertyRNA *)&rna_ThemeNodeEditor_matte_node,
	-1, "distor_node", 8195, "Distort Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxd), 2, NULL},
	NULL, NULL, ThemeNodeEditor_distor_node_get, ThemeNodeEditor_distor_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_distor_node_default
};

IntPropertyRNA rna_ThemeNodeEditor_noodle_curving = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_input_node, (PropertyRNA *)&rna_ThemeNodeEditor_distor_node,
	-1, "noodle_curving", 8195, "Noodle curving",
	"Curving of the noodle",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, noodle_curving), 2, NULL},
	ThemeNodeEditor_noodle_curving_get, ThemeNodeEditor_noodle_curving_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 0, 10, 1, 5, NULL
};

static float rna_ThemeNodeEditor_input_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_input_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_output_node, (PropertyRNA *)&rna_ThemeNodeEditor_noodle_curving,
	-1, "input_node", 8195, "Input Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, syntaxn), 2, NULL},
	NULL, NULL, ThemeNodeEditor_input_node_get, ThemeNodeEditor_input_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_input_node_default
};

static float rna_ThemeNodeEditor_output_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_output_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_filter_node, (PropertyRNA *)&rna_ThemeNodeEditor_input_node,
	-1, "output_node", 8195, "Output Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_output), 2, NULL},
	NULL, NULL, ThemeNodeEditor_output_node_get, ThemeNodeEditor_output_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_output_node_default
};

static float rna_ThemeNodeEditor_filter_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_filter_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_vector_node, (PropertyRNA *)&rna_ThemeNodeEditor_output_node,
	-1, "filter_node", 8195, "Filter Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_filter), 2, NULL},
	NULL, NULL, ThemeNodeEditor_filter_node_get, ThemeNodeEditor_filter_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_filter_node_default
};

static float rna_ThemeNodeEditor_vector_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_vector_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_texture_node, (PropertyRNA *)&rna_ThemeNodeEditor_filter_node,
	-1, "vector_node", 8195, "Vector Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_vector), 2, NULL},
	NULL, NULL, ThemeNodeEditor_vector_node_get, ThemeNodeEditor_vector_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_vector_node_default
};

static float rna_ThemeNodeEditor_texture_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_texture_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_shader_node, (PropertyRNA *)&rna_ThemeNodeEditor_vector_node,
	-1, "texture_node", 8195, "Texture Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_texture), 2, NULL},
	NULL, NULL, ThemeNodeEditor_texture_node_get, ThemeNodeEditor_texture_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_texture_node_default
};

static float rna_ThemeNodeEditor_shader_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_shader_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_script_node, (PropertyRNA *)&rna_ThemeNodeEditor_texture_node,
	-1, "shader_node", 8195, "Shader Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_shader), 2, NULL},
	NULL, NULL, ThemeNodeEditor_shader_node_get, ThemeNodeEditor_shader_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_shader_node_default
};

static float rna_ThemeNodeEditor_script_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_script_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_pattern_node, (PropertyRNA *)&rna_ThemeNodeEditor_shader_node,
	-1, "script_node", 8195, "Script Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_script), 2, NULL},
	NULL, NULL, ThemeNodeEditor_script_node_get, ThemeNodeEditor_script_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_script_node_default
};

static float rna_ThemeNodeEditor_pattern_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_pattern_node = {
	{(PropertyRNA *)&rna_ThemeNodeEditor_layout_node, (PropertyRNA *)&rna_ThemeNodeEditor_script_node,
	-1, "pattern_node", 8195, "Pattern Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_pattern), 2, NULL},
	NULL, NULL, ThemeNodeEditor_pattern_node_get, ThemeNodeEditor_pattern_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_pattern_node_default
};

static float rna_ThemeNodeEditor_layout_node_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeNodeEditor_layout_node = {
	{NULL, (PropertyRNA *)&rna_ThemeNodeEditor_pattern_node,
	-1, "layout_node", 8195, "Layout Node",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, nodeclass_layout), 2, NULL},
	NULL, NULL, ThemeNodeEditor_layout_node_get, ThemeNodeEditor_layout_node_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeNodeEditor_layout_node_default
};

StructRNA RNA_ThemeNodeEditor = {
	{(ContainerRNA *)&RNA_ThemeOutliner, (ContainerRNA *)&RNA_ThemeTimeline,
	NULL,
	{(PropertyRNA *)&rna_ThemeNodeEditor_rna_properties, (PropertyRNA *)&rna_ThemeNodeEditor_layout_node}},
	"ThemeNodeEditor", NULL, NULL, 0, "Theme Node Editor",
	"Theme settings for the Node Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeNodeEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Outliner */
CollectionPropertyRNA rna_ThemeOutliner_rna_properties = {
	{(PropertyRNA *)&rna_ThemeOutliner_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeOutliner_rna_properties_begin, ThemeOutliner_rna_properties_next, ThemeOutliner_rna_properties_end, ThemeOutliner_rna_properties_get, NULL, NULL, ThemeOutliner_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeOutliner_rna_type = {
	{(PropertyRNA *)&rna_ThemeOutliner_space, (PropertyRNA *)&rna_ThemeOutliner_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeOutliner_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeOutliner_space = {
	{(PropertyRNA *)&rna_ThemeOutliner_match, (PropertyRNA *)&rna_ThemeOutliner_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeOutliner_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeOutliner_match_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeOutliner_match = {
	{(PropertyRNA *)&rna_ThemeOutliner_selected_highlight, (PropertyRNA *)&rna_ThemeOutliner_space,
	-1, "match", 8195, "Filter Match",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, match), 2, NULL},
	NULL, NULL, ThemeOutliner_match_get, ThemeOutliner_match_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeOutliner_match_default
};

static float rna_ThemeOutliner_selected_highlight_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeOutliner_selected_highlight = {
	{NULL, (PropertyRNA *)&rna_ThemeOutliner_match,
	-1, "selected_highlight", 8195, "Selected Highlight",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, selected_highlight), 2, NULL},
	NULL, NULL, ThemeOutliner_selected_highlight_get, ThemeOutliner_selected_highlight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeOutliner_selected_highlight_default
};

StructRNA RNA_ThemeOutliner = {
	{(ContainerRNA *)&RNA_ThemeInfo, (ContainerRNA *)&RNA_ThemeNodeEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeOutliner_rna_properties, (PropertyRNA *)&rna_ThemeOutliner_selected_highlight}},
	"ThemeOutliner", NULL, NULL, 0, "Theme Outliner",
	"Theme settings for the Outliner",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeOutliner_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Info */
CollectionPropertyRNA rna_ThemeInfo_rna_properties = {
	{(PropertyRNA *)&rna_ThemeInfo_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeInfo_rna_properties_begin, ThemeInfo_rna_properties_next, ThemeInfo_rna_properties_end, ThemeInfo_rna_properties_get, NULL, NULL, ThemeInfo_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeInfo_rna_type = {
	{(PropertyRNA *)&rna_ThemeInfo_space, (PropertyRNA *)&rna_ThemeInfo_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeInfo_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeInfo_space = {
	{(PropertyRNA *)&rna_ThemeInfo_info_selected, (PropertyRNA *)&rna_ThemeInfo_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeInfo_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeInfo_info_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_selected = {
	{(PropertyRNA *)&rna_ThemeInfo_info_selected_text, (PropertyRNA *)&rna_ThemeInfo_space,
	-1, "info_selected", 8195, "Selected Line Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_selected), 2, NULL},
	NULL, NULL, ThemeInfo_info_selected_get, ThemeInfo_info_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_selected_default
};

static float rna_ThemeInfo_info_selected_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_selected_text = {
	{(PropertyRNA *)&rna_ThemeInfo_info_error, (PropertyRNA *)&rna_ThemeInfo_info_selected,
	-1, "info_selected_text", 8195, "Selected Line Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_selected_text), 2, NULL},
	NULL, NULL, ThemeInfo_info_selected_text_get, ThemeInfo_info_selected_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_selected_text_default
};

static float rna_ThemeInfo_info_error_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_error = {
	{(PropertyRNA *)&rna_ThemeInfo_info_error_text, (PropertyRNA *)&rna_ThemeInfo_info_selected_text,
	-1, "info_error", 8195, "Error Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_error), 2, NULL},
	NULL, NULL, ThemeInfo_info_error_get, ThemeInfo_info_error_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_error_default
};

static float rna_ThemeInfo_info_error_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_error_text = {
	{(PropertyRNA *)&rna_ThemeInfo_info_warning, (PropertyRNA *)&rna_ThemeInfo_info_error,
	-1, "info_error_text", 8195, "Error Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_error_text), 2, NULL},
	NULL, NULL, ThemeInfo_info_error_text_get, ThemeInfo_info_error_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_error_text_default
};

static float rna_ThemeInfo_info_warning_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_warning = {
	{(PropertyRNA *)&rna_ThemeInfo_info_warning_text, (PropertyRNA *)&rna_ThemeInfo_info_error_text,
	-1, "info_warning", 8195, "Warning Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_warning), 2, NULL},
	NULL, NULL, ThemeInfo_info_warning_get, ThemeInfo_info_warning_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_warning_default
};

static float rna_ThemeInfo_info_warning_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_warning_text = {
	{(PropertyRNA *)&rna_ThemeInfo_info_info, (PropertyRNA *)&rna_ThemeInfo_info_warning,
	-1, "info_warning_text", 8195, "Warning Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_warning_text), 2, NULL},
	NULL, NULL, ThemeInfo_info_warning_text_get, ThemeInfo_info_warning_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_warning_text_default
};

static float rna_ThemeInfo_info_info_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_info = {
	{(PropertyRNA *)&rna_ThemeInfo_info_info_text, (PropertyRNA *)&rna_ThemeInfo_info_warning_text,
	-1, "info_info", 8195, "Info Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_info), 2, NULL},
	NULL, NULL, ThemeInfo_info_info_get, ThemeInfo_info_info_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_info_default
};

static float rna_ThemeInfo_info_info_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_info_text = {
	{(PropertyRNA *)&rna_ThemeInfo_info_debug, (PropertyRNA *)&rna_ThemeInfo_info_info,
	-1, "info_info_text", 8195, "Info Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_info_text), 2, NULL},
	NULL, NULL, ThemeInfo_info_info_text_get, ThemeInfo_info_info_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_info_text_default
};

static float rna_ThemeInfo_info_debug_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_debug = {
	{(PropertyRNA *)&rna_ThemeInfo_info_debug_text, (PropertyRNA *)&rna_ThemeInfo_info_info_text,
	-1, "info_debug", 8195, "Debug Background",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_debug), 2, NULL},
	NULL, NULL, ThemeInfo_info_debug_get, ThemeInfo_info_debug_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_debug_default
};

static float rna_ThemeInfo_info_debug_text_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeInfo_info_debug_text = {
	{NULL, (PropertyRNA *)&rna_ThemeInfo_info_debug,
	-1, "info_debug_text", 8195, "Debug Text",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, info_debug_text), 2, NULL},
	NULL, NULL, ThemeInfo_info_debug_text_get, ThemeInfo_info_debug_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeInfo_info_debug_text_default
};

StructRNA RNA_ThemeInfo = {
	{(ContainerRNA *)&RNA_ThemeUserPreferences, (ContainerRNA *)&RNA_ThemeOutliner,
	NULL,
	{(PropertyRNA *)&rna_ThemeInfo_rna_properties, (PropertyRNA *)&rna_ThemeInfo_info_debug_text}},
	"ThemeInfo", NULL, NULL, 0, "Theme Info",
	"Theme settings for Info",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeInfo_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme User Preferences */
CollectionPropertyRNA rna_ThemeUserPreferences_rna_properties = {
	{(PropertyRNA *)&rna_ThemeUserPreferences_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserPreferences_rna_properties_begin, ThemeUserPreferences_rna_properties_next, ThemeUserPreferences_rna_properties_end, ThemeUserPreferences_rna_properties_get, NULL, NULL, ThemeUserPreferences_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeUserPreferences_rna_type = {
	{(PropertyRNA *)&rna_ThemeUserPreferences_space, (PropertyRNA *)&rna_ThemeUserPreferences_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserPreferences_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeUserPreferences_space = {
	{NULL, (PropertyRNA *)&rna_ThemeUserPreferences_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeUserPreferences_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

StructRNA RNA_ThemeUserPreferences = {
	{(ContainerRNA *)&RNA_ThemeConsole, (ContainerRNA *)&RNA_ThemeInfo,
	NULL,
	{(PropertyRNA *)&rna_ThemeUserPreferences_rna_properties, (PropertyRNA *)&rna_ThemeUserPreferences_space}},
	"ThemeUserPreferences", NULL, NULL, 0, "Theme User Preferences",
	"Theme settings for the User Preferences",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeUserPreferences_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Console */
CollectionPropertyRNA rna_ThemeConsole_rna_properties = {
	{(PropertyRNA *)&rna_ThemeConsole_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeConsole_rna_properties_begin, ThemeConsole_rna_properties_next, ThemeConsole_rna_properties_end, ThemeConsole_rna_properties_get, NULL, NULL, ThemeConsole_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeConsole_rna_type = {
	{(PropertyRNA *)&rna_ThemeConsole_space, (PropertyRNA *)&rna_ThemeConsole_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeConsole_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeConsole_space = {
	{(PropertyRNA *)&rna_ThemeConsole_line_output, (PropertyRNA *)&rna_ThemeConsole_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeConsole_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

static float rna_ThemeConsole_line_output_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeConsole_line_output = {
	{(PropertyRNA *)&rna_ThemeConsole_line_input, (PropertyRNA *)&rna_ThemeConsole_space,
	-1, "line_output", 8195, "Line Output",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_output), 2, NULL},
	NULL, NULL, ThemeConsole_line_output_get, ThemeConsole_line_output_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeConsole_line_output_default
};

static float rna_ThemeConsole_line_input_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeConsole_line_input = {
	{(PropertyRNA *)&rna_ThemeConsole_line_info, (PropertyRNA *)&rna_ThemeConsole_line_output,
	-1, "line_input", 8195, "Line Input",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_input), 2, NULL},
	NULL, NULL, ThemeConsole_line_input_get, ThemeConsole_line_input_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeConsole_line_input_default
};

static float rna_ThemeConsole_line_info_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeConsole_line_info = {
	{(PropertyRNA *)&rna_ThemeConsole_line_error, (PropertyRNA *)&rna_ThemeConsole_line_input,
	-1, "line_info", 8195, "Line Info",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_info), 2, NULL},
	NULL, NULL, ThemeConsole_line_info_get, ThemeConsole_line_info_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeConsole_line_info_default
};

static float rna_ThemeConsole_line_error_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeConsole_line_error = {
	{(PropertyRNA *)&rna_ThemeConsole_cursor, (PropertyRNA *)&rna_ThemeConsole_line_info,
	-1, "line_error", 8195, "Line Error",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_error), 2, NULL},
	NULL, NULL, ThemeConsole_line_error_get, ThemeConsole_line_error_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeConsole_line_error_default
};

static float rna_ThemeConsole_cursor_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeConsole_cursor = {
	{(PropertyRNA *)&rna_ThemeConsole_select, (PropertyRNA *)&rna_ThemeConsole_line_error,
	-1, "cursor", 8195, "Cursor",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_cursor), 2, NULL},
	NULL, NULL, ThemeConsole_cursor_get, ThemeConsole_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeConsole_cursor_default
};

static float rna_ThemeConsole_select_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeConsole_select = {
	{NULL, (PropertyRNA *)&rna_ThemeConsole_cursor,
	-1, "select", 8195, "Selection",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, console_select), 2, NULL},
	NULL, NULL, ThemeConsole_select_get, ThemeConsole_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeConsole_select_default
};

StructRNA RNA_ThemeConsole = {
	{(ContainerRNA *)&RNA_ThemeLogicEditor, (ContainerRNA *)&RNA_ThemeUserPreferences,
	NULL,
	{(PropertyRNA *)&rna_ThemeConsole_rna_properties, (PropertyRNA *)&rna_ThemeConsole_select}},
	"ThemeConsole", NULL, NULL, 0, "Theme Console",
	"Theme settings for the Console",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeConsole_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Logic Editor */
CollectionPropertyRNA rna_ThemeLogicEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeLogicEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeLogicEditor_rna_properties_begin, ThemeLogicEditor_rna_properties_next, ThemeLogicEditor_rna_properties_end, ThemeLogicEditor_rna_properties_get, NULL, NULL, ThemeLogicEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeLogicEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeLogicEditor_space, (PropertyRNA *)&rna_ThemeLogicEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeLogicEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeLogicEditor_space = {
	{NULL, (PropertyRNA *)&rna_ThemeLogicEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeLogicEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

StructRNA RNA_ThemeLogicEditor = {
	{(ContainerRNA *)&RNA_ThemeClipEditor, (ContainerRNA *)&RNA_ThemeConsole,
	NULL,
	{(PropertyRNA *)&rna_ThemeLogicEditor_rna_properties, (PropertyRNA *)&rna_ThemeLogicEditor_space}},
	"ThemeLogicEditor", NULL, NULL, 0, "Theme Logic Editor",
	"Theme settings for the Logic Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeLogicEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Clip Editor */
CollectionPropertyRNA rna_ThemeClipEditor_rna_properties = {
	{(PropertyRNA *)&rna_ThemeClipEditor_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeClipEditor_rna_properties_begin, ThemeClipEditor_rna_properties_next, ThemeClipEditor_rna_properties_end, ThemeClipEditor_rna_properties_get, NULL, NULL, ThemeClipEditor_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeClipEditor_rna_type = {
	{(PropertyRNA *)&rna_ThemeClipEditor_space, (PropertyRNA *)&rna_ThemeClipEditor_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeClipEditor_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_ThemeClipEditor_space = {
	{(PropertyRNA *)&rna_ThemeClipEditor_space_list, (PropertyRNA *)&rna_ThemeClipEditor_rna_type,
	-1, "space", 8650752, "Theme Space",
	"Settings for space",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeClipEditor_space_get, NULL, NULL, NULL,&RNA_ThemeSpaceGeneric
};

PointerPropertyRNA rna_ThemeClipEditor_space_list = {
	{(PropertyRNA *)&rna_ThemeClipEditor_marker_outline, (PropertyRNA *)&rna_ThemeClipEditor_space,
	-1, "space_list", 8650752, "Theme Space List",
	"Settings for space list",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeClipEditor_space_list_get, NULL, NULL, NULL,&RNA_ThemeSpaceListGeneric
};

static float rna_ThemeClipEditor_marker_outline_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_marker_outline = {
	{(PropertyRNA *)&rna_ThemeClipEditor_marker, (PropertyRNA *)&rna_ThemeClipEditor_space_list,
	-1, "marker_outline", 8195, "Marker Outline Color",
	"Color of marker\'s outline",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, marker_outline), 2, NULL},
	NULL, NULL, ThemeClipEditor_marker_outline_get, ThemeClipEditor_marker_outline_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_marker_outline_default
};

static float rna_ThemeClipEditor_marker_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_marker = {
	{(PropertyRNA *)&rna_ThemeClipEditor_active_marker, (PropertyRNA *)&rna_ThemeClipEditor_marker_outline,
	-1, "marker", 8195, "Marker Color",
	"Color of marker",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, marker), 2, NULL},
	NULL, NULL, ThemeClipEditor_marker_get, ThemeClipEditor_marker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_marker_default
};

static float rna_ThemeClipEditor_active_marker_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_active_marker = {
	{(PropertyRNA *)&rna_ThemeClipEditor_selected_marker, (PropertyRNA *)&rna_ThemeClipEditor_marker,
	-1, "active_marker", 8195, "Active Marker",
	"Color of active marker",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, act_marker), 2, NULL},
	NULL, NULL, ThemeClipEditor_active_marker_get, ThemeClipEditor_active_marker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_active_marker_default
};

static float rna_ThemeClipEditor_selected_marker_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_selected_marker = {
	{(PropertyRNA *)&rna_ThemeClipEditor_disabled_marker, (PropertyRNA *)&rna_ThemeClipEditor_active_marker,
	-1, "selected_marker", 8195, "Selected Marker",
	"Color of selected marker",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, sel_marker), 2, NULL},
	NULL, NULL, ThemeClipEditor_selected_marker_get, ThemeClipEditor_selected_marker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_selected_marker_default
};

static float rna_ThemeClipEditor_disabled_marker_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_disabled_marker = {
	{(PropertyRNA *)&rna_ThemeClipEditor_locked_marker, (PropertyRNA *)&rna_ThemeClipEditor_selected_marker,
	-1, "disabled_marker", 8195, "Disabled Marker",
	"Color of disabled marker",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, dis_marker), 2, NULL},
	NULL, NULL, ThemeClipEditor_disabled_marker_get, ThemeClipEditor_disabled_marker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_disabled_marker_default
};

static float rna_ThemeClipEditor_locked_marker_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_locked_marker = {
	{(PropertyRNA *)&rna_ThemeClipEditor_path_before, (PropertyRNA *)&rna_ThemeClipEditor_disabled_marker,
	-1, "locked_marker", 8195, "Locked Marker",
	"Color of locked marker",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, lock_marker), 2, NULL},
	NULL, NULL, ThemeClipEditor_locked_marker_get, ThemeClipEditor_locked_marker_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_locked_marker_default
};

static float rna_ThemeClipEditor_path_before_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_path_before = {
	{(PropertyRNA *)&rna_ThemeClipEditor_path_after, (PropertyRNA *)&rna_ThemeClipEditor_locked_marker,
	-1, "path_before", 8195, "Path Before",
	"Color of path before current frame",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, path_before), 2, NULL},
	NULL, NULL, ThemeClipEditor_path_before_get, ThemeClipEditor_path_before_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_path_before_default
};

static float rna_ThemeClipEditor_path_after_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_path_after = {
	{(PropertyRNA *)&rna_ThemeClipEditor_frame_current, (PropertyRNA *)&rna_ThemeClipEditor_path_before,
	-1, "path_after", 8195, "Path After",
	"Color of path after current frame",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, path_after), 2, NULL},
	NULL, NULL, ThemeClipEditor_path_after_get, ThemeClipEditor_path_after_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_path_after_default
};

static float rna_ThemeClipEditor_frame_current_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_frame_current = {
	{(PropertyRNA *)&rna_ThemeClipEditor_strips, (PropertyRNA *)&rna_ThemeClipEditor_path_after,
	-1, "frame_current", 8195, "Current Frame",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, cframe), 2, NULL},
	NULL, NULL, ThemeClipEditor_frame_current_get, ThemeClipEditor_frame_current_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_frame_current_default
};

static float rna_ThemeClipEditor_strips_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_strips = {
	{(PropertyRNA *)&rna_ThemeClipEditor_strips_selected, (PropertyRNA *)&rna_ThemeClipEditor_frame_current,
	-1, "strips", 8195, "Strips",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, strip), 2, NULL},
	NULL, NULL, ThemeClipEditor_strips_get, ThemeClipEditor_strips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_strips_default
};

static float rna_ThemeClipEditor_strips_selected_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_strips_selected = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_free, (PropertyRNA *)&rna_ThemeClipEditor_strips,
	-1, "strips_selected", 8195, "Strips Selected",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, strip_select), 2, NULL},
	NULL, NULL, ThemeClipEditor_strips_selected_get, ThemeClipEditor_strips_selected_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_strips_selected_default
};

static float rna_ThemeClipEditor_handle_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_free = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_auto, (PropertyRNA *)&rna_ThemeClipEditor_strips_selected,
	-1, "handle_free", 8195, "Free handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_free), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_free_get, ThemeClipEditor_handle_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_free_default
};

static float rna_ThemeClipEditor_handle_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_auto = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_align, (PropertyRNA *)&rna_ThemeClipEditor_handle_free,
	-1, "handle_auto", 8195, "Auto handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_auto_get, ThemeClipEditor_handle_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_auto_default
};

static float rna_ThemeClipEditor_handle_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_align = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_sel_free, (PropertyRNA *)&rna_ThemeClipEditor_handle_auto,
	-1, "handle_align", 8195, "Align handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_align), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_align_get, ThemeClipEditor_handle_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_align_default
};

static float rna_ThemeClipEditor_handle_sel_free_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_sel_free = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_sel_auto, (PropertyRNA *)&rna_ThemeClipEditor_handle_align,
	-1, "handle_sel_free", 8195, "Free handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_free), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_sel_free_get, ThemeClipEditor_handle_sel_free_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_sel_free_default
};

static float rna_ThemeClipEditor_handle_sel_auto_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_sel_auto = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_sel_align, (PropertyRNA *)&rna_ThemeClipEditor_handle_sel_free,
	-1, "handle_sel_auto", 8195, "Auto handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_sel_auto_get, ThemeClipEditor_handle_sel_auto_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_sel_auto_default
};

static float rna_ThemeClipEditor_handle_sel_align_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_sel_align = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_auto_clamped, (PropertyRNA *)&rna_ThemeClipEditor_handle_sel_auto,
	-1, "handle_sel_align", 8195, "Align handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_align), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_sel_align_get, ThemeClipEditor_handle_sel_align_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_sel_align_default
};

static float rna_ThemeClipEditor_handle_auto_clamped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_auto_clamped = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_sel_auto_clamped, (PropertyRNA *)&rna_ThemeClipEditor_handle_sel_align,
	-1, "handle_auto_clamped", 8195, "Auto-Clamped handle color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_auto_clamped), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_auto_clamped_get, ThemeClipEditor_handle_auto_clamped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_auto_clamped_default
};

static float rna_ThemeClipEditor_handle_sel_auto_clamped_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_sel_auto_clamped = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_vertex, (PropertyRNA *)&rna_ThemeClipEditor_handle_auto_clamped,
	-1, "handle_sel_auto_clamped", 8195, "Auto-Clamped handle selected color",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_sel_auto_clamped), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_sel_auto_clamped_get, ThemeClipEditor_handle_sel_auto_clamped_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_sel_auto_clamped_default
};

static float rna_ThemeClipEditor_handle_vertex_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_vertex = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_vertex_select, (PropertyRNA *)&rna_ThemeClipEditor_handle_sel_auto_clamped,
	-1, "handle_vertex", 8195, "Handle Vertex",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_vertex_get, ThemeClipEditor_handle_vertex_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_vertex_default
};

static float rna_ThemeClipEditor_handle_vertex_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeClipEditor_handle_vertex_select = {
	{(PropertyRNA *)&rna_ThemeClipEditor_handle_vertex_size, (PropertyRNA *)&rna_ThemeClipEditor_handle_vertex,
	-1, "handle_vertex_select", 8195, "Handle Vertex Select",
	"",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex_select), 2, NULL},
	NULL, NULL, ThemeClipEditor_handle_vertex_select_get, ThemeClipEditor_handle_vertex_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeClipEditor_handle_vertex_select_default
};

IntPropertyRNA rna_ThemeClipEditor_handle_vertex_size = {
	{NULL, (PropertyRNA *)&rna_ThemeClipEditor_handle_vertex_select,
	-1, "handle_vertex_size", 8195, "Handle Vertex Size",
	"",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeSpace, handle_vertex_size), 2, NULL},
	ThemeClipEditor_handle_vertex_size_get, ThemeClipEditor_handle_vertex_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 255, 0, 255, 1, 0, NULL
};

StructRNA RNA_ThemeClipEditor = {
	{(ContainerRNA *)&RNA_ThemeBoneColorSet, (ContainerRNA *)&RNA_ThemeLogicEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeClipEditor_rna_properties, (PropertyRNA *)&rna_ThemeClipEditor_handle_vertex_size}},
	"ThemeClipEditor", NULL, NULL, 0, "Theme Clip Editor",
	"Theme settings for the Movie Clip Editor",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeClipEditor_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme Bone Color Set */
CollectionPropertyRNA rna_ThemeBoneColorSet_rna_properties = {
	{(PropertyRNA *)&rna_ThemeBoneColorSet_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeBoneColorSet_rna_properties_begin, ThemeBoneColorSet_rna_properties_next, ThemeBoneColorSet_rna_properties_end, ThemeBoneColorSet_rna_properties_get, NULL, NULL, ThemeBoneColorSet_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_ThemeBoneColorSet_rna_type = {
	{(PropertyRNA *)&rna_ThemeBoneColorSet_normal, (PropertyRNA *)&rna_ThemeBoneColorSet_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	ThemeBoneColorSet_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static float rna_ThemeBoneColorSet_normal_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeBoneColorSet_normal = {
	{(PropertyRNA *)&rna_ThemeBoneColorSet_select, (PropertyRNA *)&rna_ThemeBoneColorSet_rna_type,
	-1, "normal", 8195, "Normal",
	"Color used for the surface of bones",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeWireColor, solid), 2, NULL},
	NULL, NULL, ThemeBoneColorSet_normal_get, ThemeBoneColorSet_normal_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeBoneColorSet_normal_default
};

static float rna_ThemeBoneColorSet_select_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeBoneColorSet_select = {
	{(PropertyRNA *)&rna_ThemeBoneColorSet_active, (PropertyRNA *)&rna_ThemeBoneColorSet_normal,
	-1, "select", 8195, "Select",
	"Color used for selected bones",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeWireColor, select), 2, NULL},
	NULL, NULL, ThemeBoneColorSet_select_get, ThemeBoneColorSet_select_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeBoneColorSet_select_default
};

static float rna_ThemeBoneColorSet_active_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_ThemeBoneColorSet_active = {
	{(PropertyRNA *)&rna_ThemeBoneColorSet_show_colored_constraints, (PropertyRNA *)&rna_ThemeBoneColorSet_select,
	-1, "active", 8195, "Active",
	"Color used for active bones",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(ThemeWireColor, active), 2, NULL},
	NULL, NULL, ThemeBoneColorSet_active_get, ThemeBoneColorSet_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, rna_ThemeBoneColorSet_active_default
};

BoolPropertyRNA rna_ThemeBoneColorSet_show_colored_constraints = {
	{NULL, (PropertyRNA *)&rna_ThemeBoneColorSet_active,
	-1, "show_colored_constraints", 3, "Colored Constraints",
	"Allow the use of colors indicating constraints/keyed status",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	ThemeBoneColorSet_show_colored_constraints_get, ThemeBoneColorSet_show_colored_constraints_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_ThemeBoneColorSet = {
	{(ContainerRNA *)&RNA_Theme, (ContainerRNA *)&RNA_ThemeClipEditor,
	NULL,
	{(PropertyRNA *)&rna_ThemeBoneColorSet_rna_properties, (PropertyRNA *)&rna_ThemeBoneColorSet_show_colored_constraints}},
	"ThemeBoneColorSet", NULL, NULL, 0, "Theme Bone Color Set",
	"Theme settings for bone color sets",
	"*", 17,
	NULL, (PropertyRNA *)&rna_ThemeBoneColorSet_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Theme */
CollectionPropertyRNA rna_Theme_rna_properties = {
	{(PropertyRNA *)&rna_Theme_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_rna_properties_begin, Theme_rna_properties_next, Theme_rna_properties_end, Theme_rna_properties_get, NULL, NULL, Theme_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Theme_rna_type = {
	{(PropertyRNA *)&rna_Theme_name, (PropertyRNA *)&rna_Theme_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Theme_name = {
	{(PropertyRNA *)&rna_Theme_theme_area, (PropertyRNA *)&rna_Theme_rna_type,
	-1, "name", 268697601, "Name",
	"Name of the theme",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_name_get, Theme_name_length, Theme_name_set, NULL, NULL, NULL, 32, ""
};

static EnumPropertyItem rna_Theme_theme_area_items[21] = {
	{0, "USER_INTERFACE", 23, "User Interface", ""},
	{19, "STYLE", 687, "Text Style", ""},
	{18, "BONE_COLOR_SETS", 54, "Bone Color Sets", ""},
	{1, "VIEW_3D", 104, "3D View", ""},
	{2, "TIMELINE", 118, "Timeline", ""},
	{3, "GRAPH_EDITOR", 105, "Graph Editor", ""},
	{4, "DOPESHEET_EDITOR", 115, "Dope Sheet", ""},
	{5, "NLA_EDITOR", 116, "NLA Editor", ""},
	{6, "IMAGE_EDITOR", 109, "UV/Image Editor", ""},
	{7, "SEQUENCE_EDITOR", 111, "Video Sequence Editor", ""},
	{8, "TEXT_EDITOR", 112, "Text Editor", ""},
	{9, "NODE_EDITOR", 119, "Node Editor", ""},
	{10, "LOGIC_EDITOR", 120, "Logic Editor", ""},
	{11, "PROPERTIES", 107, "Properties", ""},
	{12, "OUTLINER", 106, "Outliner", ""},
	{14, "USER_PREFERENCES", 122, "User Preferences", ""},
	{15, "INFO", 110, "Info", ""},
	{16, "FILE_BROWSER", 108, "File Browser", ""},
	{17, "CONSOLE", 121, "Python Console", ""},
	{20, "CLIP_EDITOR", 123, "Movie Clip Editor", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_Theme_theme_area = {
	{(PropertyRNA *)&rna_Theme_user_interface, (PropertyRNA *)&rna_Theme_name,
	-1, "theme_area", 268435459, "Active Theme Area",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_theme_area_get, Theme_theme_area_set, NULL, NULL, NULL, NULL, rna_Theme_theme_area_items, 20, 0
};

PointerPropertyRNA rna_Theme_user_interface = {
	{(PropertyRNA *)&rna_Theme_view_3d, (PropertyRNA *)&rna_Theme_theme_area,
	-1, "user_interface", 8650752, "User Interface",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_user_interface_get, NULL, NULL, NULL,&RNA_ThemeUserInterface
};

PointerPropertyRNA rna_Theme_view_3d = {
	{(PropertyRNA *)&rna_Theme_graph_editor, (PropertyRNA *)&rna_Theme_user_interface,
	-1, "view_3d", 8650752, "3D View",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_view_3d_get, NULL, NULL, NULL,&RNA_ThemeView3D
};

PointerPropertyRNA rna_Theme_graph_editor = {
	{(PropertyRNA *)&rna_Theme_file_browser, (PropertyRNA *)&rna_Theme_view_3d,
	-1, "graph_editor", 8650752, "Graph Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_graph_editor_get, NULL, NULL, NULL,&RNA_ThemeGraphEditor
};

PointerPropertyRNA rna_Theme_file_browser = {
	{(PropertyRNA *)&rna_Theme_nla_editor, (PropertyRNA *)&rna_Theme_graph_editor,
	-1, "file_browser", 8650752, "File Browser",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_file_browser_get, NULL, NULL, NULL,&RNA_ThemeFileBrowser
};

PointerPropertyRNA rna_Theme_nla_editor = {
	{(PropertyRNA *)&rna_Theme_dopesheet_editor, (PropertyRNA *)&rna_Theme_file_browser,
	-1, "nla_editor", 8650752, "NLA Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_nla_editor_get, NULL, NULL, NULL,&RNA_ThemeNLAEditor
};

PointerPropertyRNA rna_Theme_dopesheet_editor = {
	{(PropertyRNA *)&rna_Theme_image_editor, (PropertyRNA *)&rna_Theme_nla_editor,
	-1, "dopesheet_editor", 8650752, "Dope Sheet",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_dopesheet_editor_get, NULL, NULL, NULL,&RNA_ThemeDopeSheet
};

PointerPropertyRNA rna_Theme_image_editor = {
	{(PropertyRNA *)&rna_Theme_sequence_editor, (PropertyRNA *)&rna_Theme_dopesheet_editor,
	-1, "image_editor", 8650752, "Image Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_image_editor_get, NULL, NULL, NULL,&RNA_ThemeImageEditor
};

PointerPropertyRNA rna_Theme_sequence_editor = {
	{(PropertyRNA *)&rna_Theme_properties, (PropertyRNA *)&rna_Theme_image_editor,
	-1, "sequence_editor", 8650752, "Sequence Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_sequence_editor_get, NULL, NULL, NULL,&RNA_ThemeSequenceEditor
};

PointerPropertyRNA rna_Theme_properties = {
	{(PropertyRNA *)&rna_Theme_text_editor, (PropertyRNA *)&rna_Theme_sequence_editor,
	-1, "properties", 8650752, "Properties",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_properties_get, NULL, NULL, NULL,&RNA_ThemeProperties
};

PointerPropertyRNA rna_Theme_text_editor = {
	{(PropertyRNA *)&rna_Theme_timeline, (PropertyRNA *)&rna_Theme_properties,
	-1, "text_editor", 8650752, "Text Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_text_editor_get, NULL, NULL, NULL,&RNA_ThemeTextEditor
};

PointerPropertyRNA rna_Theme_timeline = {
	{(PropertyRNA *)&rna_Theme_node_editor, (PropertyRNA *)&rna_Theme_text_editor,
	-1, "timeline", 8650752, "Timeline",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_timeline_get, NULL, NULL, NULL,&RNA_ThemeTimeline
};

PointerPropertyRNA rna_Theme_node_editor = {
	{(PropertyRNA *)&rna_Theme_logic_editor, (PropertyRNA *)&rna_Theme_timeline,
	-1, "node_editor", 8650752, "Node Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_node_editor_get, NULL, NULL, NULL,&RNA_ThemeNodeEditor
};

PointerPropertyRNA rna_Theme_logic_editor = {
	{(PropertyRNA *)&rna_Theme_outliner, (PropertyRNA *)&rna_Theme_node_editor,
	-1, "logic_editor", 8650752, "Logic Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_logic_editor_get, NULL, NULL, NULL,&RNA_ThemeLogicEditor
};

PointerPropertyRNA rna_Theme_outliner = {
	{(PropertyRNA *)&rna_Theme_info, (PropertyRNA *)&rna_Theme_logic_editor,
	-1, "outliner", 8650752, "Outliner",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_outliner_get, NULL, NULL, NULL,&RNA_ThemeOutliner
};

PointerPropertyRNA rna_Theme_info = {
	{(PropertyRNA *)&rna_Theme_user_preferences, (PropertyRNA *)&rna_Theme_outliner,
	-1, "info", 8650752, "Info",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_info_get, NULL, NULL, NULL,&RNA_ThemeInfo
};

PointerPropertyRNA rna_Theme_user_preferences = {
	{(PropertyRNA *)&rna_Theme_console, (PropertyRNA *)&rna_Theme_info,
	-1, "user_preferences", 8650752, "User Preferences",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_user_preferences_get, NULL, NULL, NULL,&RNA_ThemeUserPreferences
};

PointerPropertyRNA rna_Theme_console = {
	{(PropertyRNA *)&rna_Theme_bone_color_sets, (PropertyRNA *)&rna_Theme_user_preferences,
	-1, "console", 8650752, "Console",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_console_get, NULL, NULL, NULL,&RNA_ThemeConsole
};

CollectionPropertyRNA rna_Theme_bone_color_sets = {
	{(PropertyRNA *)&rna_Theme_clip_editor, (PropertyRNA *)&rna_Theme_console,
	-1, "bone_color_sets", 278528, "Bone Color Sets",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {20, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_bone_color_sets_begin, Theme_bone_color_sets_next, Theme_bone_color_sets_end, Theme_bone_color_sets_get, Theme_bone_color_sets_length, Theme_bone_color_sets_lookup_int, NULL, NULL, &RNA_ThemeBoneColorSet
};

PointerPropertyRNA rna_Theme_clip_editor = {
	{NULL, (PropertyRNA *)&rna_Theme_bone_color_sets,
	-1, "clip_editor", 8650752, "Clip Editor",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Theme_clip_editor_get, NULL, NULL, NULL,&RNA_ThemeClipEditor
};

StructRNA RNA_Theme = {
	{(ContainerRNA *)&RNA_UserSolidLight, (ContainerRNA *)&RNA_ThemeBoneColorSet,
	NULL,
	{(PropertyRNA *)&rna_Theme_rna_properties, (PropertyRNA *)&rna_Theme_clip_editor}},
	"Theme", NULL, NULL, 0, "Theme",
	"Theme settings defining draw style and colors in the user interface",
	"*", 17,
	(PropertyRNA *)&rna_Theme_name, (PropertyRNA *)&rna_Theme_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Solid Light */
CollectionPropertyRNA rna_UserSolidLight_rna_properties = {
	{(PropertyRNA *)&rna_UserSolidLight_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserSolidLight_rna_properties_begin, UserSolidLight_rna_properties_next, UserSolidLight_rna_properties_end, UserSolidLight_rna_properties_get, NULL, NULL, UserSolidLight_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserSolidLight_rna_type = {
	{(PropertyRNA *)&rna_UserSolidLight_use, (PropertyRNA *)&rna_UserSolidLight_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserSolidLight_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UserSolidLight_use = {
	{(PropertyRNA *)&rna_UserSolidLight_direction, (PropertyRNA *)&rna_UserSolidLight_rna_type,
	-1, "use", 3, "Enabled",
	"Enable this OpenGL light in solid draw mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_viewport_lights_update, 0, NULL, NULL,
	0, -1, NULL},
	UserSolidLight_use_get, UserSolidLight_use_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static float rna_UserSolidLight_direction_default[3] = {
	0.0f,
	1.0f,
	0.0f
};

FloatPropertyRNA rna_UserSolidLight_direction = {
	{(PropertyRNA *)&rna_UserSolidLight_diffuse_color, (PropertyRNA *)&rna_UserSolidLight_use,
	-1, "direction", 8195, "Direction",
	"Direction that the OpenGL light is shining",
	0, "*",
	PROP_FLOAT, PROP_DIRECTION | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_UserDef_viewport_lights_update, 0, NULL, NULL,
	offsetof(SolidLight, vec), 4, NULL},
	NULL, NULL, UserSolidLight_direction_get, UserSolidLight_direction_set, NULL, NULL, NULL, NULL, NULL, NULL, -10000.0f, 10000.0f, -FLT_MAX, FLT_MAX, 10.0f, 3, 0.0f, rna_UserSolidLight_direction_default
};

static float rna_UserSolidLight_diffuse_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UserSolidLight_diffuse_color = {
	{(PropertyRNA *)&rna_UserSolidLight_specular_color, (PropertyRNA *)&rna_UserSolidLight_direction,
	-1, "diffuse_color", 8195, "Diffuse Color",
	"Diffuse color of the OpenGL light",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_UserDef_viewport_lights_update, 0, NULL, NULL,
	offsetof(SolidLight, col), 4, NULL},
	NULL, NULL, UserSolidLight_diffuse_color_get, UserSolidLight_diffuse_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_UserSolidLight_diffuse_color_default
};

static float rna_UserSolidLight_specular_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UserSolidLight_specular_color = {
	{NULL, (PropertyRNA *)&rna_UserSolidLight_diffuse_color,
	-1, "specular_color", 8195, "Specular Color",
	"Color of the light\'s specular highlight",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	rna_UserDef_viewport_lights_update, 0, NULL, NULL,
	offsetof(SolidLight, spec), 4, NULL},
	NULL, NULL, UserSolidLight_specular_color_get, UserSolidLight_specular_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_UserSolidLight_specular_color_default
};

StructRNA RNA_UserSolidLight = {
	{(ContainerRNA *)&RNA_WalkNavigation, (ContainerRNA *)&RNA_Theme,
	NULL,
	{(PropertyRNA *)&rna_UserSolidLight_rna_properties, (PropertyRNA *)&rna_UserSolidLight_specular_color}},
	"UserSolidLight", NULL, NULL, 0, "Solid Light",
	"Light used for OpenGL lighting in solid draw mode",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserSolidLight_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Walk Navigation */
CollectionPropertyRNA rna_WalkNavigation_rna_properties = {
	{(PropertyRNA *)&rna_WalkNavigation_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WalkNavigation_rna_properties_begin, WalkNavigation_rna_properties_next, WalkNavigation_rna_properties_end, WalkNavigation_rna_properties_get, NULL, NULL, WalkNavigation_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_WalkNavigation_rna_type = {
	{(PropertyRNA *)&rna_WalkNavigation_mouse_speed, (PropertyRNA *)&rna_WalkNavigation_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WalkNavigation_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_WalkNavigation_mouse_speed = {
	{(PropertyRNA *)&rna_WalkNavigation_walk_speed, (PropertyRNA *)&rna_WalkNavigation_rna_type,
	-1, "mouse_speed", 8195, "Mouse Sensitivity",
	"Speed factor for when looking around, high values mean faster mouse movement",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(WalkNavigation, mouse_speed), 4, NULL},
	WalkNavigation_mouse_speed_get, WalkNavigation_mouse_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WalkNavigation_walk_speed = {
	{(PropertyRNA *)&rna_WalkNavigation_walk_speed_factor, (PropertyRNA *)&rna_WalkNavigation_mouse_speed,
	-1, "walk_speed", 8195, "Walk Speed",
	"Base speed for walking and flying",
	0, "*",
	PROP_FLOAT, PROP_VELOCITY | PROP_UNIT_VELOCITY, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(WalkNavigation, walk_speed), 4, NULL},
	WalkNavigation_walk_speed_get, WalkNavigation_walk_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 100.0f, 0.0099999998f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WalkNavigation_walk_speed_factor = {
	{(PropertyRNA *)&rna_WalkNavigation_view_height, (PropertyRNA *)&rna_WalkNavigation_walk_speed,
	-1, "walk_speed_factor", 8195, "Speed Factor",
	"Multiplication factor when using the fast or slow modifiers",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(WalkNavigation, walk_speed_factor), 4, NULL},
	WalkNavigation_walk_speed_factor_get, WalkNavigation_walk_speed_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 10.0f, 0.0099999998f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_WalkNavigation_view_height = {
	{(PropertyRNA *)&rna_WalkNavigation_jump_height, (PropertyRNA *)&rna_WalkNavigation_walk_speed_factor,
	-1, "view_height", 8195, "View Height",
	"View distance from the floor when walking",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(WalkNavigation, view_height), 4, NULL},
	WalkNavigation_view_height_get, WalkNavigation_view_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 0.1000000015f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WalkNavigation_jump_height = {
	{(PropertyRNA *)&rna_WalkNavigation_teleport_time, (PropertyRNA *)&rna_WalkNavigation_view_height,
	-1, "jump_height", 8195, "Jump Height",
	"Maximum height of a jump",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_LENGTH, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(WalkNavigation, jump_height), 4, NULL},
	WalkNavigation_jump_height_get, WalkNavigation_jump_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.1000000015f, 100.0f, 0.1000000015f, 100.0f, 0.1000000015f, 2, 0.0f, NULL
};

FloatPropertyRNA rna_WalkNavigation_teleport_time = {
	{(PropertyRNA *)&rna_WalkNavigation_use_gravity, (PropertyRNA *)&rna_WalkNavigation_jump_height,
	-1, "teleport_time", 8195, "Teleport Duration",
	"Interval of time warp when teleporting in navigation mode",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(WalkNavigation, teleport_time), 4, NULL},
	WalkNavigation_teleport_time_get, WalkNavigation_teleport_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_WalkNavigation_use_gravity = {
	{(PropertyRNA *)&rna_WalkNavigation_use_mouse_reverse, (PropertyRNA *)&rna_WalkNavigation_teleport_time,
	-1, "use_gravity", 3, "Gravity",
	"Walk with gravity, or free navigate",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WalkNavigation_use_gravity_get, WalkNavigation_use_gravity_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_WalkNavigation_use_mouse_reverse = {
	{NULL, (PropertyRNA *)&rna_WalkNavigation_use_gravity,
	-1, "use_mouse_reverse", 3, "Reverse Mouse",
	"Reverse the mouse look",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	WalkNavigation_use_mouse_reverse_get, WalkNavigation_use_mouse_reverse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_WalkNavigation = {
	{(ContainerRNA *)&RNA_UserPreferences, (ContainerRNA *)&RNA_UserSolidLight,
	NULL,
	{(PropertyRNA *)&rna_WalkNavigation_rna_properties, (PropertyRNA *)&rna_WalkNavigation_use_mouse_reverse}},
	"WalkNavigation", NULL, NULL, 0, "Walk Navigation",
	"Walk navigation settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_WalkNavigation_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* User Preferences */
CollectionPropertyRNA rna_UserPreferences_rna_properties = {
	{(PropertyRNA *)&rna_UserPreferences_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_rna_properties_begin, UserPreferences_rna_properties_next, UserPreferences_rna_properties_end, UserPreferences_rna_properties_get, NULL, NULL, UserPreferences_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserPreferences_rna_type = {
	{(PropertyRNA *)&rna_UserPreferences_active_section, (PropertyRNA *)&rna_UserPreferences_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_UserPreferences_active_section_items[8] = {
	{0, "INTERFACE", 0, "Interface", ""},
	{1, "EDITING", 0, "Editing", ""},
	{5, "INPUT", 0, "Input", ""},
	{6, "ADDONS", 0, "Addons", ""},
	{4, "THEMES", 0, "Themes", ""},
	{2, "FILES", 0, "File", ""},
	{3, "SYSTEM", 0, "System", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferences_active_section = {
	{(PropertyRNA *)&rna_UserPreferences_themes, (PropertyRNA *)&rna_UserPreferences_rna_type,
	-1, "active_section", 3, "Active Section",
	"Active section of the user preferences shown in the user interface",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_active_section_get, UserPreferences_active_section_set, NULL, NULL, NULL, NULL, rna_UserPreferences_active_section_items, 7, 0
};

CollectionPropertyRNA rna_UserPreferences_themes = {
	{(PropertyRNA *)&rna_UserPreferences_ui_styles, (PropertyRNA *)&rna_UserPreferences_active_section,
	-1, "themes", 0, "Themes",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_themes_begin, UserPreferences_themes_next, UserPreferences_themes_end, UserPreferences_themes_get, NULL, UserPreferences_themes_lookup_int, UserPreferences_themes_lookup_string, NULL, &RNA_Theme
};

CollectionPropertyRNA rna_UserPreferences_ui_styles = {
	{(PropertyRNA *)&rna_UserPreferences_addons, (PropertyRNA *)&rna_UserPreferences_themes,
	-1, "ui_styles", 0, "Styles",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_ui_styles_begin, UserPreferences_ui_styles_next, UserPreferences_ui_styles_end, UserPreferences_ui_styles_get, NULL, UserPreferences_ui_styles_lookup_int, NULL, NULL, &RNA_ThemeStyle
};

CollectionPropertyRNA rna_UserPreferences_addons = {
	{(PropertyRNA *)&rna_UserPreferences_autoexec_paths, (PropertyRNA *)&rna_UserPreferences_ui_styles,
	-1, "addons", 0, "Addon",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_Addons},
	UserPreferences_addons_begin, UserPreferences_addons_next, UserPreferences_addons_end, UserPreferences_addons_get, NULL, UserPreferences_addons_lookup_int, UserPreferences_addons_lookup_string, NULL, &RNA_Addon
};

CollectionPropertyRNA rna_UserPreferences_autoexec_paths = {
	{(PropertyRNA *)&rna_UserPreferences_view, (PropertyRNA *)&rna_UserPreferences_addons,
	-1, "autoexec_paths", 0, "Autoexec Paths",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, &RNA_PathCompareCollection},
	UserPreferences_autoexec_paths_begin, UserPreferences_autoexec_paths_next, UserPreferences_autoexec_paths_end, UserPreferences_autoexec_paths_get, NULL, UserPreferences_autoexec_paths_lookup_int, UserPreferences_autoexec_paths_lookup_string, NULL, &RNA_PathCompare
};

PointerPropertyRNA rna_UserPreferences_view = {
	{(PropertyRNA *)&rna_UserPreferences_edit, (PropertyRNA *)&rna_UserPreferences_autoexec_paths,
	-1, "view", 8650752, "View & Controls",
	"Preferences related to viewing data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_view_get, NULL, NULL, NULL,&RNA_UserPreferencesView
};

PointerPropertyRNA rna_UserPreferences_edit = {
	{(PropertyRNA *)&rna_UserPreferences_inputs, (PropertyRNA *)&rna_UserPreferences_view,
	-1, "edit", 8650752, "Edit Methods",
	"Settings for interacting with Blender data",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_edit_get, NULL, NULL, NULL,&RNA_UserPreferencesEdit
};

PointerPropertyRNA rna_UserPreferences_inputs = {
	{(PropertyRNA *)&rna_UserPreferences_filepaths, (PropertyRNA *)&rna_UserPreferences_edit,
	-1, "inputs", 8650752, "Inputs",
	"Settings for input devices",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_inputs_get, NULL, NULL, NULL,&RNA_UserPreferencesInput
};

PointerPropertyRNA rna_UserPreferences_filepaths = {
	{(PropertyRNA *)&rna_UserPreferences_system, (PropertyRNA *)&rna_UserPreferences_inputs,
	-1, "filepaths", 8650752, "File Paths",
	"Default paths for external files",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_filepaths_get, NULL, NULL, NULL,&RNA_UserPreferencesFilePaths
};

PointerPropertyRNA rna_UserPreferences_system = {
	{NULL, (PropertyRNA *)&rna_UserPreferences_filepaths,
	-1, "system", 8650752, "System & OpenGL",
	"Graphics driver and operating system settings",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferences_system_get, NULL, NULL, NULL,&RNA_UserPreferencesSystem
};

StructRNA RNA_UserPreferences = {
	{(ContainerRNA *)&RNA_Addons, (ContainerRNA *)&RNA_WalkNavigation,
	NULL,
	{(PropertyRNA *)&rna_UserPreferences_rna_properties, (PropertyRNA *)&rna_UserPreferences_system}},
	"UserPreferences", NULL, NULL, 0, "User Preferences",
	"Global user preferences",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserPreferences_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* User Addons */
CollectionPropertyRNA rna_Addons_rna_properties = {
	{(PropertyRNA *)&rna_Addons_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Addons_rna_properties_begin, Addons_rna_properties_next, Addons_rna_properties_end, Addons_rna_properties_get, NULL, NULL, Addons_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Addons_rna_type = {
	{NULL, (PropertyRNA *)&rna_Addons_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Addons_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_Addons_new_addon = {
	{NULL, NULL,
	-1, "addon", 8388616, "",
	"Addon datablock",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Addon
};

FunctionRNA rna_Addons_new_func = {
	{(FunctionRNA *)&rna_Addons_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_Addons_new_addon, (PropertyRNA *)&rna_Addons_new_addon}},
	"new", 1, "Add a new addon",
	Addons_new_call,
	(PropertyRNA *)&rna_Addons_new_addon
};

PointerPropertyRNA rna_Addons_remove_addon = {
	{NULL, NULL,
	-1, "addon", 264196, "",
	"Addon to remove",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_Addon
};

FunctionRNA rna_Addons_remove_func = {
	{NULL, (FunctionRNA *)&rna_Addons_new_func,
	NULL,
	{(PropertyRNA *)&rna_Addons_remove_addon, (PropertyRNA *)&rna_Addons_remove_addon}},
	"remove", 17, "Remove addon",
	Addons_remove_call,
	NULL
};

StructRNA RNA_Addons = {
	{(ContainerRNA *)&RNA_PathCompareCollection, (ContainerRNA *)&RNA_UserPreferences,
	NULL,
	{(PropertyRNA *)&rna_Addons_rna_properties, (PropertyRNA *)&rna_Addons_rna_type}},
	"Addons", NULL, NULL, 0, "User Addons",
	"Collection of addons",
	"*", 17,
	NULL, (PropertyRNA *)&rna_Addons_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_Addons_new_func, (FunctionRNA *)&rna_Addons_remove_func}
};

/* Paths Compare */
CollectionPropertyRNA rna_PathCompareCollection_rna_properties = {
	{(PropertyRNA *)&rna_PathCompareCollection_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PathCompareCollection_rna_properties_begin, PathCompareCollection_rna_properties_next, PathCompareCollection_rna_properties_end, PathCompareCollection_rna_properties_get, NULL, NULL, PathCompareCollection_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PathCompareCollection_rna_type = {
	{NULL, (PropertyRNA *)&rna_PathCompareCollection_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PathCompareCollection_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

PointerPropertyRNA rna_PathCompareCollection_new_pathcmp = {
	{NULL, NULL,
	-1, "pathcmp", 8388616, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PathCompare
};

FunctionRNA rna_PathCompareCollection_new_func = {
	{(FunctionRNA *)&rna_PathCompareCollection_remove_func, NULL,
	NULL,
	{(PropertyRNA *)&rna_PathCompareCollection_new_pathcmp, (PropertyRNA *)&rna_PathCompareCollection_new_pathcmp}},
	"new", 1, "Add a new path",
	PathCompareCollection_new_call,
	(PropertyRNA *)&rna_PathCompareCollection_new_pathcmp
};

PointerPropertyRNA rna_PathCompareCollection_remove_pathcmp = {
	{NULL, NULL,
	-1, "pathcmp", 264196, "",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL,&RNA_PathCompare
};

FunctionRNA rna_PathCompareCollection_remove_func = {
	{NULL, (FunctionRNA *)&rna_PathCompareCollection_new_func,
	NULL,
	{(PropertyRNA *)&rna_PathCompareCollection_remove_pathcmp, (PropertyRNA *)&rna_PathCompareCollection_remove_pathcmp}},
	"remove", 17, "Remove path",
	PathCompareCollection_remove_call,
	NULL
};

StructRNA RNA_PathCompareCollection = {
	{(ContainerRNA *)&RNA_UserPreferencesView, (ContainerRNA *)&RNA_Addons,
	NULL,
	{(PropertyRNA *)&rna_PathCompareCollection_rna_properties, (PropertyRNA *)&rna_PathCompareCollection_rna_type}},
	"PathCompareCollection", NULL, NULL, 0, "Paths Compare",
	"Collection of paths",
	"*", 17,
	NULL, (PropertyRNA *)&rna_PathCompareCollection_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_PathCompareCollection_new_func, (FunctionRNA *)&rna_PathCompareCollection_remove_func}
};

/* View & Controls */
CollectionPropertyRNA rna_UserPreferencesView_rna_properties = {
	{(PropertyRNA *)&rna_UserPreferencesView_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_rna_properties_begin, UserPreferencesView_rna_properties_next, UserPreferencesView_rna_properties_end, UserPreferencesView_rna_properties_get, NULL, NULL, UserPreferencesView_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserPreferencesView_rna_type = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_tooltips, (PropertyRNA *)&rna_UserPreferencesView_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UserPreferencesView_show_tooltips = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_tooltips_python, (PropertyRNA *)&rna_UserPreferencesView_rna_type,
	-1, "show_tooltips", 3, "Tooltips",
	"Display tooltips (when off hold Alt to force display)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_tooltips_get, UserPreferencesView_show_tooltips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_tooltips_python = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_object_info, (PropertyRNA *)&rna_UserPreferencesView_show_tooltips,
	-1, "show_tooltips_python", 3, "Python Tooltips",
	"Show Python references in tooltips",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_tooltips_python_get, UserPreferencesView_show_tooltips_python_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_object_info = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_global_scene, (PropertyRNA *)&rna_UserPreferencesView_show_tooltips_python,
	-1, "show_object_info", 3, "Display Object Info",
	"Display objects name and frame number in 3D view",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_object_info_get, UserPreferencesView_show_object_info_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_global_scene = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_large_cursors, (PropertyRNA *)&rna_UserPreferencesView_show_object_info,
	-1, "use_global_scene", 3, "Global Scene",
	"Force the current Scene to be displayed in all Screens",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_global_scene_get, UserPreferencesView_use_global_scene_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_large_cursors = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_view_name, (PropertyRNA *)&rna_UserPreferencesView_use_global_scene,
	-1, "show_large_cursors", 8195, "Large Cursors",
	"Use large mouse cursors when available",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, curssize), 1, NULL},
	UserPreferencesView_show_large_cursors_get, UserPreferencesView_show_large_cursors_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_view_name = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_splash, (PropertyRNA *)&rna_UserPreferencesView_show_large_cursors,
	-1, "show_view_name", 3, "Show View Name",
	"Show the name of the view\'s direction in each 3D View",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_view_name_get, UserPreferencesView_show_view_name_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_splash = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_playback_fps, (PropertyRNA *)&rna_UserPreferencesView_show_view_name,
	-1, "show_splash", 3, "Show Splash",
	"Display splash screen on startup",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_splash_get, UserPreferencesView_show_splash_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_playback_fps = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_mouse_over_open, (PropertyRNA *)&rna_UserPreferencesView_show_splash,
	-1, "show_playback_fps", 3, "Show Playback FPS",
	"Show the frames per second screen refresh rate, while animation is played back",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_playback_fps_get, UserPreferencesView_show_playback_fps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_mouse_over_open = {
	{(PropertyRNA *)&rna_UserPreferencesView_open_toplevel_delay, (PropertyRNA *)&rna_UserPreferencesView_show_playback_fps,
	-1, "use_mouse_over_open", 3, "Open On Mouse Over",
	"Open menu buttons and pulldowns automatically when the mouse is hovering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_mouse_over_open_get, UserPreferencesView_use_mouse_over_open_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_open_toplevel_delay = {
	{(PropertyRNA *)&rna_UserPreferencesView_open_sublevel_delay, (PropertyRNA *)&rna_UserPreferencesView_use_mouse_over_open,
	-1, "open_toplevel_delay", 8195, "Top Level Menu Open Delay",
	"Time delay in 1/10 seconds before automatically opening top level menus",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, menuthreshold1), 1, NULL},
	UserPreferencesView_open_toplevel_delay_get, UserPreferencesView_open_toplevel_delay_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 40, 1, 40, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_open_sublevel_delay = {
	{(PropertyRNA *)&rna_UserPreferencesView_pie_initial_timeout, (PropertyRNA *)&rna_UserPreferencesView_open_toplevel_delay,
	-1, "open_sublevel_delay", 8195, "Sub Level Menu Open Delay",
	"Time delay in 1/10 seconds before automatically opening sub level menus",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, menuthreshold2), 1, NULL},
	UserPreferencesView_open_sublevel_delay_get, UserPreferencesView_open_sublevel_delay_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 40, 1, 40, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_pie_initial_timeout = {
	{(PropertyRNA *)&rna_UserPreferencesView_pie_animation_timeout, (PropertyRNA *)&rna_UserPreferencesView_open_sublevel_delay,
	-1, "pie_initial_timeout", 8195, "Recenter Timeout",
	"Pie menus will use the initial mouse position as center for this amount of time (in 1/100ths of sec)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, pie_initial_timeout), 1, NULL},
	UserPreferencesView_pie_initial_timeout_get, UserPreferencesView_pie_initial_timeout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_pie_animation_timeout = {
	{(PropertyRNA *)&rna_UserPreferencesView_pie_menu_radius, (PropertyRNA *)&rna_UserPreferencesView_pie_initial_timeout,
	-1, "pie_animation_timeout", 8195, "Animation Timeout",
	"Time needed to fully animate the pie to unfolded state (in 1/100ths of sec)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, pie_animation_timeout), 1, NULL},
	UserPreferencesView_pie_animation_timeout_get, UserPreferencesView_pie_animation_timeout_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_pie_menu_radius = {
	{(PropertyRNA *)&rna_UserPreferencesView_pie_menu_threshold, (PropertyRNA *)&rna_UserPreferencesView_pie_animation_timeout,
	-1, "pie_menu_radius", 8195, "Radius",
	"Pie menu size in pixels",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, pie_menu_radius), 1, NULL},
	UserPreferencesView_pie_menu_radius_get, UserPreferencesView_pie_menu_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_pie_menu_threshold = {
	{(PropertyRNA *)&rna_UserPreferencesView_pie_menu_confirm, (PropertyRNA *)&rna_UserPreferencesView_pie_menu_radius,
	-1, "pie_menu_threshold", 8195, "Threshold",
	"Distance from center needed before a selection can be made",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, pie_menu_threshold), 1, NULL},
	UserPreferencesView_pie_menu_threshold_get, UserPreferencesView_pie_menu_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_pie_menu_confirm = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_quit_dialog, (PropertyRNA *)&rna_UserPreferencesView_pie_menu_threshold,
	-1, "pie_menu_confirm", 8195, "Confirm Threshold",
	"Distance threshold after which selection is made (zero to disable)",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, pie_menu_confirm), 1, NULL},
	UserPreferencesView_pie_menu_confirm_get, UserPreferencesView_pie_menu_confirm_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_quit_dialog = {
	{(PropertyRNA *)&rna_UserPreferencesView_open_left_mouse_delay, (PropertyRNA *)&rna_UserPreferencesView_pie_menu_confirm,
	-1, "use_quit_dialog", 3, "Prompt Quit",
	"Asks for confirmation when quitting through the window close button",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_quit_dialog_get, UserPreferencesView_use_quit_dialog_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_open_left_mouse_delay = {
	{(PropertyRNA *)&rna_UserPreferencesView_open_right_mouse_delay, (PropertyRNA *)&rna_UserPreferencesView_use_quit_dialog,
	-1, "open_left_mouse_delay", 8195, "Hold LMB Open Toolbox Delay",
	"Time in 1/10 seconds to hold the Left Mouse Button before opening the toolbox",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, tb_leftmouse), 1, NULL},
	UserPreferencesView_open_left_mouse_delay_get, UserPreferencesView_open_left_mouse_delay_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 40, 1, 40, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_open_right_mouse_delay = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_column_layout, (PropertyRNA *)&rna_UserPreferencesView_open_left_mouse_delay,
	-1, "open_right_mouse_delay", 8195, "Hold RMB Open Toolbox Delay",
	"Time in 1/10 seconds to hold the Right Mouse Button before opening the toolbox",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, tb_rightmouse), 1, NULL},
	UserPreferencesView_open_right_mouse_delay_get, UserPreferencesView_open_right_mouse_delay_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 40, 1, 40, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_column_layout = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_directional_menus, (PropertyRNA *)&rna_UserPreferencesView_open_right_mouse_delay,
	-1, "show_column_layout", 3, "Toolbox Column Layout",
	"Use a column layout for toolbox",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_column_layout_get, UserPreferencesView_show_column_layout_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_directional_menus = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_global_pivot, (PropertyRNA *)&rna_UserPreferencesView_show_column_layout,
	-1, "use_directional_menus", 3, "Contents Follow Opening Direction",
	"Otherwise menus, etc will always be top to bottom, left to right, no matter opening direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_directional_menus_get, UserPreferencesView_use_directional_menus_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_global_pivot = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_mouse_depth_navigate, (PropertyRNA *)&rna_UserPreferencesView_use_directional_menus,
	-1, "use_global_pivot", 3, "Global Pivot",
	"Lock the same rotation/scaling pivot in all 3D Views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_global_pivot_get, UserPreferencesView_use_global_pivot_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_mouse_depth_navigate = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_mouse_depth_cursor, (PropertyRNA *)&rna_UserPreferencesView_use_global_pivot,
	-1, "use_mouse_depth_navigate", 3, "Auto Depth",
	"Use the depth under the mouse to improve view pan/rotate/zoom functionality",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_mouse_depth_navigate_get, UserPreferencesView_use_mouse_depth_navigate_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_mouse_depth_cursor = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_camera_lock_parent, (PropertyRNA *)&rna_UserPreferencesView_use_mouse_depth_navigate,
	-1, "use_mouse_depth_cursor", 3, "Cursor Depth",
	"Use the depth under the mouse when placing the cursor",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_mouse_depth_cursor_get, UserPreferencesView_use_mouse_depth_cursor_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_camera_lock_parent = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_zoom_to_mouse, (PropertyRNA *)&rna_UserPreferencesView_use_mouse_depth_cursor,
	-1, "use_camera_lock_parent", 3, "Camera Parent Lock",
	"When the camera is locked to the view and in fly mode, transform the parent rather than the camera",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_camera_lock_parent_get, UserPreferencesView_use_camera_lock_parent_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_zoom_to_mouse = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_auto_perspective, (PropertyRNA *)&rna_UserPreferencesView_use_camera_lock_parent,
	-1, "use_zoom_to_mouse", 3, "Zoom To Mouse Position",
	"Zoom in towards the mouse pointer\'s position in the 3D view, rather than the 2D window center",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_zoom_to_mouse_get, UserPreferencesView_use_zoom_to_mouse_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_auto_perspective = {
	{(PropertyRNA *)&rna_UserPreferencesView_use_rotate_around_active, (PropertyRNA *)&rna_UserPreferencesView_use_zoom_to_mouse,
	-1, "use_auto_perspective", 3, "Auto Perspective",
	"Automatically switch between orthographic and perspective when changing from top/front/side views",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_auto_perspective_get, UserPreferencesView_use_auto_perspective_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_use_rotate_around_active = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_mini_axis, (PropertyRNA *)&rna_UserPreferencesView_use_auto_perspective,
	-1, "use_rotate_around_active", 3, "Rotate Around Selection",
	"Use selection as the pivot point",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_use_rotate_around_active_get, UserPreferencesView_use_rotate_around_active_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_mini_axis = {
	{(PropertyRNA *)&rna_UserPreferencesView_mini_axis_size, (PropertyRNA *)&rna_UserPreferencesView_use_rotate_around_active,
	-1, "show_mini_axis", 3, "Show Mini Axes",
	"Show a small rotating 3D axes in the bottom left corner of the 3D View",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_mini_axis_get, UserPreferencesView_show_mini_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_mini_axis_size = {
	{(PropertyRNA *)&rna_UserPreferencesView_mini_axis_brightness, (PropertyRNA *)&rna_UserPreferencesView_show_mini_axis,
	-1, "mini_axis_size", 8195, "Mini Axes Size",
	"The axes icon\'s size",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, rvisize), 1, NULL},
	UserPreferencesView_mini_axis_size_get, UserPreferencesView_mini_axis_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	10, 64, 10, 64, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_mini_axis_brightness = {
	{(PropertyRNA *)&rna_UserPreferencesView_smooth_view, (PropertyRNA *)&rna_UserPreferencesView_mini_axis_size,
	-1, "mini_axis_brightness", 8195, "Mini Axes Brightness",
	"Brightness of the icon",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, rvibright), 1, NULL},
	UserPreferencesView_mini_axis_brightness_get, UserPreferencesView_mini_axis_brightness_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 10, 0, 10, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_smooth_view = {
	{(PropertyRNA *)&rna_UserPreferencesView_rotation_angle, (PropertyRNA *)&rna_UserPreferencesView_mini_axis_brightness,
	-1, "smooth_view", 8195, "Smooth View",
	"Time to animate the view in milliseconds, zero to disable",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, smooth_viewtx), 1, NULL},
	UserPreferencesView_smooth_view_get, UserPreferencesView_smooth_view_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 1000, 0, 1000, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_rotation_angle = {
	{(PropertyRNA *)&rna_UserPreferencesView_show_manipulator, (PropertyRNA *)&rna_UserPreferencesView_smooth_view,
	-1, "rotation_angle", 8195, "Rotation Angle",
	"Rotation step for numerical pad keys (2 4 6 8)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, pad_rot_angle), 1, NULL},
	UserPreferencesView_rotation_angle_get, UserPreferencesView_rotation_angle_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 90, 0, 90, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesView_show_manipulator = {
	{(PropertyRNA *)&rna_UserPreferencesView_manipulator_size, (PropertyRNA *)&rna_UserPreferencesView_rotation_angle,
	-1, "show_manipulator", 3, "Manipulator",
	"Use 3D transform manipulator",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_show_manipulator_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_show_manipulator_get, UserPreferencesView_show_manipulator_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_manipulator_size = {
	{(PropertyRNA *)&rna_UserPreferencesView_manipulator_handle_size, (PropertyRNA *)&rna_UserPreferencesView_show_manipulator,
	-1, "manipulator_size", 8195, "Manipulator Size",
	"Diameter of the manipulator",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, tw_size), 1, NULL},
	UserPreferencesView_manipulator_size_get, UserPreferencesView_manipulator_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	10, 200, 10, 200, 1, 75, NULL
};

IntPropertyRNA rna_UserPreferencesView_manipulator_handle_size = {
	{(PropertyRNA *)&rna_UserPreferencesView_manipulator_hotspot, (PropertyRNA *)&rna_UserPreferencesView_manipulator_size,
	-1, "manipulator_handle_size", 8195, "Manipulator Handle Size",
	"Size of manipulator handles as percentage of the radius",
	0, "*",
	PROP_INT, PROP_PERCENTAGE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, tw_handlesize), 1, NULL},
	UserPreferencesView_manipulator_handle_size_get, UserPreferencesView_manipulator_handle_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	2, 40, 2, 40, 1, 25, NULL
};

IntPropertyRNA rna_UserPreferencesView_manipulator_hotspot = {
	{(PropertyRNA *)&rna_UserPreferencesView_object_origin_size, (PropertyRNA *)&rna_UserPreferencesView_manipulator_handle_size,
	-1, "manipulator_hotspot", 8195, "Manipulator Hotspot",
	"Distance around the handles to accept mouse clicks",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, tw_hotspot), 1, NULL},
	UserPreferencesView_manipulator_hotspot_get, UserPreferencesView_manipulator_hotspot_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 40, 4, 40, 1, 14, NULL
};

IntPropertyRNA rna_UserPreferencesView_object_origin_size = {
	{(PropertyRNA *)&rna_UserPreferencesView_view2d_grid_spacing_min, (PropertyRNA *)&rna_UserPreferencesView_manipulator_hotspot,
	-1, "object_origin_size", 8195, "Object Origin Size",
	"Diameter in Pixels for Object/Lamp origin display",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, obcenter_dia), 1, NULL},
	UserPreferencesView_object_origin_size_get, UserPreferencesView_object_origin_size_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	4, 10, 4, 10, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesView_view2d_grid_spacing_min = {
	{(PropertyRNA *)&rna_UserPreferencesView_timecode_style, (PropertyRNA *)&rna_UserPreferencesView_object_origin_size,
	-1, "view2d_grid_spacing_min", 8195, "2D View Minimum Grid Spacing",
	"Minimum number of pixels between each gridline in 2D Viewports",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, v2d_min_gridsize), 1, NULL},
	UserPreferencesView_view2d_grid_spacing_min_get, UserPreferencesView_view2d_grid_spacing_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 500, 1, 500, 1, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesView_timecode_style_items[6] = {
	{0, "MINIMAL", 0, "Minimal Info", "Most compact representation, uses \'+\' as separator for sub-second frame numbers, with left and right truncation of the timecode as necessary"},
	{2, "SMPTE", 0, "SMPTE (Full)", "Full SMPTE timecode (format is HH:MM:SS:FF)"},
	{1, "SMPTE_COMPACT", 0, "SMPTE (Compact)", "SMPTE timecode showing minutes, seconds, and frames only - hours are also shown if necessary, but not by default"},
	{3, "MILLISECONDS", 0, "Compact with Milliseconds", "Similar to SMPTE (Compact), except that instead of frames, milliseconds are shown instead"},
	{4, "SECONDS_ONLY", 0, "Only Seconds", "Direct conversion of frame numbers to seconds"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesView_timecode_style = {
	{NULL, (PropertyRNA *)&rna_UserPreferencesView_view2d_grid_spacing_min,
	-1, "timecode_style", 3, "TimeCode Style",
	"Format of Time Codes displayed when not displaying timing in terms of frames",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesView_timecode_style_get, UserPreferencesView_timecode_style_set, NULL, NULL, NULL, NULL, rna_UserPreferencesView_timecode_style_items, 5, 0
};

StructRNA RNA_UserPreferencesView = {
	{(ContainerRNA *)&RNA_UserPreferencesEdit, (ContainerRNA *)&RNA_PathCompareCollection,
	NULL,
	{(PropertyRNA *)&rna_UserPreferencesView_rna_properties, (PropertyRNA *)&rna_UserPreferencesView_timecode_style}},
	"UserPreferencesView", NULL, NULL, 0, "View & Controls",
	"Preferences related to viewing data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserPreferencesView_rna_properties,
	NULL,
	&RNA_UserPreferences,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Edit Methods */
CollectionPropertyRNA rna_UserPreferencesEdit_rna_properties = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_rna_properties_begin, UserPreferencesEdit_rna_properties_next, UserPreferencesEdit_rna_properties_end, UserPreferencesEdit_rna_properties_get, NULL, NULL, UserPreferencesEdit_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserPreferencesEdit_rna_type = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_material_link, (PropertyRNA *)&rna_UserPreferencesEdit_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_UserPreferencesEdit_material_link_items[3] = {
	{0, "OBDATA", 0, "ObData", "Toggle whether the material is linked to object data or the object block"},
	{256, "OBJECT", 0, "Object", "Toggle whether the material is linked to object data or the object block"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesEdit_material_link = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_object_align, (PropertyRNA *)&rna_UserPreferencesEdit_rna_type,
	-1, "material_link", 3, "Material Link To",
	"Toggle whether the material is linked to object data or the object block",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_material_link_get, UserPreferencesEdit_material_link_set, NULL, NULL, NULL, NULL, rna_UserPreferencesEdit_material_link_items, 2, 0
};

static EnumPropertyItem rna_UserPreferencesEdit_object_align_items[3] = {
	{0, "WORLD", 0, "World", "Align newly added objects to the world coordinate system"},
	{524288, "VIEW", 0, "View", "Align newly added objects facing the active 3D View direction"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesEdit_object_align = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_enter_edit_mode, (PropertyRNA *)&rna_UserPreferencesEdit_material_link,
	-1, "object_align", 3, "Align Object To",
	"When adding objects from a 3D View menu, either align them with that view or with the world",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_object_align_get, UserPreferencesEdit_object_align_set, NULL, NULL, NULL, NULL, rna_UserPreferencesEdit_object_align_items, 2, 0
};

BoolPropertyRNA rna_UserPreferencesEdit_use_enter_edit_mode = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_drag_immediately, (PropertyRNA *)&rna_UserPreferencesEdit_object_align,
	-1, "use_enter_edit_mode", 3, "Enter Edit Mode",
	"Enter Edit Mode automatically after adding a new object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_enter_edit_mode_get, UserPreferencesEdit_use_enter_edit_mode_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_drag_immediately = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_undo_steps, (PropertyRNA *)&rna_UserPreferencesEdit_use_enter_edit_mode,
	-1, "use_drag_immediately", 3, "Release confirms",
	"Moving things with a mouse drag confirms when releasing the button",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_drag_immediately_get, UserPreferencesEdit_use_drag_immediately_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesEdit_undo_steps = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_undo_memory_limit, (PropertyRNA *)&rna_UserPreferencesEdit_use_drag_immediately,
	-1, "undo_steps", 8195, "Undo Steps",
	"Number of undo steps available (smaller values conserve memory)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, undosteps), 1, NULL},
	UserPreferencesEdit_undo_steps_get, UserPreferencesEdit_undo_steps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 64, 0, 64, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesEdit_undo_memory_limit = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_global_undo, (PropertyRNA *)&rna_UserPreferencesEdit_undo_steps,
	-1, "undo_memory_limit", 8195, "Undo Memory Size",
	"Maximum memory usage in megabytes (0 means unlimited)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, undomemory), 1, NULL},
	UserPreferencesEdit_undo_memory_limit_get, UserPreferencesEdit_undo_memory_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32767, 0, 32767, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_global_undo = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_auto_keying, (PropertyRNA *)&rna_UserPreferencesEdit_undo_memory_limit,
	-1, "use_global_undo", 3, "Global Undo",
	"Global undo works by keeping a full copy of the file itself in memory, so takes extra memory",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_global_undo_get, UserPreferencesEdit_use_global_undo_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_auto_keying = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_auto_keying_mode, (PropertyRNA *)&rna_UserPreferencesEdit_use_global_undo,
	-1, "use_auto_keying", 3, "Auto Keying Enable",
	"Automatic keyframe insertion for Objects and Bones (default setting used for new Scenes)",
	494, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_auto_keying_get, UserPreferencesEdit_use_auto_keying_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesEdit_auto_keying_mode_items[3] = {
	{3, "ADD_REPLACE_KEYS", 0, "Add/Replace", ""},
	{5, "REPLACE_KEYS", 0, "Replace", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesEdit_auto_keying_mode = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_keyframe_insert_available, (PropertyRNA *)&rna_UserPreferencesEdit_use_auto_keying,
	-1, "auto_keying_mode", 3, "Auto Keying Mode",
	"Mode of automatic keyframe insertion for Objects and Bones (default setting used for new Scenes)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_auto_keying_mode_get, UserPreferencesEdit_auto_keying_mode_set, NULL, NULL, NULL, NULL, rna_UserPreferencesEdit_auto_keying_mode_items, 2, 3
};

BoolPropertyRNA rna_UserPreferencesEdit_use_keyframe_insert_available = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_auto_keying_warning, (PropertyRNA *)&rna_UserPreferencesEdit_auto_keying_mode,
	-1, "use_keyframe_insert_available", 3, "Auto Keyframe Insert Available",
	"Automatic keyframe insertion in available F-Curves",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_keyframe_insert_available_get, UserPreferencesEdit_use_keyframe_insert_available_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_auto_keying_warning = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_keyframe_insert_needed, (PropertyRNA *)&rna_UserPreferencesEdit_use_keyframe_insert_available,
	-1, "use_auto_keying_warning", 3, "Show Auto Keying Warning",
	"Show warning indicators when transforming objects and bones if auto keying is enabled",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_auto_keying_warning_get, UserPreferencesEdit_use_auto_keying_warning_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_keyframe_insert_needed = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_visual_keying, (PropertyRNA *)&rna_UserPreferencesEdit_use_auto_keying_warning,
	-1, "use_keyframe_insert_needed", 3, "Keyframe Insert Needed",
	"Keyframe insertion only when keyframe needed",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_keyframe_insert_needed_get, UserPreferencesEdit_use_keyframe_insert_needed_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_visual_keying = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_insertkey_xyz_to_rgb, (PropertyRNA *)&rna_UserPreferencesEdit_use_keyframe_insert_needed,
	-1, "use_visual_keying", 3, "Visual Keying",
	"Use Visual keying automatically for constrained objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_visual_keying_get, UserPreferencesEdit_use_visual_keying_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_insertkey_xyz_to_rgb = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_keyframe_new_interpolation_type, (PropertyRNA *)&rna_UserPreferencesEdit_use_visual_keying,
	-1, "use_insertkey_xyz_to_rgb", 3, "New F-Curve Colors - XYZ to RGB",
	"Color for newly added transformation F-Curves (Location, Rotation, Scale) and also Color is based on the transform axis",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_insertkey_xyz_to_rgb_get, UserPreferencesEdit_use_insertkey_xyz_to_rgb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesEdit_keyframe_new_interpolation_type_items[17] = {
	{0, "", 0, "Interpolation", "Standard transitions between keyframes"},
	{0, "CONSTANT", 525, "Constant", "No interpolation, value of A gets held until B is encountered"},
	{1, "LINEAR", 526, "Linear", "Straight-line interpolation between A and B (i.e. no ease in/out)"},
	{2, "BEZIER", 527, "Bezier", "Smooth interpolation between A and B, with some control over curve shape"},
	{0, "", 0, "Easing (by strength)", "Predefined inertial transitions, useful for motion graphics (from least to most \'\'dramatic\'\')"},
	{12, "SINE", 528, "Sinusoidal", "Sinusoidal easing (weakest, almost linear but with a slight curvature)"},
	{9, "QUAD", 529, "Quadratic", "Quadratic easing"},
	{6, "CUBIC", 530, "Cubic", "Cubic easing"},
	{10, "QUART", 531, "Quartic", "Quartic easing"},
	{11, "QUINT", 532, "Quintic", "Quintic easing"},
	{8, "EXPO", 533, "Exponential", "Exponential easing (dramatic)"},
	{5, "CIRC", 534, "Circular", "Circular easing (strongest and most dynamic)"},
	{0, "", 0, "Dynamic Effects", "Simple physics-inspired easing effects"},
	{3, "BACK", 537, "Back", "Cubic easing with overshoot and settle"},
	{4, "BOUNCE", 535, "Bounce", "Exponentially decaying parabolic bounce, like when objects collide"},
	{7, "ELASTIC", 536, "Elastic", "Exponentially decaying sine wave, like an elastic band"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesEdit_keyframe_new_interpolation_type = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_keyframe_new_handle_type, (PropertyRNA *)&rna_UserPreferencesEdit_use_insertkey_xyz_to_rgb,
	-1, "keyframe_new_interpolation_type", 3, "New Interpolation Type",
	"Interpolation mode used for first keyframe on newly added F-Curves (subsequent keyframes take interpolation from preceding keyframe)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_keyframe_new_interpolation_type_get, UserPreferencesEdit_keyframe_new_interpolation_type_set, NULL, NULL, NULL, NULL, rna_UserPreferencesEdit_keyframe_new_interpolation_type_items, 16, 0
};

static EnumPropertyItem rna_UserPreferencesEdit_keyframe_new_handle_type_items[6] = {
	{0, "FREE", 0, "Free", ""},
	{2, "VECTOR", 0, "Vector", ""},
	{3, "ALIGNED", 0, "Aligned", ""},
	{1, "AUTO", 0, "Automatic", ""},
	{4, "AUTO_CLAMPED", 0, "Auto Clamped", "Auto handles clamped to not overshoot"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesEdit_keyframe_new_handle_type = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_negative_frames, (PropertyRNA *)&rna_UserPreferencesEdit_keyframe_new_interpolation_type,
	-1, "keyframe_new_handle_type", 3, "New Handles Type",
	"Handle type for handles of new keyframes",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_keyframe_new_handle_type_get, UserPreferencesEdit_keyframe_new_handle_type_set, NULL, NULL, NULL, NULL, rna_UserPreferencesEdit_keyframe_new_handle_type_items, 5, 0
};

BoolPropertyRNA rna_UserPreferencesEdit_use_negative_frames = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_fcurve_unselected_alpha, (PropertyRNA *)&rna_UserPreferencesEdit_keyframe_new_handle_type,
	-1, "use_negative_frames", 3, "Allow Negative Frames",
	"Current frame number can be manually set to a negative value",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_negative_frames_get, UserPreferencesEdit_use_negative_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_UserPreferencesEdit_fcurve_unselected_alpha = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_manhattan_distance, (PropertyRNA *)&rna_UserPreferencesEdit_use_negative_frames,
	-1, "fcurve_unselected_alpha", 8195, "Unselected F-Curve Visibility",
	"Amount that unselected F-Curves stand out from the background (Graph Editor)",
	0, "*",
	PROP_FLOAT, PROP_FACTOR | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 252510208, NULL, NULL,
	offsetof(UserDef, fcu_inactive_alpha), 4, NULL},
	UserPreferencesEdit_fcurve_unselected_alpha_get, UserPreferencesEdit_fcurve_unselected_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0010000000f, 1.0f, 0.0010000000f, 1.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_UserPreferencesEdit_grease_pencil_manhattan_distance = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_euclidean_distance, (PropertyRNA *)&rna_UserPreferencesEdit_fcurve_unselected_alpha,
	-1, "grease_pencil_manhattan_distance", 8195, "Grease Pencil Manhattan Distance",
	"Pixels moved by mouse per axis when drawing stroke",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, gp_manhattendist), 1, NULL},
	UserPreferencesEdit_grease_pencil_manhattan_distance_get, UserPreferencesEdit_grease_pencil_manhattan_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesEdit_grease_pencil_euclidean_distance = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_grease_pencil_smooth_stroke, (PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_manhattan_distance,
	-1, "grease_pencil_euclidean_distance", 8195, "Grease Pencil Euclidean Distance",
	"Distance moved by mouse when drawing stroke to include",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, gp_euclideandist), 1, NULL},
	UserPreferencesEdit_grease_pencil_euclidean_distance_get, UserPreferencesEdit_grease_pencil_euclidean_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_grease_pencil_smooth_stroke = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_grease_pencil_simplify_stroke, (PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_euclidean_distance,
	-1, "use_grease_pencil_smooth_stroke", 3, "Grease Pencil Smooth Stroke",
	"Smooth the final stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_grease_pencil_smooth_stroke_get, UserPreferencesEdit_use_grease_pencil_smooth_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_grease_pencil_simplify_stroke = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_eraser_radius, (PropertyRNA *)&rna_UserPreferencesEdit_use_grease_pencil_smooth_stroke,
	-1, "use_grease_pencil_simplify_stroke", 3, "Grease Pencil Simplify Stroke",
	"Simplify the final stroke",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_grease_pencil_simplify_stroke_get, UserPreferencesEdit_use_grease_pencil_simplify_stroke_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesEdit_grease_pencil_eraser_radius = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_default_color, (PropertyRNA *)&rna_UserPreferencesEdit_use_grease_pencil_simplify_stroke,
	-1, "grease_pencil_eraser_radius", 8195, "Grease Pencil Eraser Radius",
	"Radius of eraser \'brush\'",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, gp_eraser), 1, NULL},
	UserPreferencesEdit_grease_pencil_eraser_radius_get, UserPreferencesEdit_grease_pencil_eraser_radius_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

static float rna_UserPreferencesEdit_grease_pencil_default_color_default[4] = {
	0.0f,
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UserPreferencesEdit_grease_pencil_default_color = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_sculpt_paint_overlay_color, (PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_eraser_radius,
	-1, "grease_pencil_default_color", 8195, "Grease Pencil Default Color",
	"Color of new Grease Pencil layers",
	0, "*",
	PROP_FLOAT, PROP_COLOR | PROP_UNIT_NONE, NULL, 1, {4, 0, 0}, 4,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, gpencil_new_layer_col), 4, NULL},
	NULL, NULL, UserPreferencesEdit_grease_pencil_default_color_get, UserPreferencesEdit_grease_pencil_default_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_UserPreferencesEdit_grease_pencil_default_color_default
};

static float rna_UserPreferencesEdit_sculpt_paint_overlay_color_default[3] = {
	0.0f,
	0.0f,
	0.0f
};

FloatPropertyRNA rna_UserPreferencesEdit_sculpt_paint_overlay_color = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_mesh, (PropertyRNA *)&rna_UserPreferencesEdit_grease_pencil_default_color,
	-1, "sculpt_paint_overlay_color", 8195, "Sculpt/Paint Overlay Color",
	"Color of texture overlay",
	0, "*",
	PROP_FLOAT, PROP_COLOR_GAMMA | PROP_UNIT_NONE, NULL, 1, {3, 0, 0}, 3,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, sculpt_paint_overlay_col), 4, NULL},
	NULL, NULL, UserPreferencesEdit_sculpt_paint_overlay_color_get, UserPreferencesEdit_sculpt_paint_overlay_color_set, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, FLT_MAX, 10.0f, 3, 0.0f, rna_UserPreferencesEdit_sculpt_paint_overlay_color_default
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_mesh = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_surface, (PropertyRNA *)&rna_UserPreferencesEdit_sculpt_paint_overlay_color,
	-1, "use_duplicate_mesh", 3, "Duplicate Mesh",
	"Causes mesh data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_mesh_get, UserPreferencesEdit_use_duplicate_mesh_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_surface = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_curve, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_mesh,
	-1, "use_duplicate_surface", 3, "Duplicate Surface",
	"Causes surface data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_surface_get, UserPreferencesEdit_use_duplicate_surface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_curve = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_text, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_surface,
	-1, "use_duplicate_curve", 3, "Duplicate Curve",
	"Causes curve data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_curve_get, UserPreferencesEdit_use_duplicate_curve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_text = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_metaball, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_curve,
	-1, "use_duplicate_text", 3, "Duplicate Text",
	"Causes text data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_text_get, UserPreferencesEdit_use_duplicate_text_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_metaball = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_armature, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_text,
	-1, "use_duplicate_metaball", 3, "Duplicate Metaball",
	"Causes metaball data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_metaball_get, UserPreferencesEdit_use_duplicate_metaball_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_armature = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_lamp, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_metaball,
	-1, "use_duplicate_armature", 3, "Duplicate Armature",
	"Causes armature data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_armature_get, UserPreferencesEdit_use_duplicate_armature_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_lamp = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_material, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_armature,
	-1, "use_duplicate_lamp", 3, "Duplicate Lamp",
	"Causes lamp data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_lamp_get, UserPreferencesEdit_use_duplicate_lamp_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_material = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_texture, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_lamp,
	-1, "use_duplicate_material", 3, "Duplicate Material",
	"Causes material data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_material_get, UserPreferencesEdit_use_duplicate_material_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_texture = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_fcurve, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_material,
	-1, "use_duplicate_texture", 3, "Duplicate Texture",
	"Causes texture data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_texture_get, UserPreferencesEdit_use_duplicate_texture_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_fcurve = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_action, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_texture,
	-1, "use_duplicate_fcurve", 3, "Duplicate F-Curve",
	"Causes F-curve data to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_fcurve_get, UserPreferencesEdit_use_duplicate_fcurve_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_action = {
	{(PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_particle, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_fcurve,
	-1, "use_duplicate_action", 3, "Duplicate Action",
	"Causes actions to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_action_get, UserPreferencesEdit_use_duplicate_action_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesEdit_use_duplicate_particle = {
	{NULL, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_action,
	-1, "use_duplicate_particle", 3, "Duplicate Particle",
	"Causes particle systems to be duplicated with the object",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesEdit_use_duplicate_particle_get, UserPreferencesEdit_use_duplicate_particle_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_UserPreferencesEdit = {
	{(ContainerRNA *)&RNA_UserPreferencesInput, (ContainerRNA *)&RNA_UserPreferencesView,
	NULL,
	{(PropertyRNA *)&rna_UserPreferencesEdit_rna_properties, (PropertyRNA *)&rna_UserPreferencesEdit_use_duplicate_particle}},
	"UserPreferencesEdit", NULL, NULL, 0, "Edit Methods",
	"Settings for interacting with Blender data",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserPreferencesEdit_rna_properties,
	NULL,
	&RNA_UserPreferences,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Input */
CollectionPropertyRNA rna_UserPreferencesInput_rna_properties = {
	{(PropertyRNA *)&rna_UserPreferencesInput_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_rna_properties_begin, UserPreferencesInput_rna_properties_next, UserPreferencesInput_rna_properties_end, UserPreferencesInput_rna_properties_get, NULL, NULL, UserPreferencesInput_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserPreferencesInput_rna_type = {
	{(PropertyRNA *)&rna_UserPreferencesInput_select_mouse, (PropertyRNA *)&rna_UserPreferencesInput_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

static EnumPropertyItem rna_UserPreferencesInput_select_mouse_items[3] = {
	{16384, "LEFT", 0, "Left", "Use left Mouse Button for selection"},
	{0, "RIGHT", 0, "Right", "Use Right Mouse Button for selection"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_select_mouse = {
	{(PropertyRNA *)&rna_UserPreferencesInput_view_zoom_method, (PropertyRNA *)&rna_UserPreferencesInput_rna_type,
	-1, "select_mouse", 3, "Select Mouse",
	"Mouse button used for selection",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_select_mouse_get, UserPreferencesInput_select_mouse_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_select_mouse_items, 2, 0
};

static EnumPropertyItem rna_UserPreferencesInput_view_zoom_method_items[4] = {
	{0, "CONTINUE", 0, "Continue", "Old style zoom, continues while moving mouse up or down"},
	{2, "DOLLY", 0, "Dolly", "Zoom in and out based on vertical mouse movement"},
	{1, "SCALE", 0, "Scale", "Zoom in and out like scaling the view, mouse movements relative to center"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_view_zoom_method = {
	{(PropertyRNA *)&rna_UserPreferencesInput_view_zoom_axis, (PropertyRNA *)&rna_UserPreferencesInput_select_mouse,
	-1, "view_zoom_method", 3, "Zoom Style",
	"Which style to use for viewport scaling",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_view_zoom_method_get, UserPreferencesInput_view_zoom_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_view_zoom_method_items, 3, 0
};

static EnumPropertyItem rna_UserPreferencesInput_view_zoom_axis_items[3] = {
	{0, "VERTICAL", 0, "Vertical", "Zoom in and out based on vertical mouse movement"},
	{67108864, "HORIZONTAL", 0, "Horizontal", "Zoom in and out based on horizontal mouse movement"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_view_zoom_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_invert_mouse_zoom, (PropertyRNA *)&rna_UserPreferencesInput_view_zoom_method,
	-1, "view_zoom_axis", 3, "Zoom Axis",
	"Axis of mouse movement to zoom in or out on",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_view_zoom_axis_get, UserPreferencesInput_view_zoom_axis_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_view_zoom_axis_items, 2, 0
};

BoolPropertyRNA rna_UserPreferencesInput_invert_mouse_zoom = {
	{(PropertyRNA *)&rna_UserPreferencesInput_view_rotate_method, (PropertyRNA *)&rna_UserPreferencesInput_view_zoom_axis,
	-1, "invert_mouse_zoom", 3, "Invert Zoom Direction",
	"Invert the axis of mouse movement for zooming",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_invert_mouse_zoom_get, UserPreferencesInput_invert_mouse_zoom_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesInput_view_rotate_method_items[3] = {
	{0, "TURNTABLE", 0, "Turntable", "Use turntable style rotation in the viewport"},
	{32, "TRACKBALL", 0, "Trackball", "Use trackball style rotation in the viewport"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_view_rotate_method = {
	{(PropertyRNA *)&rna_UserPreferencesInput_use_mouse_continuous, (PropertyRNA *)&rna_UserPreferencesInput_invert_mouse_zoom,
	-1, "view_rotate_method", 3, "View Rotation",
	"Rotation style in the viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_view_rotate_method_get, UserPreferencesInput_view_rotate_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_view_rotate_method_items, 2, 0
};

BoolPropertyRNA rna_UserPreferencesInput_use_mouse_continuous = {
	{(PropertyRNA *)&rna_UserPreferencesInput_navigation_mode, (PropertyRNA *)&rna_UserPreferencesInput_view_rotate_method,
	-1, "use_mouse_continuous", 3, "Continuous Grab",
	"Allow moving the mouse outside the view on some manipulations (transform, ui control drag)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_use_mouse_continuous_get, UserPreferencesInput_use_mouse_continuous_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesInput_navigation_mode_items[3] = {
	{0, "WALK", 0, "Walk", "Interactively walk or free navigate around the scene"},
	{1, "FLY", 0, "Fly", "Use fly dynamics to navigate the scene"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_navigation_mode = {
	{(PropertyRNA *)&rna_UserPreferencesInput_walk_navigation, (PropertyRNA *)&rna_UserPreferencesInput_use_mouse_continuous,
	-1, "navigation_mode", 3, "View Navigation",
	"Which method to use for viewport navigation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_navigation_mode_get, UserPreferencesInput_navigation_mode_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_navigation_mode_items, 2, 0
};

PointerPropertyRNA rna_UserPreferencesInput_walk_navigation = {
	{(PropertyRNA *)&rna_UserPreferencesInput_drag_threshold, (PropertyRNA *)&rna_UserPreferencesInput_navigation_mode,
	-1, "walk_navigation", 8650752, "Walk Navigation",
	"Settings for walk navigation mode",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_walk_navigation_get, NULL, NULL, NULL,&RNA_WalkNavigation
};

IntPropertyRNA rna_UserPreferencesInput_drag_threshold = {
	{(PropertyRNA *)&rna_UserPreferencesInput_tweak_threshold, (PropertyRNA *)&rna_UserPreferencesInput_walk_navigation,
	-1, "drag_threshold", 8195, "Drag Threshold",
	"Amount of pixels you have to drag before dragging UI items happens",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, dragthreshold), 1, NULL},
	UserPreferencesInput_drag_threshold_get, UserPreferencesInput_drag_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	3, 40, 3, 40, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesInput_tweak_threshold = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_sensitivity, (PropertyRNA *)&rna_UserPreferencesInput_drag_threshold,
	-1, "tweak_threshold", 8195, "Tweak Threshold",
	"Number of pixels you have to drag before tweak event is triggered",
	0, "*",
	PROP_INT, PROP_PIXEL | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, tweak_threshold), 1, NULL},
	UserPreferencesInput_tweak_threshold_get, UserPreferencesInput_tweak_threshold_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	3, 1024, 3, 1024, 1, 0, NULL
};

FloatPropertyRNA rna_UserPreferencesInput_ndof_sensitivity = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_orbit_sensitivity, (PropertyRNA *)&rna_UserPreferencesInput_tweak_threshold,
	-1, "ndof_sensitivity", 8195, "Sensitivity",
	"Overall sensitivity of the 3D Mouse for panning",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, ndof_sensitivity), 4, NULL},
	UserPreferencesInput_ndof_sensitivity_get, UserPreferencesInput_ndof_sensitivity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 40.0f, 0.0099999998f, 40.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_UserPreferencesInput_ndof_orbit_sensitivity = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_pan_yz_swap_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_sensitivity,
	-1, "ndof_orbit_sensitivity", 8195, "Orbit Sensitivity",
	"Overall sensitivity of the 3D Mouse for orbiting",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, ndof_orbit_sensitivity), 4, NULL},
	UserPreferencesInput_ndof_orbit_sensitivity_get, UserPreferencesInput_ndof_orbit_sensitivity_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0099999998f, 40.0f, 0.0099999998f, 40.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_pan_yz_swap_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_zoom_invert, (PropertyRNA *)&rna_UserPreferencesInput_ndof_orbit_sensitivity,
	-1, "ndof_pan_yz_swap_axis", 3, "Y/Z Swap Axis",
	"Pan using up/down on the device (otherwise forward/backward)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_pan_yz_swap_axis_get, UserPreferencesInput_ndof_pan_yz_swap_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_zoom_invert = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_show_guide, (PropertyRNA *)&rna_UserPreferencesInput_ndof_pan_yz_swap_axis,
	-1, "ndof_zoom_invert", 3, "Invert Zoom",
	"Zoom using opposite direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_zoom_invert_get, UserPreferencesInput_ndof_zoom_invert_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_show_guide = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_view_navigate_method, (PropertyRNA *)&rna_UserPreferencesInput_ndof_zoom_invert,
	-1, "ndof_show_guide", 3, "Show Navigation Guide",
	"Display the center and axis during rotation",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_show_guide_get, UserPreferencesInput_ndof_show_guide_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesInput_ndof_view_navigate_method_items[3] = {
	{0, "FREE", 0, "Free", "Use full 6 degrees of freedom by default"},
	{64, "ORBIT", 0, "Orbit", "Orbit about the view center by default"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_ndof_view_navigate_method = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_view_rotate_method, (PropertyRNA *)&rna_UserPreferencesInput_ndof_show_guide,
	-1, "ndof_view_navigate_method", 3, "NDOF View Navigate",
	"Navigation style in the viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_view_navigate_method_get, UserPreferencesInput_ndof_view_navigate_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_ndof_view_navigate_method_items, 2, 0
};

static EnumPropertyItem rna_UserPreferencesInput_ndof_view_rotate_method_items[3] = {
	{32768, "TURNTABLE", 0, "Turntable", "Use turntable style rotation in the viewport"},
	{0, "TRACKBALL", 0, "Trackball", "Use trackball style rotation in the viewport"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesInput_ndof_view_rotate_method = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_rotx_invert_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_view_navigate_method,
	-1, "ndof_view_rotate_method", 3, "NDOF View Rotation",
	"Rotation style in the viewport",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_view_rotate_method_get, UserPreferencesInput_ndof_view_rotate_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesInput_ndof_view_rotate_method_items, 2, 0
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_rotx_invert_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_roty_invert_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_view_rotate_method,
	-1, "ndof_rotx_invert_axis", 3, "Invert Pitch (X) Axis",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_rotx_invert_axis_get, UserPreferencesInput_ndof_rotx_invert_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_roty_invert_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_rotz_invert_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_rotx_invert_axis,
	-1, "ndof_roty_invert_axis", 3, "Invert Yaw (Y) Axis",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_roty_invert_axis_get, UserPreferencesInput_ndof_roty_invert_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_rotz_invert_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_panx_invert_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_roty_invert_axis,
	-1, "ndof_rotz_invert_axis", 3, "Invert Roll (Z) Axis",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_rotz_invert_axis_get, UserPreferencesInput_ndof_rotz_invert_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_panx_invert_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_pany_invert_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_rotz_invert_axis,
	-1, "ndof_panx_invert_axis", 3, "Invert X Axis",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_panx_invert_axis_get, UserPreferencesInput_ndof_panx_invert_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_pany_invert_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_panz_invert_axis, (PropertyRNA *)&rna_UserPreferencesInput_ndof_panx_invert_axis,
	-1, "ndof_pany_invert_axis", 3, "Invert Y Axis",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_pany_invert_axis_get, UserPreferencesInput_ndof_pany_invert_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_panz_invert_axis = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_lock_horizon, (PropertyRNA *)&rna_UserPreferencesInput_ndof_pany_invert_axis,
	-1, "ndof_panz_invert_axis", 3, "Invert Z Axis",
	"",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_panz_invert_axis_get, UserPreferencesInput_ndof_panz_invert_axis_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_lock_horizon = {
	{(PropertyRNA *)&rna_UserPreferencesInput_ndof_fly_helicopter, (PropertyRNA *)&rna_UserPreferencesInput_ndof_panz_invert_axis,
	-1, "ndof_lock_horizon", 3, "Lock Horizon",
	"Keep horizon level while flying with 3D Mouse",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_lock_horizon_get, UserPreferencesInput_ndof_lock_horizon_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_ndof_fly_helicopter = {
	{(PropertyRNA *)&rna_UserPreferencesInput_mouse_double_click_time, (PropertyRNA *)&rna_UserPreferencesInput_ndof_lock_horizon,
	-1, "ndof_fly_helicopter", 3, "Helicopter Mode",
	"Device up/down directly controls your Z position",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_ndof_fly_helicopter_get, UserPreferencesInput_ndof_fly_helicopter_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesInput_mouse_double_click_time = {
	{(PropertyRNA *)&rna_UserPreferencesInput_use_mouse_emulate_3_button, (PropertyRNA *)&rna_UserPreferencesInput_ndof_fly_helicopter,
	-1, "mouse_double_click_time", 8195, "Double Click Timeout",
	"Time/delay (in ms) for a double click",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, dbl_click_time), 1, NULL},
	UserPreferencesInput_mouse_double_click_time_get, UserPreferencesInput_mouse_double_click_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 1000, 1, 1000, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_use_mouse_emulate_3_button = {
	{(PropertyRNA *)&rna_UserPreferencesInput_use_emulate_numpad, (PropertyRNA *)&rna_UserPreferencesInput_mouse_double_click_time,
	-1, "use_mouse_emulate_3_button", 3, "Emulate 3 Button Mouse",
	"Emulate Middle Mouse with Alt+Left Mouse (doesn\'t work with Left Mouse Select option)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_use_mouse_emulate_3_button_get, UserPreferencesInput_use_mouse_emulate_3_button_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_use_emulate_numpad = {
	{(PropertyRNA *)&rna_UserPreferencesInput_use_mouse_mmb_paste, (PropertyRNA *)&rna_UserPreferencesInput_use_mouse_emulate_3_button,
	-1, "use_emulate_numpad", 3, "Emulate Numpad",
	"Main 1 to 0 keys act as the numpad ones (useful for laptops)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_use_emulate_numpad_get, UserPreferencesInput_use_emulate_numpad_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_use_mouse_mmb_paste = {
	{(PropertyRNA *)&rna_UserPreferencesInput_invert_zoom_wheel, (PropertyRNA *)&rna_UserPreferencesInput_use_emulate_numpad,
	-1, "use_mouse_mmb_paste", 3, "Middle Mouse Paste",
	"In text window, paste with middle mouse button instead of panning",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_use_mouse_mmb_paste_get, UserPreferencesInput_use_mouse_mmb_paste_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_invert_zoom_wheel = {
	{(PropertyRNA *)&rna_UserPreferencesInput_wheel_scroll_lines, (PropertyRNA *)&rna_UserPreferencesInput_use_mouse_mmb_paste,
	-1, "invert_zoom_wheel", 3, "Wheel Invert Zoom",
	"Swap the Mouse Wheel zoom direction",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_invert_zoom_wheel_get, UserPreferencesInput_invert_zoom_wheel_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesInput_wheel_scroll_lines = {
	{(PropertyRNA *)&rna_UserPreferencesInput_use_trackpad_natural, (PropertyRNA *)&rna_UserPreferencesInput_invert_zoom_wheel,
	-1, "wheel_scroll_lines", 8195, "Wheel Scroll Lines",
	"Number of lines scrolled at a time with the mouse wheel",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, wheellinescroll), 1, NULL},
	UserPreferencesInput_wheel_scroll_lines_get, UserPreferencesInput_wheel_scroll_lines_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32, 0, 32, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesInput_use_trackpad_natural = {
	{(PropertyRNA *)&rna_UserPreferencesInput_active_keyconfig, (PropertyRNA *)&rna_UserPreferencesInput_wheel_scroll_lines,
	-1, "use_trackpad_natural", 3, "Trackpad Natural",
	"If your system uses \'natural\' scrolling, this option keeps consistent trackpad usage throughout the UI",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_use_trackpad_natural_get, UserPreferencesInput_use_trackpad_natural_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UserPreferencesInput_active_keyconfig = {
	{NULL, (PropertyRNA *)&rna_UserPreferencesInput_use_trackpad_natural,
	-1, "active_keyconfig", 262145, "Key Config",
	"The name of the active key configuration",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesInput_active_keyconfig_get, UserPreferencesInput_active_keyconfig_length, UserPreferencesInput_active_keyconfig_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_UserPreferencesInput = {
	{(ContainerRNA *)&RNA_UserPreferencesFilePaths, (ContainerRNA *)&RNA_UserPreferencesEdit,
	NULL,
	{(PropertyRNA *)&rna_UserPreferencesInput_rna_properties, (PropertyRNA *)&rna_UserPreferencesInput_active_keyconfig}},
	"UserPreferencesInput", NULL, NULL, 0, "Input",
	"Settings for input devices",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserPreferencesInput_rna_properties,
	NULL,
	&RNA_UserPreferences,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* File Paths */
CollectionPropertyRNA rna_UserPreferencesFilePaths_rna_properties = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_rna_properties_begin, UserPreferencesFilePaths_rna_properties_next, UserPreferencesFilePaths_rna_properties_end, UserPreferencesFilePaths_rna_properties_get, NULL, NULL, UserPreferencesFilePaths_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserPreferencesFilePaths_rna_type = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_show_hidden_files_datablocks, (PropertyRNA *)&rna_UserPreferencesFilePaths_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UserPreferencesFilePaths_show_hidden_files_datablocks = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_filter_files, (PropertyRNA *)&rna_UserPreferencesFilePaths_rna_type,
	-1, "show_hidden_files_datablocks", 3, "Hide Dot Files/Datablocks",
	"Hide files/datablocks that start with a dot (.*)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_show_hidden_files_datablocks_get, UserPreferencesFilePaths_show_hidden_files_datablocks_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_filter_files = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_hide_recent_locations, (PropertyRNA *)&rna_UserPreferencesFilePaths_show_hidden_files_datablocks,
	-1, "use_filter_files", 3, "Filter File Extensions",
	"Display only files with extensions in the image select window",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_filter_files_get, UserPreferencesFilePaths_use_filter_files_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_hide_recent_locations = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_hide_system_bookmarks, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_filter_files,
	-1, "hide_recent_locations", 3, "Hide Recent Locations",
	"Hide recent locations in the file selector",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_hide_recent_locations_get, UserPreferencesFilePaths_hide_recent_locations_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_hide_system_bookmarks = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_show_thumbnails, (PropertyRNA *)&rna_UserPreferencesFilePaths_hide_recent_locations,
	-1, "hide_system_bookmarks", 3, "Hide System Bookmarks",
	"Hide system bookmarks in the file selector",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_hide_system_bookmarks_get, UserPreferencesFilePaths_hide_system_bookmarks_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_show_thumbnails = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_relative_paths, (PropertyRNA *)&rna_UserPreferencesFilePaths_hide_system_bookmarks,
	-1, "show_thumbnails", 3, "Show Thumbnails",
	"Open in thumbnail view for images and movies",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_show_thumbnails_get, UserPreferencesFilePaths_show_thumbnails_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_relative_paths = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_file_compression, (PropertyRNA *)&rna_UserPreferencesFilePaths_show_thumbnails,
	-1, "use_relative_paths", 3, "Relative Paths",
	"Default relative path option for the file selector",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_relative_paths_get, UserPreferencesFilePaths_use_relative_paths_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_file_compression = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_load_ui, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_relative_paths,
	-1, "use_file_compression", 3, "Compress File",
	"Enable file compression when saving .blend files",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_file_compression_get, UserPreferencesFilePaths_use_file_compression_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_load_ui = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_font_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_file_compression,
	-1, "use_load_ui", 3, "Load UI",
	"Load user interface setup when loading .blend files",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_load_ui_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_load_ui_get, UserPreferencesFilePaths_use_load_ui_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StringPropertyRNA rna_UserPreferencesFilePaths_font_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_texture_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_load_ui,
	-1, "font_directory", 262145, "Fonts Directory",
	"The default directory to search for loading fonts",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_font_directory_get, UserPreferencesFilePaths_font_directory_length, UserPreferencesFilePaths_font_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_texture_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_render_output_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_font_directory,
	-1, "texture_directory", 262145, "Textures Directory",
	"The default directory to search for textures",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_texture_directory_get, UserPreferencesFilePaths_texture_directory_length, UserPreferencesFilePaths_texture_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_render_output_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_script_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_texture_directory,
	-1, "render_output_directory", 262145, "Render Output Directory",
	"The default directory for rendering output, for new scenes",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_render_output_directory_get, UserPreferencesFilePaths_render_output_directory_length, UserPreferencesFilePaths_render_output_directory_set, NULL, NULL, NULL, 1024, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_script_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_i18n_branches_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_render_output_directory,
	-1, "script_directory", 262145, "Python Scripts Directory",
	"Alternate script path, matching the default layout with subdirs: startup, addons & modules (requires restart)",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_script_directory_get, UserPreferencesFilePaths_script_directory_length, UserPreferencesFilePaths_script_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_i18n_branches_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_sound_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_script_directory,
	-1, "i18n_branches_directory", 262145, "Translation Branches Directory",
	"The path to the \'/branches\' directory of your local svn-translation copy, to allow translating from the UI",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_i18n_branches_directory_get, UserPreferencesFilePaths_i18n_branches_directory_length, UserPreferencesFilePaths_i18n_branches_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_sound_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_temporary_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_i18n_branches_directory,
	-1, "sound_directory", 262145, "Sounds Directory",
	"The default directory to search for sounds",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_sound_directory_get, UserPreferencesFilePaths_sound_directory_length, UserPreferencesFilePaths_sound_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_temporary_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_render_cache_directory, (PropertyRNA *)&rna_UserPreferencesFilePaths_sound_directory,
	-1, "temporary_directory", 262145, "Temporary Directory",
	"The directory for storing temporary save files",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	rna_userdef_temp_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_temporary_directory_get, UserPreferencesFilePaths_temporary_directory_length, UserPreferencesFilePaths_temporary_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_render_cache_directory = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_image_editor, (PropertyRNA *)&rna_UserPreferencesFilePaths_temporary_directory,
	-1, "render_cache_directory", 262145, "Render Cache Path",
	"Where to cache raw render results",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_render_cache_directory_get, UserPreferencesFilePaths_render_cache_directory_length, UserPreferencesFilePaths_render_cache_directory_set, NULL, NULL, NULL, 768, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_image_editor = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_animation_player, (PropertyRNA *)&rna_UserPreferencesFilePaths_render_cache_directory,
	-1, "image_editor", 262145, "Image Editor",
	"Path to an image editor",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_image_editor_get, UserPreferencesFilePaths_image_editor_length, UserPreferencesFilePaths_image_editor_set, NULL, NULL, NULL, 1024, ""
};

StringPropertyRNA rna_UserPreferencesFilePaths_animation_player = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_animation_player_preset, (PropertyRNA *)&rna_UserPreferencesFilePaths_image_editor,
	-1, "animation_player", 262145, "Animation Player",
	"Path to a custom animation/frame sequence player",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_animation_player_get, UserPreferencesFilePaths_animation_player_length, UserPreferencesFilePaths_animation_player_set, NULL, NULL, NULL, 1024, ""
};

static EnumPropertyItem rna_UserPreferencesFilePaths_animation_player_preset_items[7] = {
	{0, "INTERNAL", 0, "Internal", "Built-in animation player"},
	{2, "DJV", 0, "Djv", "Open source frame player: http://djv.sourceforge.net"},
	{3, "FRAMECYCLER", 0, "FrameCycler", "Frame player from IRIDAS"},
	{4, "RV", 0, "rv", "Frame player from Tweak Software"},
	{5, "MPLAYER", 0, "MPlayer", "Media player for video & png/jpeg/sgi image sequences"},
	{50, "CUSTOM", 0, "Custom", "Custom animation player executable path"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesFilePaths_animation_player_preset = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_save_version, (PropertyRNA *)&rna_UserPreferencesFilePaths_animation_player,
	-1, "animation_player_preset", 3, "Animation Player Preset",
	"Preset configs for external animation players",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_animation_player_preset_get, UserPreferencesFilePaths_animation_player_preset_set, NULL, NULL, NULL, NULL, rna_UserPreferencesFilePaths_animation_player_preset_items, 6, 0
};

IntPropertyRNA rna_UserPreferencesFilePaths_save_version = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_auto_save_temporary_files, (PropertyRNA *)&rna_UserPreferencesFilePaths_animation_player_preset,
	-1, "save_version", 8195, "Save Versions",
	"The number of old versions to maintain in the current directory, when manually saving",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, versions), 1, NULL},
	UserPreferencesFilePaths_save_version_get, UserPreferencesFilePaths_save_version_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32, 0, 32, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_auto_save_temporary_files = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_auto_save_time, (PropertyRNA *)&rna_UserPreferencesFilePaths_save_version,
	-1, "use_auto_save_temporary_files", 3, "Auto Save Temporary Files",
	"Automatic saving of temporary files in temp directory, uses process ID (Sculpt or edit mode data won\'t be saved!\')",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_autosave_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_auto_save_temporary_files_get, UserPreferencesFilePaths_use_auto_save_temporary_files_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesFilePaths_auto_save_time = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_keep_session, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_auto_save_temporary_files,
	-1, "auto_save_time", 8195, "Auto Save Time",
	"The time (in minutes) to wait between automatic temporary saves",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_autosave_update, 0, NULL, NULL,
	offsetof(UserDef, savetime), 0, NULL},
	UserPreferencesFilePaths_auto_save_time_get, UserPreferencesFilePaths_auto_save_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 60, 1, 60, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_keep_session = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_recent_files, (PropertyRNA *)&rna_UserPreferencesFilePaths_auto_save_time,
	-1, "use_keep_session", 3, "Keep Session",
	"Always load session recovery and save it after quitting Blender",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_keep_session_get, UserPreferencesFilePaths_use_keep_session_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesFilePaths_recent_files = {
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_use_save_preview_images, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_keep_session,
	-1, "recent_files", 8195, "Recent Files",
	"Maximum number of recently opened files to remember",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, recent_files), 1, NULL},
	UserPreferencesFilePaths_recent_files_get, UserPreferencesFilePaths_recent_files_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 30, 0, 30, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesFilePaths_use_save_preview_images = {
	{NULL, (PropertyRNA *)&rna_UserPreferencesFilePaths_recent_files,
	-1, "use_save_preview_images", 3, "Save Preview Images",
	"Enables automatic saving of preview images in the .blend file",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesFilePaths_use_save_preview_images_get, UserPreferencesFilePaths_use_save_preview_images_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_UserPreferencesFilePaths = {
	{(ContainerRNA *)&RNA_UserPreferencesSystem, (ContainerRNA *)&RNA_UserPreferencesInput,
	NULL,
	{(PropertyRNA *)&rna_UserPreferencesFilePaths_rna_properties, (PropertyRNA *)&rna_UserPreferencesFilePaths_use_save_preview_images}},
	"UserPreferencesFilePaths", NULL, NULL, 0, "File Paths",
	"Default paths for external files",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserPreferencesFilePaths_rna_properties,
	NULL,
	&RNA_UserPreferences,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* System & OpenGL */
CollectionPropertyRNA rna_UserPreferencesSystem_rna_properties = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_rna_properties_begin, UserPreferencesSystem_rna_properties_next, UserPreferencesSystem_rna_properties_end, UserPreferencesSystem_rna_properties_get, NULL, NULL, UserPreferencesSystem_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_UserPreferencesSystem_rna_type = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_international_fonts, (PropertyRNA *)&rna_UserPreferencesSystem_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

BoolPropertyRNA rna_UserPreferencesSystem_use_international_fonts = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_dpi, (PropertyRNA *)&rna_UserPreferencesSystem_rna_type,
	-1, "use_international_fonts", 3, "International Fonts",
	"Use international fonts",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_language_update, 33554432, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_international_fonts_get, UserPreferencesSystem_use_international_fonts_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesSystem_dpi = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_virtual_pixel_mode, (PropertyRNA *)&rna_UserPreferencesSystem_use_international_fonts,
	-1, "dpi", 8195, "DPI",
	"Font size and resolution for display",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_dpi_update, 0, NULL, NULL,
	offsetof(UserDef, dpi), 0, NULL},
	UserPreferencesSystem_dpi_get, UserPreferencesSystem_dpi_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	48, 144, 48, 144, 1, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesSystem_virtual_pixel_mode_items[3] = {
	{0, "NATIVE", 0, "Native", "Use native pixel size of the display"},
	{1, "DOUBLE", 0, "Double", "Use double the native pixel size of the display"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_virtual_pixel_mode = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_font_path_ui, (PropertyRNA *)&rna_UserPreferencesSystem_dpi,
	-1, "virtual_pixel_mode", 3, "Virtual Pixel Mode",
	"Modify the pixel size for hi-res devices",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_virtual_pixel_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_virtual_pixel_mode_get, UserPreferencesSystem_virtual_pixel_mode_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_virtual_pixel_mode_items, 2, 0
};

StringPropertyRNA rna_UserPreferencesSystem_font_path_ui = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_scrollback, (PropertyRNA *)&rna_UserPreferencesSystem_virtual_pixel_mode,
	-1, "font_path_ui", 262145, "Interface Font",
	"Path to interface font",
	0, "*",
	PROP_STRING, PROP_FILEPATH | PROP_UNIT_NONE, NULL, 0, {1024, 0, 0}, 0,
	rna_userdef_language_update, 33554432, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_font_path_ui_get, UserPreferencesSystem_font_path_ui_length, UserPreferencesSystem_font_path_ui_set, NULL, NULL, NULL, 1024, ""
};

IntPropertyRNA rna_UserPreferencesSystem_scrollback = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_author, (PropertyRNA *)&rna_UserPreferencesSystem_font_path_ui,
	-1, "scrollback", 8195, "Scrollback",
	"Maximum number of lines to store for the console buffer",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, scrollback), 0, NULL},
	UserPreferencesSystem_scrollback_get, UserPreferencesSystem_scrollback_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	32, 32768, 32, 32768, 1, 0, NULL
};

StringPropertyRNA rna_UserPreferencesSystem_author = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_language, (PropertyRNA *)&rna_UserPreferencesSystem_scrollback,
	-1, "author", 262145, "Author",
	"Name that will be used in exported files when format supports such feature",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {80, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_author_get, UserPreferencesSystem_author_length, UserPreferencesSystem_author_set, NULL, NULL, NULL, 80, ""
};

static EnumPropertyItem rna_UserPreferencesSystem_language_items[2] = {
	{0, "DEFAULT", 0, "Default (Default)", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_language = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_translate_tooltips, (PropertyRNA *)&rna_UserPreferencesSystem_author,
	-1, "language", 3, "Language",
	"Language used for translation",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_language_update, 33554432, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_language_get, UserPreferencesSystem_language_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_language_items, 1, 0
};

BoolPropertyRNA rna_UserPreferencesSystem_use_translate_tooltips = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_translate_interface, (PropertyRNA *)&rna_UserPreferencesSystem_language,
	-1, "use_translate_tooltips", 3, "Translate Tooltips",
	"Translate tooltips",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_translate_tooltips_get, UserPreferencesSystem_use_translate_tooltips_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_translate_interface = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_translate_new_dataname, (PropertyRNA *)&rna_UserPreferencesSystem_use_translate_tooltips,
	-1, "use_translate_interface", 3, "Translate Interface",
	"Translate interface",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_translate_interface_get, UserPreferencesSystem_use_translate_interface_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_translate_new_dataname = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_textured_fonts, (PropertyRNA *)&rna_UserPreferencesSystem_use_translate_interface,
	-1, "use_translate_new_dataname", 3, "Translate New Names",
	"Translate new data names (when adding/creating some)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_translate_new_dataname_get, UserPreferencesSystem_use_translate_new_dataname_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_textured_fonts = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_solid_lights, (PropertyRNA *)&rna_UserPreferencesSystem_use_translate_new_dataname,
	-1, "use_textured_fonts", 3, "Textured Fonts",
	"Use textures for drawing international fonts",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_textured_fonts_get, UserPreferencesSystem_use_textured_fonts_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

CollectionPropertyRNA rna_UserPreferencesSystem_solid_lights = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_weight_color_range, (PropertyRNA *)&rna_UserPreferencesSystem_use_textured_fonts,
	-1, "solid_lights", 16384, "Solid Lights",
	"Lights user to display objects in solid draw mode",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {3, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_solid_lights_begin, UserPreferencesSystem_solid_lights_next, UserPreferencesSystem_solid_lights_end, UserPreferencesSystem_solid_lights_get, UserPreferencesSystem_solid_lights_length, UserPreferencesSystem_solid_lights_lookup_int, NULL, NULL, &RNA_UserSolidLight
};

BoolPropertyRNA rna_UserPreferencesSystem_use_weight_color_range = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_weight_color_range, (PropertyRNA *)&rna_UserPreferencesSystem_solid_lights,
	-1, "use_weight_color_range", 3, "Use Weight Color Range",
	"Enable color range used for weight visualization in weight painting mode",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_weight_color_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_weight_color_range_get, UserPreferencesSystem_use_weight_color_range_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

PointerPropertyRNA rna_UserPreferencesSystem_weight_color_range = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_color_picker_type, (PropertyRNA *)&rna_UserPreferencesSystem_use_weight_color_range,
	-1, "weight_color_range", 8650752, "Weight Color Range",
	"Color range used for weight visualization in weight painting mode",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_weight_color_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_weight_color_range_get, NULL, NULL, NULL,&RNA_ColorRamp
};

static EnumPropertyItem rna_UserPreferencesSystem_color_picker_type_items[6] = {
	{0, "CIRCLE_HSV", 0, "Circle (HSV)", "A circular Hue/Saturation color wheel, with Value slider"},
	{4, "CIRCLE_HSL", 0, "Circle (HSL)", "A circular Hue/Saturation color wheel, with Lightness slider"},
	{1, "SQUARE_SV", 0, "Square (SV + H)", "A square showing Saturation/Value, with Hue slider"},
	{2, "SQUARE_HS", 0, "Square (HS + V)", "A square showing Hue/Saturation, with Value slider"},
	{3, "SQUARE_HV", 0, "Square (HV + S)", "A square showing Hue/Value, with Saturation slider"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_color_picker_type = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_preview_images, (PropertyRNA *)&rna_UserPreferencesSystem_weight_color_range,
	-1, "color_picker_type", 3, "Color Picker Type",
	"Different styles of displaying the color picker widget",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_color_picker_type_get, UserPreferencesSystem_color_picker_type_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_color_picker_type_items, 5, 0
};

BoolPropertyRNA rna_UserPreferencesSystem_use_preview_images = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_scripts_auto_execute, (PropertyRNA *)&rna_UserPreferencesSystem_color_picker_type,
	-1, "use_preview_images", 3, "Enable All Codecs",
	"Allow user to choose any codec (Windows only, might generate instability)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_preview_images_get, UserPreferencesSystem_use_preview_images_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_scripts_auto_execute = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_tabs_as_spaces, (PropertyRNA *)&rna_UserPreferencesSystem_use_preview_images,
	-1, "use_scripts_auto_execute", 3, "Auto Run Python Scripts",
	"Allow any .blend file to run scripts automatically (unsafe with blend files from an untrusted source)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_script_autoexec_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_scripts_auto_execute_get, UserPreferencesSystem_use_scripts_auto_execute_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_tabs_as_spaces = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_prefetch_frames, (PropertyRNA *)&rna_UserPreferencesSystem_use_scripts_auto_execute,
	-1, "use_tabs_as_spaces", 3, "Tabs as Spaces",
	"Automatically convert all new tabs into spaces for new and loaded text files",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_tabs_as_spaces_get, UserPreferencesSystem_use_tabs_as_spaces_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

IntPropertyRNA rna_UserPreferencesSystem_prefetch_frames = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_memory_cache_limit, (PropertyRNA *)&rna_UserPreferencesSystem_use_tabs_as_spaces,
	-1, "prefetch_frames", 8195, "Prefetch Frames",
	"Number of frames to render ahead during playback (sequencer only)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, prefetchframes), 0, NULL},
	UserPreferencesSystem_prefetch_frames_get, UserPreferencesSystem_prefetch_frames_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 500, 0, INT_MAX, 1, 0, NULL
};

#if defined(SPEC)
IntPropertyRNA rna_UserPreferencesSystem_memory_cache_limit = {
        {(PropertyRNA *)&rna_UserPreferencesSystem_frame_server_port, (PropertyRNA *)&rna_UserPreferencesSystem_prefetch_frames,
        -1, "memory_cache_limit", 8195, "Memory Cache Limit",
        "Memory cache limit (in megabytes)",
        0, "*",
        PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
        rna_Userdef_memcache_update, 0, NULL, NULL,
        offsetof(UserDef, memcachelimit), 0, NULL},
        UserPreferencesSystem_memory_cache_limit_get, UserPreferencesSystem_memory_cache_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
        0, SPEC_MEMCACHELIMIT, 0, SPEC_MEMCACHELIMIT, 1, 0, NULL
};

#else
IntPropertyRNA rna_UserPreferencesSystem_memory_cache_limit = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_frame_server_port, (PropertyRNA *)&rna_UserPreferencesSystem_prefetch_frames,
	-1, "memory_cache_limit", 8195, "Memory Cache Limit",
	"Memory cache limit (in megabytes)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Userdef_memcache_update, 0, NULL, NULL,
	offsetof(UserDef, memcachelimit), 0, NULL},
	UserPreferencesSystem_memory_cache_limit_get, UserPreferencesSystem_memory_cache_limit_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32768, 0, 32768, 1, 0, NULL
};
#endif

IntPropertyRNA rna_UserPreferencesSystem_frame_server_port = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_gl_clip_alpha, (PropertyRNA *)&rna_UserPreferencesSystem_memory_cache_limit,
	-1, "frame_server_port", 8195, "Frame Server Port",
	"Frameserver Port for Frameserver Rendering",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, frameserverport), 1, NULL},
	UserPreferencesSystem_frame_server_port_get, UserPreferencesSystem_frame_server_port_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 32727, 0, 32727, 1, 0, NULL
};

FloatPropertyRNA rna_UserPreferencesSystem_gl_clip_alpha = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_mipmaps, (PropertyRNA *)&rna_UserPreferencesSystem_frame_server_port,
	-1, "gl_clip_alpha", 8195, "Clip Alpha",
	"Clip alpha below this threshold in the 3D textured view",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	offsetof(UserDef, glalphaclip), 4, NULL},
	UserPreferencesSystem_gl_clip_alpha_get, UserPreferencesSystem_gl_clip_alpha_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_mipmaps = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_16bit_textures, (PropertyRNA *)&rna_UserPreferencesSystem_gl_clip_alpha,
	-1, "use_mipmaps", 3, "Mipmaps",
	"Scale textures for the 3D View (looks nicer but uses more memory and slows image reloading)",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_mipmap_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_mipmaps_get, UserPreferencesSystem_use_mipmaps_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_16bit_textures = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_gpu_mipmap, (PropertyRNA *)&rna_UserPreferencesSystem_use_mipmaps,
	-1, "use_16bit_textures", 3, "16 Bit Float Textures",
	"Use 16 bit per component texture for float images",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_gl_use_16bit_textures, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_16bit_textures_get, UserPreferencesSystem_use_16bit_textures_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_gpu_mipmap = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_image_draw_method, (PropertyRNA *)&rna_UserPreferencesSystem_use_16bit_textures,
	-1, "use_gpu_mipmap", 3, "GPU Mipmap Generation",
	"Generate Image Mipmaps on the GPU",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_gl_gpu_mipmaps, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_gpu_mipmap_get, UserPreferencesSystem_use_gpu_mipmap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesSystem_image_draw_method_items[4] = {
	{2, "2DTEXTURE", 0, "2D Texture", "Use CPU for display transform and draw image with 2D texture"},
	{1, "GLSL", 0, "GLSL", "Use GLSL shaders for display transform and draw image with 2D texture"},
	{3, "DRAWPIXELS", 0, "DrawPixels", "Use CPU for display transform and draw image using DrawPixels"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_image_draw_method = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_vertex_buffer_objects, (PropertyRNA *)&rna_UserPreferencesSystem_use_gpu_mipmap,
	-1, "image_draw_method", 3, "Image Draw Method",
	"Method used for displaying images on the screen",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_image_draw_method_get, UserPreferencesSystem_image_draw_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_image_draw_method_items, 3, 2
};

BoolPropertyRNA rna_UserPreferencesSystem_use_vertex_buffer_objects = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_anisotropic_filter, (PropertyRNA *)&rna_UserPreferencesSystem_image_draw_method,
	-1, "use_vertex_buffer_objects", 3, "VBOs",
	"Use Vertex Buffer Objects (or Vertex Arrays, if unsupported) for viewport rendering",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 33554432, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_vertex_buffer_objects_get, UserPreferencesSystem_use_vertex_buffer_objects_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesSystem_anisotropic_filter_items[6] = {
	{1, "FILTER_0", 0, "Off", ""},
	{2, "FILTER_2", 0, "2x", ""},
	{4, "FILTER_4", 0, "4x", ""},
	{8, "FILTER_8", 0, "8x", ""},
	{16, "FILTER_16", 0, "16x", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_anisotropic_filter = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_gl_texture_limit, (PropertyRNA *)&rna_UserPreferencesSystem_use_vertex_buffer_objects,
	-1, "anisotropic_filter", 3, "Anisotropic Filter",
	"Quality of the anisotropic filtering (values greater than 1.0 enable anisotropic filtering)",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_anisotropic_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_anisotropic_filter_get, UserPreferencesSystem_anisotropic_filter_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_anisotropic_filter_items, 5, 1
};

static EnumPropertyItem rna_UserPreferencesSystem_gl_texture_limit_items[9] = {
	{0, "CLAMP_OFF", 0, "Off", ""},
	{8192, "CLAMP_8192", 0, "8192", ""},
	{4096, "CLAMP_4096", 0, "4096", ""},
	{2048, "CLAMP_2048", 0, "2048", ""},
	{1024, "CLAMP_1024", 0, "1024", ""},
	{512, "CLAMP_512", 0, "512", ""},
	{256, "CLAMP_256", 0, "256", ""},
	{128, "CLAMP_128", 0, "128", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_gl_texture_limit = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_texture_time_out, (PropertyRNA *)&rna_UserPreferencesSystem_anisotropic_filter,
	-1, "gl_texture_limit", 3, "GL Texture Limit",
	"Limit the texture size to save graphics memory",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_gl_texture_limit_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_gl_texture_limit_get, UserPreferencesSystem_gl_texture_limit_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_gl_texture_limit_items, 8, 0
};

IntPropertyRNA rna_UserPreferencesSystem_texture_time_out = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_texture_collection_rate, (PropertyRNA *)&rna_UserPreferencesSystem_gl_texture_limit,
	-1, "texture_time_out", 8195, "Texture Time Out",
	"Time since last access of a GL texture in seconds after which it is freed (set to 0 to keep textures allocated)",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, textimeout), 1, NULL},
	UserPreferencesSystem_texture_time_out_get, UserPreferencesSystem_texture_time_out_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 3600, 0, 3600, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesSystem_texture_collection_rate = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_window_draw_method, (PropertyRNA *)&rna_UserPreferencesSystem_texture_time_out,
	-1, "texture_collection_rate", 8195, "Texture Collection Rate",
	"Number of seconds between each run of the GL texture garbage collector",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, texcollectrate), 1, NULL},
	UserPreferencesSystem_texture_collection_rate_get, UserPreferencesSystem_texture_collection_rate_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	1, 3600, 1, 3600, 1, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesSystem_window_draw_method_items[6] = {
	{3, "AUTOMATIC", 0, "Automatic", "Automatically set based on graphics card and driver"},
	{0, "TRIPLE_BUFFER", 0, "Triple Buffer", "Use a third buffer for minimal redraws at the cost of more memory"},
	{1, "OVERLAP", 0, "Overlap", "Redraw all overlapping regions, minimal memory usage but more redraws"},
	{4, "OVERLAP_FLIP", 0, "Overlap Flip", "Redraw all overlapping regions, minimal memory usage but more redraws (for graphics drivers that do flipping)"},
	{2, "FULL", 0, "Full", "Do a full redraw each time, slow, only use for reference or when everything else fails"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_window_draw_method = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_audio_mixing_buffer, (PropertyRNA *)&rna_UserPreferencesSystem_texture_collection_rate,
	-1, "window_draw_method", 3, "Window Draw Method",
	"Drawing method used by the window manager",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_dpi_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_window_draw_method_get, UserPreferencesSystem_window_draw_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_window_draw_method_items, 5, 0
};

static EnumPropertyItem rna_UserPreferencesSystem_audio_mixing_buffer_items[9] = {
	{256, "SAMPLES_256", 0, "256", "Set audio mixing buffer size to 256 samples"},
	{512, "SAMPLES_512", 0, "512", "Set audio mixing buffer size to 512 samples"},
	{1024, "SAMPLES_1024", 0, "1024", "Set audio mixing buffer size to 1024 samples"},
	{2048, "SAMPLES_2048", 0, "2048", "Set audio mixing buffer size to 2048 samples"},
	{4096, "SAMPLES_4096", 0, "4096", "Set audio mixing buffer size to 4096 samples"},
	{8192, "SAMPLES_8192", 0, "8192", "Set audio mixing buffer size to 8192 samples"},
	{16384, "SAMPLES_16384", 0, "16384", "Set audio mixing buffer size to 16384 samples"},
	{32768, "SAMPLES_32768", 0, "32768", "Set audio mixing buffer size to 32768 samples"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_audio_mixing_buffer = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_audio_device, (PropertyRNA *)&rna_UserPreferencesSystem_window_draw_method,
	-1, "audio_mixing_buffer", 3, "Audio Mixing Buffer",
	"Number of samples used by the audio mixing buffer",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_audio_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_audio_mixing_buffer_get, UserPreferencesSystem_audio_mixing_buffer_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_audio_mixing_buffer_items, 8, 256
};

static EnumPropertyItem rna_UserPreferencesSystem_audio_device_items[2] = {
	{0, "NONE", 0, "None", "Null device - there will be no audio output"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_audio_device = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_audio_sample_rate, (PropertyRNA *)&rna_UserPreferencesSystem_audio_mixing_buffer,
	-1, "audio_device", 3, "Audio Device",
	"Audio output device",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_audio_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_audio_device_get, UserPreferencesSystem_audio_device_set, rna_userdef_audio_device_itemf, NULL, NULL, NULL, rna_UserPreferencesSystem_audio_device_items, 1, 0
};

static EnumPropertyItem rna_UserPreferencesSystem_audio_sample_rate_items[5] = {
	{44100, "RATE_44100", 0, "44.1 kHz", "Set audio sampling rate to 44100 samples per second"},
	{48000, "RATE_48000", 0, "48 kHz", "Set audio sampling rate to 48000 samples per second"},
	{96000, "RATE_96000", 0, "96 kHz", "Set audio sampling rate to 96000 samples per second"},
	{192000, "RATE_192000", 0, "192 kHz", "Set audio sampling rate to 192000 samples per second"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_audio_sample_rate = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_audio_sample_format, (PropertyRNA *)&rna_UserPreferencesSystem_audio_device,
	-1, "audio_sample_rate", 3, "Audio Sample Rate",
	"Audio sample rate",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_audio_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_audio_sample_rate_get, UserPreferencesSystem_audio_sample_rate_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_audio_sample_rate_items, 4, 44100
};

static EnumPropertyItem rna_UserPreferencesSystem_audio_sample_format_items[7] = {
	{1, "U8", 0, "8-bit Unsigned", "Set audio sample format to 8 bit unsigned integer"},
	{18, "S16", 0, "16-bit Signed", "Set audio sample format to 16 bit signed integer"},
	{19, "S24", 0, "24-bit Signed", "Set audio sample format to 24 bit signed integer"},
	{20, "S32", 0, "32-bit Signed", "Set audio sample format to 32 bit signed integer"},
	{36, "FLOAT", 0, "32-bit Float", "Set audio sample format to 32 bit float"},
	{40, "DOUBLE", 0, "64-bit Float", "Set audio sample format to 64 bit float"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_audio_sample_format = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_audio_channels, (PropertyRNA *)&rna_UserPreferencesSystem_audio_sample_rate,
	-1, "audio_sample_format", 3, "Audio Sample Format",
	"Audio sample format",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_audio_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_audio_sample_format_get, UserPreferencesSystem_audio_sample_format_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_audio_sample_format_items, 6, 1
};

static EnumPropertyItem rna_UserPreferencesSystem_audio_channels_items[6] = {
	{1, "MONO", 0, "Mono", "Set audio channels to mono"},
	{2, "STEREO", 0, "Stereo", "Set audio channels to stereo"},
	{4, "SURROUND4", 0, "4 Channels", "Set audio channels to 4 channels"},
	{6, "SURROUND51", 0, "5.1 Surround", "Set audio channels to 5.1 surround sound"},
	{8, "SURROUND71", 0, "7.1 Surround", "Set audio channels to 7.1 surround sound"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_audio_channels = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_screencast_fps, (PropertyRNA *)&rna_UserPreferencesSystem_audio_sample_format,
	-1, "audio_channels", 3, "Audio Channels",
	"Audio channel count",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_UserDef_audio_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_audio_channels_get, UserPreferencesSystem_audio_channels_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_audio_channels_items, 5, 1
};

IntPropertyRNA rna_UserPreferencesSystem_screencast_fps = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_screencast_wait_time, (PropertyRNA *)&rna_UserPreferencesSystem_audio_channels,
	-1, "screencast_fps", 8195, "FPS",
	"Frame rate for the screencast to be played back",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, scrcastfps), 1, NULL},
	UserPreferencesSystem_screencast_fps_get, UserPreferencesSystem_screencast_fps_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	10, 100, 10, 100, 1, 0, NULL
};

IntPropertyRNA rna_UserPreferencesSystem_screencast_wait_time = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_text_antialiasing, (PropertyRNA *)&rna_UserPreferencesSystem_screencast_fps,
	-1, "screencast_wait_time", 8195, "Wait Timer (ms)",
	"Time in milliseconds between each frame recorded for screencast",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	offsetof(UserDef, scrcastwait), 1, NULL},
	UserPreferencesSystem_screencast_wait_time_get, UserPreferencesSystem_screencast_wait_time_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	10, 1000, 10, 1000, 1, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_use_text_antialiasing = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_select_method, (PropertyRNA *)&rna_UserPreferencesSystem_screencast_wait_time,
	-1, "use_text_antialiasing", 3, "Text Anti-aliasing",
	"Draw user interface text anti-aliased",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_text_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_text_antialiasing_get, UserPreferencesSystem_use_text_antialiasing_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

static EnumPropertyItem rna_UserPreferencesSystem_select_method_items[4] = {
	{0, "AUTO", 0, "Automatic", ""},
	{2, "GL_SELECT", 0, "OpenGL Select", ""},
	{1, "GL_QUERY", 0, "OpenGL Occlusion Queries", ""},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_select_method = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_multi_sample, (PropertyRNA *)&rna_UserPreferencesSystem_use_text_antialiasing,
	-1, "select_method", 3, "Selection Method",
	"Use OpenGL occlusion queries or selection render mode to accelerate selection",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_select_method_get, UserPreferencesSystem_select_method_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_select_method_items, 3, 0
};

static EnumPropertyItem rna_UserPreferencesSystem_multi_sample_items[6] = {
	{0, "NONE", 0, "No MultiSample", "Do not use OpenGL MultiSample"},
	{2, "2", 0, "MultiSample: 2", "Use 2x OpenGL MultiSample (requires restart)"},
	{4, "4", 0, "MultiSample: 4", "Use 4x OpenGL MultiSample (requires restart)"},
	{8, "8", 0, "MultiSample: 8", "Use 8x OpenGL MultiSample (requires restart)"},
	{16, "16", 0, "MultiSample: 16", "Use 16x OpenGL MultiSample (requires restart)"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_UserPreferencesSystem_multi_sample = {
	{(PropertyRNA *)&rna_UserPreferencesSystem_use_region_overlap, (PropertyRNA *)&rna_UserPreferencesSystem_select_method,
	-1, "multi_sample", 3, "MultiSample",
	"Enable OpenGL multi-sampling, only for systems that support it, requires restart",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_multi_sample_get, UserPreferencesSystem_multi_sample_set, NULL, NULL, NULL, NULL, rna_UserPreferencesSystem_multi_sample_items, 5, 0
};

BoolPropertyRNA rna_UserPreferencesSystem_use_region_overlap = {
	{NULL, (PropertyRNA *)&rna_UserPreferencesSystem_multi_sample,
	-1, "use_region_overlap", 3, "Region Overlap",
	"Draw tool/property regions over the main region, when using Triple Buffer",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_userdef_dpi_update, 0, NULL, NULL,
	0, -1, NULL},
	UserPreferencesSystem_use_region_overlap_get, UserPreferencesSystem_use_region_overlap_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_UserPreferencesSystem_is_occlusion_query_supported_is_supported = {
	{NULL, NULL,
	-1, "is_supported", 11, "Occlusion Query Support",
	"Check if GPU supports Occlusion Queries",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FunctionRNA rna_UserPreferencesSystem_is_occlusion_query_supported_func = {
	{NULL, NULL,
	NULL,
	{(PropertyRNA *)&rna_UserPreferencesSystem_is_occlusion_query_supported_is_supported, (PropertyRNA *)&rna_UserPreferencesSystem_is_occlusion_query_supported_is_supported}},
	"is_occlusion_query_supported", 0, "is_occlusion_query_supported",
	UserPreferencesSystem_is_occlusion_query_supported_call,
	(PropertyRNA *)&rna_UserPreferencesSystem_is_occlusion_query_supported_is_supported
};

StructRNA RNA_UserPreferencesSystem = {
	{(ContainerRNA *)&RNA_Addon, (ContainerRNA *)&RNA_UserPreferencesFilePaths,
	NULL,
	{(PropertyRNA *)&rna_UserPreferencesSystem_rna_properties, (PropertyRNA *)&rna_UserPreferencesSystem_use_region_overlap}},
	"UserPreferencesSystem", NULL, NULL, 0, "System & OpenGL",
	"Graphics driver and operating system settings",
	"*", 17,
	NULL, (PropertyRNA *)&rna_UserPreferencesSystem_rna_properties,
	NULL,
	&RNA_UserPreferences,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{(FunctionRNA *)&rna_UserPreferencesSystem_is_occlusion_query_supported_func, (FunctionRNA *)&rna_UserPreferencesSystem_is_occlusion_query_supported_func}
};

/* Addon */
CollectionPropertyRNA rna_Addon_rna_properties = {
	{(PropertyRNA *)&rna_Addon_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Addon_rna_properties_begin, Addon_rna_properties_next, Addon_rna_properties_end, Addon_rna_properties_get, NULL, NULL, Addon_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_Addon_rna_type = {
	{(PropertyRNA *)&rna_Addon_module, (PropertyRNA *)&rna_Addon_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Addon_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_Addon_module = {
	{(PropertyRNA *)&rna_Addon_preferences, (PropertyRNA *)&rna_Addon_rna_type,
	-1, "module", 262145, "Module",
	"Module name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Addon_module_get, Addon_module_length, Addon_module_set, NULL, NULL, NULL, 64, ""
};

PointerPropertyRNA rna_Addon_preferences = {
	{NULL, (PropertyRNA *)&rna_Addon_module,
	-1, "preferences", 8388608, "preferences",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	Addon_preferences_get, NULL, NULL, NULL,&RNA_AddonPreferences
};

StructRNA RNA_Addon = {
	{(ContainerRNA *)&RNA_AddonPreferences, (ContainerRNA *)&RNA_UserPreferencesSystem,
	NULL,
	{(PropertyRNA *)&rna_Addon_rna_properties, (PropertyRNA *)&rna_Addon_preferences}},
	"Addon", NULL, NULL, 0, "Addon",
	"Python addons to be loaded automatically",
	"*", 17,
	(PropertyRNA *)&rna_Addon_module, (PropertyRNA *)&rna_Addon_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Addon Preferences */
CollectionPropertyRNA rna_AddonPreferences_rna_properties = {
	{(PropertyRNA *)&rna_AddonPreferences_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AddonPreferences_rna_properties_begin, AddonPreferences_rna_properties_next, AddonPreferences_rna_properties_end, AddonPreferences_rna_properties_get, NULL, NULL, AddonPreferences_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_AddonPreferences_rna_type = {
	{(PropertyRNA *)&rna_AddonPreferences_bl_idname, (PropertyRNA *)&rna_AddonPreferences_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AddonPreferences_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_AddonPreferences_bl_idname = {
	{NULL, (PropertyRNA *)&rna_AddonPreferences_rna_type,
	-1, "bl_idname", 262161, "bl_idname",
	"",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {64, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	AddonPreferences_bl_idname_get, AddonPreferences_bl_idname_length, AddonPreferences_bl_idname_set, NULL, NULL, NULL, 64, ""
};

StructRNA RNA_AddonPreferences = {
	{(ContainerRNA *)&RNA_PathCompare, (ContainerRNA *)&RNA_Addon,
	NULL,
	{(PropertyRNA *)&rna_AddonPreferences_rna_properties, (PropertyRNA *)&rna_AddonPreferences_bl_idname}},
	"AddonPreferences", NULL, NULL, 4, "Addon Preferences",
	"",
	"*", 17,
	NULL, (PropertyRNA *)&rna_AddonPreferences_rna_properties,
	NULL,
	NULL,
	rna_AddonPref_refine,
	NULL,
	rna_AddonPref_register,
	rna_AddonPref_unregister,
	NULL,
	rna_AddonPref_idprops,
	{NULL, NULL}
};

/* Path Compare */
CollectionPropertyRNA rna_PathCompare_rna_properties = {
	{(PropertyRNA *)&rna_PathCompare_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PathCompare_rna_properties_begin, PathCompare_rna_properties_next, PathCompare_rna_properties_end, PathCompare_rna_properties_get, NULL, NULL, PathCompare_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_PathCompare_rna_type = {
	{(PropertyRNA *)&rna_PathCompare_path, (PropertyRNA *)&rna_PathCompare_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PathCompare_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_PathCompare_path = {
	{(PropertyRNA *)&rna_PathCompare_use_glob, (PropertyRNA *)&rna_PathCompare_rna_type,
	-1, "path", 262145, "Path",
	"",
	0, "*",
	PROP_STRING, PROP_DIRPATH | PROP_UNIT_NONE, NULL, 0, {768, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PathCompare_path_get, PathCompare_path_length, PathCompare_path_set, NULL, NULL, NULL, 768, ""
};

BoolPropertyRNA rna_PathCompare_use_glob = {
	{NULL, (PropertyRNA *)&rna_PathCompare_path,
	-1, "use_glob", 3, "Use Wildcard",
	"Enable wildcard globbing",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	PathCompare_use_glob_get, PathCompare_use_glob_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_PathCompare = {
	{(ContainerRNA *)&RNA_VectorFont, (ContainerRNA *)&RNA_AddonPreferences,
	NULL,
	{(PropertyRNA *)&rna_PathCompare_rna_properties, (PropertyRNA *)&rna_PathCompare_use_glob}},
	"PathCompare", NULL, NULL, 0, "Path Compare",
	"Match paths against this value",
	"*", 17,
	(PropertyRNA *)&rna_PathCompare_path, (PropertyRNA *)&rna_PathCompare_rna_properties,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

