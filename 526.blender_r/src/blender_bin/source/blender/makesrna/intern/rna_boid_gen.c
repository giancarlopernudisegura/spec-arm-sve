
/* Automatically generated struct definitions for the Data API.
 * Do not edit manually, changes will be overwritten.           */

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

#include "rna_boid.c"

#pragma GCC diagnostic ignored "-Wunused-parameter"

/* Autogenerated Functions */


CollectionPropertyRNA rna_BoidRule_rna_properties;
PointerPropertyRNA rna_BoidRule_rna_type;
StringPropertyRNA rna_BoidRule_name;
EnumPropertyRNA rna_BoidRule_type;
BoolPropertyRNA rna_BoidRule_use_in_air;
BoolPropertyRNA rna_BoidRule_use_on_land;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

PointerPropertyRNA rna_BoidRuleGoal_object;
BoolPropertyRNA rna_BoidRuleGoal_use_predict;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

PointerPropertyRNA rna_BoidRuleAvoid_object;
BoolPropertyRNA rna_BoidRuleAvoid_use_predict;
FloatPropertyRNA rna_BoidRuleAvoid_fear_factor;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid;
BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision;
FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

PointerPropertyRNA rna_BoidRuleFollowLeader_object;
FloatPropertyRNA rna_BoidRuleFollowLeader_distance;
IntPropertyRNA rna_BoidRuleFollowLeader_queue_count;
BoolPropertyRNA rna_BoidRuleFollowLeader_use_line;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

FloatPropertyRNA rna_BoidRuleAverageSpeed_wander;
FloatPropertyRNA rna_BoidRuleAverageSpeed_level;
FloatPropertyRNA rna_BoidRuleAverageSpeed_speed;


extern CollectionPropertyRNA rna_BoidRule_rna_properties;
extern PointerPropertyRNA rna_BoidRule_rna_type;
extern StringPropertyRNA rna_BoidRule_name;
extern EnumPropertyRNA rna_BoidRule_type;
extern BoolPropertyRNA rna_BoidRule_use_in_air;
extern BoolPropertyRNA rna_BoidRule_use_on_land;

FloatPropertyRNA rna_BoidRuleFight_distance;
FloatPropertyRNA rna_BoidRuleFight_flee_distance;


CollectionPropertyRNA rna_BoidState_rna_properties;
PointerPropertyRNA rna_BoidState_rna_type;
StringPropertyRNA rna_BoidState_name;
EnumPropertyRNA rna_BoidState_ruleset_type;
CollectionPropertyRNA rna_BoidState_rules;
PointerPropertyRNA rna_BoidState_active_boid_rule;
IntPropertyRNA rna_BoidState_active_boid_rule_index;
FloatPropertyRNA rna_BoidState_rule_fuzzy;
FloatPropertyRNA rna_BoidState_volume;
FloatPropertyRNA rna_BoidState_falloff;


CollectionPropertyRNA rna_BoidSettings_rna_properties;
PointerPropertyRNA rna_BoidSettings_rna_type;
FloatPropertyRNA rna_BoidSettings_land_smooth;
FloatPropertyRNA rna_BoidSettings_bank;
FloatPropertyRNA rna_BoidSettings_pitch;
FloatPropertyRNA rna_BoidSettings_height;
CollectionPropertyRNA rna_BoidSettings_states;
PointerPropertyRNA rna_BoidSettings_active_boid_state;
IntPropertyRNA rna_BoidSettings_active_boid_state_index;
FloatPropertyRNA rna_BoidSettings_health;
FloatPropertyRNA rna_BoidSettings_strength;
FloatPropertyRNA rna_BoidSettings_aggression;
FloatPropertyRNA rna_BoidSettings_accuracy;
FloatPropertyRNA rna_BoidSettings_range;
FloatPropertyRNA rna_BoidSettings_air_speed_min;
FloatPropertyRNA rna_BoidSettings_air_speed_max;
FloatPropertyRNA rna_BoidSettings_air_acc_max;
FloatPropertyRNA rna_BoidSettings_air_ave_max;
FloatPropertyRNA rna_BoidSettings_air_personal_space;
FloatPropertyRNA rna_BoidSettings_land_jump_speed;
FloatPropertyRNA rna_BoidSettings_land_speed_max;
FloatPropertyRNA rna_BoidSettings_land_acc_max;
FloatPropertyRNA rna_BoidSettings_land_ave_max;
FloatPropertyRNA rna_BoidSettings_land_personal_space;
FloatPropertyRNA rna_BoidSettings_land_stick_force;
BoolPropertyRNA rna_BoidSettings_use_flight;
BoolPropertyRNA rna_BoidSettings_use_land;
BoolPropertyRNA rna_BoidSettings_use_climb;

static PointerRNA BoidRule_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoidRule_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoidRule_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BoidRule_rna_properties_get(iter);
}

void BoidRule_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BoidRule_rna_properties_get(iter);
}

void BoidRule_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidRule_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoidRule_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BoidRule_name_get(PointerRNA *ptr, char *value)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 32);
}

int BoidRule_name_length(PointerRNA *ptr)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	return strlen(data->name);
}

void BoidRule_name_set(PointerRNA *ptr, const char *value)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 32);
}

int BoidRule_type_get(PointerRNA *ptr)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	return (int)(data->type);
}

int BoidRule_use_in_air_get(PointerRNA *ptr)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	return (((data->flag) & 4) != 0);
}

void BoidRule_use_in_air_set(PointerRNA *ptr, int value)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	if (value) data->flag |= 4;
	else data->flag &= ~4;
}

int BoidRule_use_on_land_get(PointerRNA *ptr)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	return (((data->flag) & 8) != 0);
}

void BoidRule_use_on_land_set(PointerRNA *ptr, int value)
{
	BoidRule *data = (BoidRule *)(ptr->data);
	if (value) data->flag |= 8;
	else data->flag &= ~8;
}

PointerRNA BoidRuleGoal_object_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleGoal_object_set(PointerRNA *ptr, PointerRNA value)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

int BoidRuleGoal_use_predict_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleGoal_use_predict_set(PointerRNA *ptr, int value)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	if (value) data->options |= 1;
	else data->options &= ~1;
}

PointerRNA BoidRuleAvoid_object_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleAvoid_object_set(PointerRNA *ptr, PointerRNA value)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

int BoidRuleAvoid_use_predict_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleAvoid_use_predict_set(PointerRNA *ptr, int value)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	if (value) data->options |= 1;
	else data->options &= ~1;
}

float BoidRuleAvoid_fear_factor_get(PointerRNA *ptr)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	return (float)(data->fear_factor);
}

void BoidRuleAvoid_fear_factor_set(PointerRNA *ptr, float value)
{
	BoidRuleGoalAvoid *data = (BoidRuleGoalAvoid *)(ptr->data);
	data->fear_factor = CLAMPIS(value, 0.0f, 100.0f);
}

int BoidRuleAvoidCollision_use_avoid_get(PointerRNA *ptr)
{
	BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleAvoidCollision_use_avoid_set(PointerRNA *ptr, int value)
{
	BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
	if (value) data->options |= 1;
	else data->options &= ~1;
}

int BoidRuleAvoidCollision_use_avoid_collision_get(PointerRNA *ptr)
{
	BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
	return (((data->options) & 2) != 0);
}

void BoidRuleAvoidCollision_use_avoid_collision_set(PointerRNA *ptr, int value)
{
	BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
	if (value) data->options |= 2;
	else data->options &= ~2;
}

float BoidRuleAvoidCollision_look_ahead_get(PointerRNA *ptr)
{
	BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
	return (float)(data->look_ahead);
}

void BoidRuleAvoidCollision_look_ahead_set(PointerRNA *ptr, float value)
{
	BoidRuleAvoidCollision *data = (BoidRuleAvoidCollision *)(ptr->data);
	data->look_ahead = CLAMPIS(value, 0.0f, 100.0f);
}

PointerRNA BoidRuleFollowLeader_object_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	return rna_pointer_inherit_refine(ptr, &RNA_Object, data->ob);
}

void BoidRuleFollowLeader_object_set(PointerRNA *ptr, PointerRNA value)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	if (value.data)
		id_lib_extern((ID *)value.data);

	data->ob = value.data;
}

float BoidRuleFollowLeader_distance_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	return (float)(data->distance);
}

void BoidRuleFollowLeader_distance_set(PointerRNA *ptr, float value)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	data->distance = CLAMPIS(value, 0.0f, 100.0f);
}

int BoidRuleFollowLeader_queue_count_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	return (int)(data->queue_size);
}

void BoidRuleFollowLeader_queue_count_set(PointerRNA *ptr, int value)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	data->queue_size = CLAMPIS(value, 0, 100);
}

int BoidRuleFollowLeader_use_line_get(PointerRNA *ptr)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidRuleFollowLeader_use_line_set(PointerRNA *ptr, int value)
{
	BoidRuleFollowLeader *data = (BoidRuleFollowLeader *)(ptr->data);
	if (value) data->options |= 1;
	else data->options &= ~1;
}

float BoidRuleAverageSpeed_wander_get(PointerRNA *ptr)
{
	BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
	return (float)(data->wander);
}

void BoidRuleAverageSpeed_wander_set(PointerRNA *ptr, float value)
{
	BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
	data->wander = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_level_get(PointerRNA *ptr)
{
	BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
	return (float)(data->level);
}

void BoidRuleAverageSpeed_level_set(PointerRNA *ptr, float value)
{
	BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
	data->level = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleAverageSpeed_speed_get(PointerRNA *ptr)
{
	BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
	return (float)(data->speed);
}

void BoidRuleAverageSpeed_speed_set(PointerRNA *ptr, float value)
{
	BoidRuleAverageSpeed *data = (BoidRuleAverageSpeed *)(ptr->data);
	data->speed = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidRuleFight_distance_get(PointerRNA *ptr)
{
	BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
	return (float)(data->distance);
}

void BoidRuleFight_distance_set(PointerRNA *ptr, float value)
{
	BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
	data->distance = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidRuleFight_flee_distance_get(PointerRNA *ptr)
{
	BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
	return (float)(data->flee_distance);
}

void BoidRuleFight_flee_distance_set(PointerRNA *ptr, float value)
{
	BoidRuleFight *data = (BoidRuleFight *)(ptr->data);
	data->flee_distance = CLAMPIS(value, 0.0f, 100.0f);
}

static PointerRNA BoidState_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoidState_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoidState_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BoidState_rna_properties_get(iter);
}

void BoidState_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BoidState_rna_properties_get(iter);
}

void BoidState_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidState_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoidState_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

void BoidState_name_get(PointerRNA *ptr, char *value)
{
	BoidState *data = (BoidState *)(ptr->data);
	BLI_strncpy_utf8(value, data->name, 32);
}

int BoidState_name_length(PointerRNA *ptr)
{
	BoidState *data = (BoidState *)(ptr->data);
	return strlen(data->name);
}

void BoidState_name_set(PointerRNA *ptr, const char *value)
{
	BoidState *data = (BoidState *)(ptr->data);
	BLI_strncpy_utf8(data->name, value, 32);
}

int BoidState_ruleset_type_get(PointerRNA *ptr)
{
	BoidState *data = (BoidState *)(ptr->data);
	return (int)(data->ruleset_type);
}

void BoidState_ruleset_type_set(PointerRNA *ptr, int value)
{
	BoidState *data = (BoidState *)(ptr->data);
	data->ruleset_type = value;
}

static PointerRNA BoidState_rules_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidRule, rna_iterator_listbase_get(iter));
}

void BoidState_rules_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	BoidState *data = (BoidState *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoidState_rules;

	rna_iterator_listbase_begin(iter, &data->rules, NULL);

	if (iter->valid)
		iter->ptr = BoidState_rules_get(iter);
}

void BoidState_rules_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BoidState_rules_get(iter);
}

void BoidState_rules_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidState_rules_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	BoidState_rules_begin(&iter, ptr);

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
		if (found) *r_ptr = BoidState_rules_get(&iter);
	}

	BoidState_rules_end(&iter);

	return found;
}

int BoidState_rules_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int BoidRule_name_length(PointerRNA *);
	extern void BoidRule_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	BoidState_rules_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = BoidRule_name_length(&iter.ptr);
			if (namelen < 1024) {
				BoidRule_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				BoidRule_name_get(&iter.ptr, name);
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
		BoidState_rules_next(&iter);
	}
	BoidState_rules_end(&iter);

	return found;
}

PointerRNA BoidState_active_boid_rule_get(PointerRNA *ptr)
{
	return rna_BoidState_active_boid_rule_get(ptr);
}

int BoidState_active_boid_rule_index_get(PointerRNA *ptr)
{
	return rna_BoidState_active_boid_rule_index_get(ptr);
}

void BoidState_active_boid_rule_index_set(PointerRNA *ptr, int value)
{
	rna_BoidState_active_boid_rule_index_set(ptr, value);
}

float BoidState_rule_fuzzy_get(PointerRNA *ptr)
{
	BoidState *data = (BoidState *)(ptr->data);
	return (float)(data->rule_fuzziness);
}

void BoidState_rule_fuzzy_set(PointerRNA *ptr, float value)
{
	BoidState *data = (BoidState *)(ptr->data);
	data->rule_fuzziness = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidState_volume_get(PointerRNA *ptr)
{
	BoidState *data = (BoidState *)(ptr->data);
	return (float)(data->volume);
}

void BoidState_volume_set(PointerRNA *ptr, float value)
{
	BoidState *data = (BoidState *)(ptr->data);
	data->volume = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidState_falloff_get(PointerRNA *ptr)
{
	BoidState *data = (BoidState *)(ptr->data);
	return (float)(data->falloff);
}

void BoidState_falloff_set(PointerRNA *ptr, float value)
{
	BoidState *data = (BoidState *)(ptr->data);
	data->falloff = CLAMPIS(value, 0.0f, 10.0f);
}

static PointerRNA BoidSettings_rna_properties_get(CollectionPropertyIterator *iter)
{
	return rna_builtin_properties_get(iter);
}

void BoidSettings_rna_properties_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoidSettings_rna_properties;

	rna_builtin_properties_begin(iter, ptr);

	if (iter->valid)
		iter->ptr = BoidSettings_rna_properties_get(iter);
}

void BoidSettings_rna_properties_next(CollectionPropertyIterator *iter)
{
	rna_builtin_properties_next(iter);

	if (iter->valid)
		iter->ptr = BoidSettings_rna_properties_get(iter);
}

void BoidSettings_rna_properties_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidSettings_rna_properties_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	return rna_builtin_properties_lookup_string(ptr, key, r_ptr);
}

PointerRNA BoidSettings_rna_type_get(PointerRNA *ptr)
{
	return rna_builtin_type_get(ptr);
}

float BoidSettings_land_smooth_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->landing_smoothness);
}

void BoidSettings_land_smooth_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->landing_smoothness = CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_bank_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->banking);
}

void BoidSettings_bank_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->banking = CLAMPIS(value, 0.0f, 2.0f);
}

float BoidSettings_pitch_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->pitch);
}

void BoidSettings_pitch_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->pitch = CLAMPIS(value, 0.0f, 2.0f);
}

float BoidSettings_height_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->height);
}

void BoidSettings_height_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->height = CLAMPIS(value, 0.0f, 2.0f);
}

static PointerRNA BoidSettings_states_get(CollectionPropertyIterator *iter)
{
	return rna_pointer_inherit_refine(&iter->parent, &RNA_BoidState, rna_iterator_listbase_get(iter));
}

void BoidSettings_states_begin(CollectionPropertyIterator *iter, PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);

	memset(iter, 0, sizeof(*iter));
	iter->parent = *ptr;
	iter->prop = (PropertyRNA *)&rna_BoidSettings_states;

	rna_iterator_listbase_begin(iter, &data->states, NULL);

	if (iter->valid)
		iter->ptr = BoidSettings_states_get(iter);
}

void BoidSettings_states_next(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_next(iter);

	if (iter->valid)
		iter->ptr = BoidSettings_states_get(iter);
}

void BoidSettings_states_end(CollectionPropertyIterator *iter)
{
	rna_iterator_listbase_end(iter);
}

int BoidSettings_states_lookup_int(PointerRNA *ptr, int index, PointerRNA *r_ptr)
{
	int found = 0;
	CollectionPropertyIterator iter;

	BoidSettings_states_begin(&iter, ptr);

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
		if (found) *r_ptr = BoidSettings_states_get(&iter);
	}

	BoidSettings_states_end(&iter);

	return found;
}

int BoidSettings_states_lookup_string(PointerRNA *ptr, const char *key, PointerRNA *r_ptr)
{
	extern int BoidState_name_length(PointerRNA *);
	extern void BoidState_name_get(PointerRNA *, char *);

	bool found = false;
	CollectionPropertyIterator iter;
	char namebuf[1024];
	char *name;

	BoidSettings_states_begin(&iter, ptr);

	while (iter.valid) {
		if (iter.ptr.data) {
			int namelen = BoidState_name_length(&iter.ptr);
			if (namelen < 1024) {
				BoidState_name_get(&iter.ptr, namebuf);
				if (strcmp(namebuf, key) == 0) {
					found = true;
					*r_ptr = iter.ptr;
					break;
				}
			}
			else {
				name = MEM_mallocN(namelen+1, "name string");
				BoidState_name_get(&iter.ptr, name);
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
		BoidSettings_states_next(&iter);
	}
	BoidSettings_states_end(&iter);

	return found;
}

PointerRNA BoidSettings_active_boid_state_get(PointerRNA *ptr)
{
	return rna_BoidSettings_active_boid_state_get(ptr);
}

int BoidSettings_active_boid_state_index_get(PointerRNA *ptr)
{
	return rna_BoidSettings_active_boid_state_index_get(ptr);
}

void BoidSettings_active_boid_state_index_set(PointerRNA *ptr, int value)
{
	rna_BoidSettings_active_boid_state_index_set(ptr, value);
}

float BoidSettings_health_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->health);
}

void BoidSettings_health_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->health = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_strength_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->strength);
}

void BoidSettings_strength_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->strength = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_aggression_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->aggression);
}

void BoidSettings_aggression_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->aggression = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_accuracy_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->accuracy);
}

void BoidSettings_accuracy_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->accuracy = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_range_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->range);
}

void BoidSettings_range_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->range = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_air_speed_min_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->air_min_speed);
}

void BoidSettings_air_speed_min_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->air_min_speed = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_speed_max_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->air_max_speed);
}

void BoidSettings_air_speed_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->air_max_speed = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_air_acc_max_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->air_max_acc);
}

void BoidSettings_air_acc_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->air_max_acc = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_ave_max_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->air_max_ave);
}

void BoidSettings_air_ave_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->air_max_ave = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_air_personal_space_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->air_personal_space);
}

void BoidSettings_air_personal_space_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->air_personal_space = CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_land_jump_speed_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->land_jump_speed);
}

void BoidSettings_land_jump_speed_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->land_jump_speed = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_land_speed_max_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->land_max_speed);
}

void BoidSettings_land_speed_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->land_max_speed = CLAMPIS(value, 0.0f, 100.0f);
}

float BoidSettings_land_acc_max_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->land_max_acc);
}

void BoidSettings_land_acc_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->land_max_acc = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_land_ave_max_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->land_max_ave);
}

void BoidSettings_land_ave_max_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->land_max_ave = CLAMPIS(value, 0.0f, 1.0f);
}

float BoidSettings_land_personal_space_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->land_personal_space);
}

void BoidSettings_land_personal_space_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->land_personal_space = CLAMPIS(value, 0.0f, 10.0f);
}

float BoidSettings_land_stick_force_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (float)(data->land_stick_force);
}

void BoidSettings_land_stick_force_set(PointerRNA *ptr, float value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	data->land_stick_force = CLAMPIS(value, 0.0f, 1000.0f);
}

int BoidSettings_use_flight_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (((data->options) & 1) != 0);
}

void BoidSettings_use_flight_set(PointerRNA *ptr, int value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	if (value) data->options |= 1;
	else data->options &= ~1;
}

int BoidSettings_use_land_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (((data->options) & 2) != 0);
}

void BoidSettings_use_land_set(PointerRNA *ptr, int value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	if (value) data->options |= 2;
	else data->options &= ~2;
}

int BoidSettings_use_climb_get(PointerRNA *ptr)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	return (((data->options) & 4) != 0);
}

void BoidSettings_use_climb_set(PointerRNA *ptr, int value)
{
	BoidSettings *data = (BoidSettings *)(ptr->data);
	if (value) data->options |= 4;
	else data->options &= ~4;
}










/* Boid Rule */
CollectionPropertyRNA rna_BoidRule_rna_properties = {
	{(PropertyRNA *)&rna_BoidRule_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_rna_properties_begin, BoidRule_rna_properties_next, BoidRule_rna_properties_end, BoidRule_rna_properties_get, NULL, NULL, BoidRule_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoidRule_rna_type = {
	{(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoidRule_name = {
	{(PropertyRNA *)&rna_BoidRule_type, (PropertyRNA *)&rna_BoidRule_rna_type,
	-1, "name", 262145, "Name",
	"Boid rule name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_name_get, BoidRule_name_length, BoidRule_name_set, NULL, NULL, NULL, 32, ""
};

static EnumPropertyItem rna_BoidRule_type_items[9] = {
	{1, "GOAL", 0, "Goal", "Go to assigned object or loudest assigned signal source"},
	{2, "AVOID", 0, "Avoid", "Get away from assigned object or loudest assigned signal source"},
	{3, "AVOID_COLLISION", 0, "Avoid Collision", "Maneuver to avoid collisions with other boids and deflector objects in near future"},
	{4, "SEPARATE", 0, "Separate", "Keep from going through other boids"},
	{5, "FLOCK", 0, "Flock", "Move to center of neighbors and match their velocity"},
	{6, "FOLLOW_LEADER", 0, "Follow Leader", "Follow a boid or assigned object"},
	{7, "AVERAGE_SPEED", 0, "Average Speed", "Maintain speed, flight level or wander"},
	{8, "FIGHT", 0, "Fight", "Go to closest enemy and attack when in range"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BoidRule_type = {
	{(PropertyRNA *)&rna_BoidRule_use_in_air, (PropertyRNA *)&rna_BoidRule_name,
	-1, "type", 2, "Type",
	"",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_type_get, NULL, NULL, NULL, NULL, NULL, rna_BoidRule_type_items, 8, 1
};

BoolPropertyRNA rna_BoidRule_use_in_air = {
	{(PropertyRNA *)&rna_BoidRule_use_on_land, (PropertyRNA *)&rna_BoidRule_type,
	-1, "use_in_air", 3, "In Air",
	"Use rule when boid is flying",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_use_in_air_get, BoidRule_use_in_air_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidRule_use_on_land = {
	{NULL, (PropertyRNA *)&rna_BoidRule_use_in_air,
	-1, "use_on_land", 3, "On Land",
	"Use rule when boid is on land",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRule_use_on_land_get, BoidRule_use_on_land_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRule = {
	{(ContainerRNA *)&RNA_BoidRuleGoal, (ContainerRNA *)&RNA_EditBone,
	NULL,
	{(PropertyRNA *)&rna_BoidRule_rna_properties, (PropertyRNA *)&rna_BoidRule_use_on_land}},
	"BoidRule", NULL, NULL, 4, "Boid Rule",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	NULL,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Goal */
PointerPropertyRNA rna_BoidRuleGoal_object = {
	{(PropertyRNA *)&rna_BoidRuleGoal_use_predict, NULL,
	-1, "object", 8388609, "Object",
	"Goal object",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleGoal_object_get, BoidRuleGoal_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_BoidRuleGoal_use_predict = {
	{NULL, (PropertyRNA *)&rna_BoidRuleGoal_object,
	-1, "use_predict", 3, "Predict",
	"Predict target movement",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleGoal_use_predict_get, BoidRuleGoal_use_predict_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRuleGoal = {
	{(ContainerRNA *)&RNA_BoidRuleAvoid, (ContainerRNA *)&RNA_BoidRule,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleGoal_object, (PropertyRNA *)&rna_BoidRuleGoal_use_predict}},
	"BoidRuleGoal", NULL, NULL, 4, "Goal",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Avoid */
PointerPropertyRNA rna_BoidRuleAvoid_object = {
	{(PropertyRNA *)&rna_BoidRuleAvoid_use_predict, NULL,
	-1, "object", 8388609, "Object",
	"Object to avoid",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoid_object_get, BoidRuleAvoid_object_set, NULL, NULL,&RNA_Object
};

BoolPropertyRNA rna_BoidRuleAvoid_use_predict = {
	{(PropertyRNA *)&rna_BoidRuleAvoid_fear_factor, (PropertyRNA *)&rna_BoidRuleAvoid_object,
	-1, "use_predict", 3, "Predict",
	"Predict target movement",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoid_use_predict_get, BoidRuleAvoid_use_predict_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BoidRuleAvoid_fear_factor = {
	{NULL, (PropertyRNA *)&rna_BoidRuleAvoid_use_predict,
	-1, "fear_factor", 8195, "Fear factor",
	"Avoid object if danger from it is above this threshold",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleGoalAvoid, fear_factor), 4, NULL},
	BoidRuleAvoid_fear_factor_get, BoidRuleAvoid_fear_factor_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAvoid = {
	{(ContainerRNA *)&RNA_BoidRuleAvoidCollision, (ContainerRNA *)&RNA_BoidRuleGoal,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleAvoid_object, (PropertyRNA *)&rna_BoidRuleAvoid_fear_factor}},
	"BoidRuleAvoid", NULL, NULL, 4, "Avoid",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Avoid Collision */
BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid = {
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid_collision, NULL,
	-1, "use_avoid", 3, "Boids",
	"Avoid collision with other boids",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoidCollision_use_avoid_get, BoidRuleAvoidCollision_use_avoid_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidRuleAvoidCollision_use_avoid_collision = {
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_look_ahead, (PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid,
	-1, "use_avoid_collision", 3, "Deflectors",
	"Avoid collision with deflector objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleAvoidCollision_use_avoid_collision_get, BoidRuleAvoidCollision_use_avoid_collision_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

FloatPropertyRNA rna_BoidRuleAvoidCollision_look_ahead = {
	{NULL, (PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid_collision,
	-1, "look_ahead", 8195, "Look ahead",
	"Time to look ahead in seconds",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAvoidCollision, look_ahead), 4, NULL},
	BoidRuleAvoidCollision_look_ahead_get, BoidRuleAvoidCollision_look_ahead_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAvoidCollision = {
	{(ContainerRNA *)&RNA_BoidRuleFollowLeader, (ContainerRNA *)&RNA_BoidRuleAvoid,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleAvoidCollision_use_avoid, (PropertyRNA *)&rna_BoidRuleAvoidCollision_look_ahead}},
	"BoidRuleAvoidCollision", NULL, NULL, 4, "Avoid Collision",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Follow Leader */
PointerPropertyRNA rna_BoidRuleFollowLeader_object = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_distance, NULL,
	-1, "object", 8388609, "Object",
	"Follow this object instead of a boid",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset_deps, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleFollowLeader_object_get, BoidRuleFollowLeader_object_set, NULL, NULL,&RNA_Object
};

FloatPropertyRNA rna_BoidRuleFollowLeader_distance = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_queue_count, (PropertyRNA *)&rna_BoidRuleFollowLeader_object,
	-1, "distance", 8195, "Distance",
	"Distance behind leader to follow",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFollowLeader, distance), 4, NULL},
	BoidRuleFollowLeader_distance_get, BoidRuleFollowLeader_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

IntPropertyRNA rna_BoidRuleFollowLeader_queue_count = {
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_use_line, (PropertyRNA *)&rna_BoidRuleFollowLeader_distance,
	-1, "queue_count", 8195, "Queue Size",
	"How many boids in a line",
	0, "*",
	PROP_INT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFollowLeader, queue_size), 0, NULL},
	BoidRuleFollowLeader_queue_count_get, BoidRuleFollowLeader_queue_count_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL,
	0, 100, 0, 100, 1, 0, NULL
};

BoolPropertyRNA rna_BoidRuleFollowLeader_use_line = {
	{NULL, (PropertyRNA *)&rna_BoidRuleFollowLeader_queue_count,
	-1, "use_line", 3, "Line",
	"Follow leader in a line",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidRuleFollowLeader_use_line_get, BoidRuleFollowLeader_use_line_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidRuleFollowLeader = {
	{(ContainerRNA *)&RNA_BoidRuleAverageSpeed, (ContainerRNA *)&RNA_BoidRuleAvoidCollision,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleFollowLeader_object, (PropertyRNA *)&rna_BoidRuleFollowLeader_use_line}},
	"BoidRuleFollowLeader", NULL, NULL, 4, "Follow Leader",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Average Speed */
FloatPropertyRNA rna_BoidRuleAverageSpeed_wander = {
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_level, NULL,
	-1, "wander", 8195, "Wander",
	"How fast velocity\'s direction is randomized",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAverageSpeed, wander), 4, NULL},
	BoidRuleAverageSpeed_wander_get, BoidRuleAverageSpeed_wander_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_level = {
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_speed, (PropertyRNA *)&rna_BoidRuleAverageSpeed_wander,
	-1, "level", 8195, "Level",
	"How much velocity\'s z-component is kept constant",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAverageSpeed, level), 4, NULL},
	BoidRuleAverageSpeed_level_get, BoidRuleAverageSpeed_level_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleAverageSpeed_speed = {
	{NULL, (PropertyRNA *)&rna_BoidRuleAverageSpeed_level,
	-1, "speed", 8195, "Speed",
	"Percentage of maximum speed",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleAverageSpeed, speed), 4, NULL},
	BoidRuleAverageSpeed_speed_get, BoidRuleAverageSpeed_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleAverageSpeed = {
	{(ContainerRNA *)&RNA_BoidRuleFight, (ContainerRNA *)&RNA_BoidRuleFollowLeader,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleAverageSpeed_wander, (PropertyRNA *)&rna_BoidRuleAverageSpeed_speed}},
	"BoidRuleAverageSpeed", NULL, NULL, 4, "Average Speed",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Fight */
FloatPropertyRNA rna_BoidRuleFight_distance = {
	{(PropertyRNA *)&rna_BoidRuleFight_flee_distance, NULL,
	-1, "distance", 8195, "Fight Distance",
	"Attack boids at max this distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFight, distance), 4, NULL},
	BoidRuleFight_distance_get, BoidRuleFight_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidRuleFight_flee_distance = {
	{NULL, (PropertyRNA *)&rna_BoidRuleFight_distance,
	-1, "flee_distance", 8195, "Flee Distance",
	"Flee to this distance",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidRuleFight, flee_distance), 4, NULL},
	BoidRuleFight_flee_distance_get, BoidRuleFight_flee_distance_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidRuleFight = {
	{(ContainerRNA *)&RNA_BoidState, (ContainerRNA *)&RNA_BoidRuleAverageSpeed,
	NULL,
	{(PropertyRNA *)&rna_BoidRuleFight_distance, (PropertyRNA *)&rna_BoidRuleFight_flee_distance}},
	"BoidRuleFight", NULL, NULL, 4, "Fight",
	"",
	"*", 17,
	(PropertyRNA *)&rna_BoidRule_name, (PropertyRNA *)&rna_BoidRule_rna_properties,
	&RNA_BoidRule,
	NULL,
	rna_BoidRule_refine,
	rna_BoidRule_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

/* Boid State */
CollectionPropertyRNA rna_BoidState_rna_properties = {
	{(PropertyRNA *)&rna_BoidState_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_rna_properties_begin, BoidState_rna_properties_next, BoidState_rna_properties_end, BoidState_rna_properties_get, NULL, NULL, BoidState_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoidState_rna_type = {
	{(PropertyRNA *)&rna_BoidState_name, (PropertyRNA *)&rna_BoidState_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

StringPropertyRNA rna_BoidState_name = {
	{(PropertyRNA *)&rna_BoidState_ruleset_type, (PropertyRNA *)&rna_BoidState_rna_type,
	-1, "name", 262145, "Name",
	"Boid state name",
	0, "*",
	PROP_STRING, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {32, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_name_get, BoidState_name_length, BoidState_name_set, NULL, NULL, NULL, 32, ""
};

static EnumPropertyItem rna_BoidState_ruleset_type_items[4] = {
	{0, "FUZZY", 0, "Fuzzy", "Rules are gone through top to bottom (only the first rule which effect is above fuzziness threshold is evaluated)"},
	{1, "RANDOM", 0, "Random", "A random rule is selected for each boid"},
	{2, "AVERAGE", 0, "Average", "All rules are averaged"},
	{0, NULL, 0, NULL, NULL}
};

EnumPropertyRNA rna_BoidState_ruleset_type = {
	{(PropertyRNA *)&rna_BoidState_rules, (PropertyRNA *)&rna_BoidState_name,
	-1, "ruleset_type", 3, "Rule Evaluation",
	"How the rules in the list are evaluated",
	0, "*",
	PROP_ENUM, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_ruleset_type_get, BoidState_ruleset_type_set, NULL, NULL, NULL, NULL, rna_BoidState_ruleset_type_items, 3, 0
};

CollectionPropertyRNA rna_BoidState_rules = {
	{(PropertyRNA *)&rna_BoidState_active_boid_rule, (PropertyRNA *)&rna_BoidState_ruleset_type,
	-1, "rules", 0, "Boid Rules",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_rules_begin, BoidState_rules_next, BoidState_rules_end, BoidState_rules_get, NULL, BoidState_rules_lookup_int, BoidState_rules_lookup_string, NULL, &RNA_BoidRule
};

PointerPropertyRNA rna_BoidState_active_boid_rule = {
	{(PropertyRNA *)&rna_BoidState_active_boid_rule_index, (PropertyRNA *)&rna_BoidState_rules,
	-1, "active_boid_rule", 8388608, "Active Boid Rule",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_active_boid_rule_get, NULL, NULL, NULL,&RNA_BoidRule
};

IntPropertyRNA rna_BoidState_active_boid_rule_index = {
	{(PropertyRNA *)&rna_BoidState_rule_fuzzy, (PropertyRNA *)&rna_BoidState_active_boid_rule,
	-1, "active_boid_rule_index", 3, "Active Boid Rule Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidState_active_boid_rule_index_get, BoidState_active_boid_rule_index_set, NULL, NULL, rna_BoidState_active_boid_rule_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_BoidState_rule_fuzzy = {
	{(PropertyRNA *)&rna_BoidState_volume, (PropertyRNA *)&rna_BoidState_active_boid_rule_index,
	-1, "rule_fuzzy", 8195, "Rule Fuzziness",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidState, rule_fuzziness), 4, NULL},
	BoidState_rule_fuzzy_get, BoidState_rule_fuzzy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidState_volume = {
	{(PropertyRNA *)&rna_BoidState_falloff, (PropertyRNA *)&rna_BoidState_rule_fuzzy,
	-1, "volume", 8195, "Volume",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidState, volume), 4, NULL},
	BoidState_volume_get, BoidState_volume_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidState_falloff = {
	{NULL, (PropertyRNA *)&rna_BoidState_volume,
	-1, "falloff", 8195, "Falloff",
	"",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidState, falloff), 4, NULL},
	BoidState_falloff_get, BoidState_falloff_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

StructRNA RNA_BoidState = {
	{(ContainerRNA *)&RNA_BoidSettings, (ContainerRNA *)&RNA_BoidRuleFight,
	NULL,
	{(PropertyRNA *)&rna_BoidState_rna_properties, (PropertyRNA *)&rna_BoidState_falloff}},
	"BoidState", NULL, NULL, 4, "Boid State",
	"Boid state for boid physics",
	"*", 17,
	(PropertyRNA *)&rna_BoidState_name, (PropertyRNA *)&rna_BoidState_rna_properties,
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

/* Boid Settings */
CollectionPropertyRNA rna_BoidSettings_rna_properties = {
	{(PropertyRNA *)&rna_BoidSettings_rna_type, NULL,
	-1, "rna_properties", 128, "Properties",
	"RNA property collection",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_rna_properties_begin, BoidSettings_rna_properties_next, BoidSettings_rna_properties_end, BoidSettings_rna_properties_get, NULL, NULL, BoidSettings_rna_properties_lookup_string, NULL, &RNA_Property
};

PointerPropertyRNA rna_BoidSettings_rna_type = {
	{(PropertyRNA *)&rna_BoidSettings_land_smooth, (PropertyRNA *)&rna_BoidSettings_rna_properties,
	-1, "rna_type", 8912896, "RNA",
	"RNA type definition",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_rna_type_get, NULL, NULL, NULL,&RNA_Struct
};

FloatPropertyRNA rna_BoidSettings_land_smooth = {
	{(PropertyRNA *)&rna_BoidSettings_bank, (PropertyRNA *)&rna_BoidSettings_rna_type,
	-1, "land_smooth", 8195, "Landing Smoothness",
	"How smoothly the boids land",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, landing_smoothness), 4, NULL},
	BoidSettings_land_smooth_get, BoidSettings_land_smooth_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_bank = {
	{(PropertyRNA *)&rna_BoidSettings_pitch, (PropertyRNA *)&rna_BoidSettings_land_smooth,
	-1, "bank", 8195, "Banking",
	"Amount of rotation around velocity vector on turns",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, banking), 4, NULL},
	BoidSettings_bank_get, BoidSettings_bank_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_pitch = {
	{(PropertyRNA *)&rna_BoidSettings_height, (PropertyRNA *)&rna_BoidSettings_bank,
	-1, "pitch", 8195, "Pitch",
	"Amount of rotation around side vector",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, pitch), 4, NULL},
	BoidSettings_pitch_get, BoidSettings_pitch_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_height = {
	{(PropertyRNA *)&rna_BoidSettings_states, (PropertyRNA *)&rna_BoidSettings_pitch,
	-1, "height", 8195, "Height",
	"Boid height relative to particle size",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, height), 4, NULL},
	BoidSettings_height_get, BoidSettings_height_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 2.0f, 0.0f, 2.0f, 10.0f, 3, 0.0f, NULL
};

CollectionPropertyRNA rna_BoidSettings_states = {
	{(PropertyRNA *)&rna_BoidSettings_active_boid_state, (PropertyRNA *)&rna_BoidSettings_height,
	-1, "states", 0, "Boid States",
	"",
	0, "*",
	PROP_COLLECTION, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_states_begin, BoidSettings_states_next, BoidSettings_states_end, BoidSettings_states_get, NULL, BoidSettings_states_lookup_int, BoidSettings_states_lookup_string, NULL, &RNA_BoidState
};

PointerPropertyRNA rna_BoidSettings_active_boid_state = {
	{(PropertyRNA *)&rna_BoidSettings_active_boid_state_index, (PropertyRNA *)&rna_BoidSettings_states,
	-1, "active_boid_state", 8388608, "Active Boid Rule",
	"",
	0, "*",
	PROP_POINTER, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_active_boid_state_get, NULL, NULL, NULL,&RNA_BoidRule
};

IntPropertyRNA rna_BoidSettings_active_boid_state_index = {
	{(PropertyRNA *)&rna_BoidSettings_health, (PropertyRNA *)&rna_BoidSettings_active_boid_state,
	-1, "active_boid_state_index", 3, "Active Boid State Index",
	"",
	0, "*",
	PROP_INT, PROP_UNSIGNED | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	NULL, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_active_boid_state_index_get, BoidSettings_active_boid_state_index_set, NULL, NULL, rna_BoidSettings_active_boid_state_index_range, NULL, NULL, NULL, NULL, NULL,
	0, 10000, 0, INT_MAX, 1, 0, NULL
};

FloatPropertyRNA rna_BoidSettings_health = {
	{(PropertyRNA *)&rna_BoidSettings_strength, (PropertyRNA *)&rna_BoidSettings_active_boid_state_index,
	-1, "health", 8195, "Health",
	"Initial boid health when born",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, health), 4, NULL},
	BoidSettings_health_get, BoidSettings_health_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_strength = {
	{(PropertyRNA *)&rna_BoidSettings_aggression, (PropertyRNA *)&rna_BoidSettings_health,
	-1, "strength", 8195, "Strength",
	"Maximum caused damage on attack per second",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, strength), 4, NULL},
	BoidSettings_strength_get, BoidSettings_strength_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_aggression = {
	{(PropertyRNA *)&rna_BoidSettings_accuracy, (PropertyRNA *)&rna_BoidSettings_strength,
	-1, "aggression", 8195, "Aggression",
	"Boid will fight this times stronger enemy",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, aggression), 4, NULL},
	BoidSettings_aggression_get, BoidSettings_aggression_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_accuracy = {
	{(PropertyRNA *)&rna_BoidSettings_range, (PropertyRNA *)&rna_BoidSettings_aggression,
	-1, "accuracy", 8195, "Accuracy",
	"Accuracy of attack",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, accuracy), 4, NULL},
	BoidSettings_accuracy_get, BoidSettings_accuracy_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_range = {
	{(PropertyRNA *)&rna_BoidSettings_air_speed_min, (PropertyRNA *)&rna_BoidSettings_accuracy,
	-1, "range", 8195, "Range",
	"Maximum distance from which a boid can attack",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, range), 4, NULL},
	BoidSettings_range_get, BoidSettings_range_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_speed_min = {
	{(PropertyRNA *)&rna_BoidSettings_air_speed_max, (PropertyRNA *)&rna_BoidSettings_range,
	-1, "air_speed_min", 8195, "Min Air Speed",
	"Minimum speed in air (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_min_speed), 4, NULL},
	BoidSettings_air_speed_min_get, BoidSettings_air_speed_min_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_speed_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_acc_max, (PropertyRNA *)&rna_BoidSettings_air_speed_min,
	-1, "air_speed_max", 8195, "Max Air Speed",
	"Maximum speed in air",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_max_speed), 4, NULL},
	BoidSettings_air_speed_max_get, BoidSettings_air_speed_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_acc_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_ave_max, (PropertyRNA *)&rna_BoidSettings_air_speed_max,
	-1, "air_acc_max", 8195, "Max Air Acceleration",
	"Maximum acceleration in air (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_max_acc), 4, NULL},
	BoidSettings_air_acc_max_get, BoidSettings_air_acc_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_ave_max = {
	{(PropertyRNA *)&rna_BoidSettings_air_personal_space, (PropertyRNA *)&rna_BoidSettings_air_acc_max,
	-1, "air_ave_max", 8195, "Max Air Angular Velocity",
	"Maximum angular velocity in air (relative to 180 degrees)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_max_ave), 4, NULL},
	BoidSettings_air_ave_max_get, BoidSettings_air_ave_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_air_personal_space = {
	{(PropertyRNA *)&rna_BoidSettings_land_jump_speed, (PropertyRNA *)&rna_BoidSettings_air_ave_max,
	-1, "air_personal_space", 8195, "Air Personal Space",
	"Radius of boids personal space in air (% of particle size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, air_personal_space), 4, NULL},
	BoidSettings_air_personal_space_get, BoidSettings_air_personal_space_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_jump_speed = {
	{(PropertyRNA *)&rna_BoidSettings_land_speed_max, (PropertyRNA *)&rna_BoidSettings_air_personal_space,
	-1, "land_jump_speed", 8195, "Jump Speed",
	"Maximum speed for jumping",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_jump_speed), 4, NULL},
	BoidSettings_land_jump_speed_get, BoidSettings_land_jump_speed_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_speed_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_acc_max, (PropertyRNA *)&rna_BoidSettings_land_jump_speed,
	-1, "land_speed_max", 8195, "Max Land Speed",
	"Maximum speed on land",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_max_speed), 4, NULL},
	BoidSettings_land_speed_max_get, BoidSettings_land_speed_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 100.0f, 0.0f, 100.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_acc_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_ave_max, (PropertyRNA *)&rna_BoidSettings_land_speed_max,
	-1, "land_acc_max", 8195, "Max Land Acceleration",
	"Maximum acceleration on land (relative to maximum speed)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_max_acc), 4, NULL},
	BoidSettings_land_acc_max_get, BoidSettings_land_acc_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_ave_max = {
	{(PropertyRNA *)&rna_BoidSettings_land_personal_space, (PropertyRNA *)&rna_BoidSettings_land_acc_max,
	-1, "land_ave_max", 8195, "Max Land Angular Velocity",
	"Maximum angular velocity on land (relative to 180 degrees)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_max_ave), 4, NULL},
	BoidSettings_land_ave_max_get, BoidSettings_land_ave_max_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1.0f, 0.0f, 1.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_personal_space = {
	{(PropertyRNA *)&rna_BoidSettings_land_stick_force, (PropertyRNA *)&rna_BoidSettings_land_ave_max,
	-1, "land_personal_space", 8195, "Land Personal Space",
	"Radius of boids personal space on land (% of particle size)",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_personal_space), 4, NULL},
	BoidSettings_land_personal_space_get, BoidSettings_land_personal_space_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 10.0f, 0.0f, 10.0f, 10.0f, 3, 0.0f, NULL
};

FloatPropertyRNA rna_BoidSettings_land_stick_force = {
	{(PropertyRNA *)&rna_BoidSettings_use_flight, (PropertyRNA *)&rna_BoidSettings_land_personal_space,
	-1, "land_stick_force", 8195, "Land Stick Force",
	"How strong a force must be to start effecting a boid on land",
	0, "*",
	PROP_FLOAT, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	offsetof(BoidSettings, land_stick_force), 4, NULL},
	BoidSettings_land_stick_force_get, BoidSettings_land_stick_force_set, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, 0.0f, 1000.0f, 0.0f, 1000.0f, 10.0f, 3, 0.0f, NULL
};

BoolPropertyRNA rna_BoidSettings_use_flight = {
	{(PropertyRNA *)&rna_BoidSettings_use_land, (PropertyRNA *)&rna_BoidSettings_land_stick_force,
	-1, "use_flight", 3, "Allow Flight",
	"Allow boids to move in air",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_use_flight_get, BoidSettings_use_flight_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidSettings_use_land = {
	{(PropertyRNA *)&rna_BoidSettings_use_climb, (PropertyRNA *)&rna_BoidSettings_use_flight,
	-1, "use_land", 3, "Allow Land",
	"Allow boids to move on land",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_use_land_get, BoidSettings_use_land_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

BoolPropertyRNA rna_BoidSettings_use_climb = {
	{NULL, (PropertyRNA *)&rna_BoidSettings_use_land,
	-1, "use_climb", 3, "Allow Climbing",
	"Allow boids to climb goal objects",
	0, "*",
	PROP_BOOLEAN, PROP_NONE | PROP_UNIT_NONE, NULL, 0, {0, 0, 0}, 0,
	rna_Boids_reset, 0, NULL, NULL,
	0, -1, NULL},
	BoidSettings_use_climb_get, BoidSettings_use_climb_set, NULL, NULL, NULL, NULL, NULL, NULL, 0, NULL
};

StructRNA RNA_BoidSettings = {
	{(ContainerRNA *)&RNA_Brush, (ContainerRNA *)&RNA_BoidState,
	NULL,
	{(PropertyRNA *)&rna_BoidSettings_rna_properties, (PropertyRNA *)&rna_BoidSettings_use_climb}},
	"BoidSettings", NULL, NULL, 4, "Boid Settings",
	"Settings for boid physics",
	"*", 17,
	NULL, (PropertyRNA *)&rna_BoidSettings_rna_properties,
	NULL,
	NULL,
	NULL,
	rna_BoidSettings_path,
	NULL,
	NULL,
	NULL,
	NULL,
	{NULL, NULL}
};

